`timescale 1ns / 1ps

// =========================================================================
// 1. Leading Zero Counter (LZC) for bfloat16 Normalization
// =========================================================================
module lzc_8bit (
    input  wire [7:0] in,
    output wire [2:0] count,
    output wire       all_zero
);
    assign all_zero = (in == 8'b0);
    assign count = in[7] ? 3'd0 :
                   in[6] ? 3'd1 :
                   in[5] ? 3'd2 :
                   in[4] ? 3'd3 :
                   in[3] ? 3'd4 :
                   in[2] ? 3'd5 :
                   in[1] ? 3'd6 :
                   in[0] ? 3'd7 : 3'd0;
endmodule

// =========================================================================
// 2. Optimized Single-Lane bfloat16 Adder
// =========================================================================
module bfloat16_adder_opt (
    input  wire [15:0] a,
    input  wire [15:0] b,
    output wire [15:0] out
);

    wire sign_a = a[15];
    wire sign_b = b[15];
    wire [7:0] exp_a = a[14:7];
    wire [7:0] exp_b = b[14:7];
    wire [7:0] sig_a = (|exp_a) ? {1'b1, a[6:0]} : 8'b0; // Hidden bit
    wire [7:0] sig_b = (|exp_b) ? {1'b1, b[6:0]} : 8'b0;

    // Compare and swap logic (Hardware datapath routing)
    wire a_is_larger = (a[14:0] >= b[14:0]);
    wire [7:0] exp_large = a_is_larger ? exp_a : exp_b;
    wire [7:0] exp_small = a_is_larger ? exp_b : exp_a;
    wire [7:0] sig_large = a_is_larger ? sig_a : sig_b;
    wire [7:0] sig_small = a_is_larger ? sig_b : sig_a;
    wire       sign_out  = a_is_larger ? sign_a : sign_b;

    // Alignment
    wire [7:0] exp_diff   = exp_large - exp_small;
    wire [7:0] sig_aligned = sig_small >> exp_diff; // Barrel shifter

    // Math (Add or Sub)
    wire do_sub = (sign_a ^ sign_b); // XOR checks if signs are different
    wire [8:0] sum;                  // 9 bits to catch overflow
    assign sum = do_sub ? (sig_large - sig_aligned) : (sig_large + sig_aligned);

    // Normalization logic
    wire [2:0] lz_count;
    wire       is_zero;
    lzc_8bit lzc (
        .in(sum[7:0]), 
        .count(lz_count), 
        .all_zero(is_zero)
    );

    // Calculate final exponent and shift mantissa
    wire [7:0] exp_final;
    wire [6:0] sig_final;

    assign exp_final = (sum[8])   ? (exp_large + 1'b1) :    // Overflow
                       (is_zero)  ? 8'b0 :                  // Complete cancellation
                                    (exp_large - lz_count); // Normalization

    // Shift logic based on overflow or LZC
    wire [7:0] normalized_sig = (sum[8]) ? (sum[8:1]) : (sum[7:0] << lz_count);
    assign sig_final = normalized_sig[6:0]; // Drop the hidden '1'

    // Final Output Packing
    assign out = (is_zero) ? 16'b0 : {sign_out, exp_final, sig_final};

endmodule

// =========================================================================
// 3. Single-Lane bfloat16 Multiplier
// =========================================================================
module bfloat16_mult (
    input  wire [15:0] a,
    input  wire [15:0] b,
    output wire [15:0] out
);

    wire sign_a = a[15];
    wire sign_b = b[15];
    wire [7:0] exp_a = a[14:7];
    wire [7:0] exp_b = b[14:7];
    
    // Add hidden '1' unless the number is zero
    wire [7:0] sig_a = (|exp_a) ? {1'b1, a[6:0]} : 8'b0; 
    wire [7:0] sig_b = (|exp_b) ? {1'b1, b[6:0]} : 8'b0;

    // 1. Sign: XOR the sign bits
    wire sign_out = sign_a ^ sign_b;

    // 2. Mantissa: Multiply the 8-bit significands (Yields 16 bits)
    wire [15:0] sig_prod = sig_a * sig_b;

    // 3. Normalization: Check if the top bit (bit 15) is 1
    wire norm_shift = sig_prod[15];
    wire [6:0] final_sig = norm_shift ? sig_prod[14:8] : sig_prod[13:7];

    // 4. Exponent: Add exponents, subtract bias (127), and add shift if normalized
    wire [8:0] exp_sum = exp_a + exp_b - 8'd127 + norm_shift;
    
    // Catch Underflow/Overflow or Zero inputs
    wire is_zero = (exp_a == 0) || (exp_b == 0) || (exp_sum[8] == 1'b1);
    wire [7:0] final_exp = is_zero ? 8'b0 : exp_sum[7:0];

    // 5. Pack Output
    assign out = is_zero ? 16'b0 : {sign_out, final_exp, final_sig};

endmodule

// =========================================================================
// 4. 64-bit SIMD Wrapper (4-way parallel bfloat16 Adder)
// =========================================================================
module bfloat16_simd64_adder (
    input  wire [63:0] reg_a,
    input  wire [63:0] reg_b,
    output wire [63:0] reg_out
);

    bfloat16_adder_opt lane0 (.a(reg_a[15:0]),  .b(reg_b[15:0]),  .out(reg_out[15:0]));
    bfloat16_adder_opt lane1 (.a(reg_a[31:16]), .b(reg_b[31:16]), .out(reg_out[31:16]));
    bfloat16_adder_opt lane2 (.a(reg_a[47:32]), .b(reg_b[47:32]), .out(reg_out[47:32]));
    bfloat16_adder_opt lane3 (.a(reg_a[63:48]), .b(reg_b[63:48]), .out(reg_out[63:48]));

endmodule

// =========================================================================
// 5. 64-bit SIMD Wrapper (4-way parallel bfloat16 Multiplier)
// =========================================================================
module bfloat16_simd64_mult (
    input  wire [63:0] reg_a,
    input  wire [63:0] reg_b,
    output wire [63:0] reg_out
);

    bfloat16_mult lane0 (.a(reg_a[15:0]),  .b(reg_b[15:0]),  .out(reg_out[15:0]));
    bfloat16_mult lane1 (.a(reg_a[31:16]), .b(reg_b[31:16]), .out(reg_out[31:16]));
    bfloat16_mult lane2 (.a(reg_a[47:32]), .b(reg_b[47:32]), .out(reg_out[47:32]));
    bfloat16_mult lane3 (.a(reg_a[63:48]), .b(reg_b[63:48]), .out(reg_out[63:48]));

endmodule