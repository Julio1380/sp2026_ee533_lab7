`timescale 1ns / 1ps

module alu_64 (
    input  wire [63:0] A,           // 64-bit EX_operand_A [cite: 90]
    input  wire [3:0]  ALUOp,       // 4-bit ALU operation from Control Unit
    input  wire [63:0] B,           // 64-bit EX_operand_B [cite: 90]
    input  wire [63:0] ACC_in,      // 64-bit EX_operand_Acc_in (From EX_Zd)
    input  wire [7:0]  byte_select, // Unused: tied to 8'b0 in CPU [cite: 90]
    input  wire [6:0]  ShiftA,      // Unused: tied to 7'b0 in CPU [cite: 90]
    input  wire [6:0]  ShiftB,      // Unused: tied to 7'b0 in CPU [cite: 90]
    output reg  [63:0] O,           // 64-bit Output Result [cite: 90]
    output wire        N,           // Negative flag 
    output wire        V,           // Overflow flag 
    output wire        C,           // Carry flag [cite: 8, 11]
    output wire        Z            // Zero flag used for Branching [cite: 9, 10]
);

    // --- Bfloat16 SIMD Hardware Instantiations ---
    
    // Standard SIMD Adder
    wire [63:0] simd_bfloat_add_out;
    bfloat16_simd64_adder bfloat_adder (
        .reg_a(A), 
        .reg_b(B), 
        .reg_out(simd_bfloat_add_out)
    );

    // Standard SIMD Multiplier
    wire [63:0] simd_bfloat_mult_out;
    bfloat16_simd64_mult bfloat_mult (
        .reg_a(A), 
        .reg_b(B), 
        .reg_out(simd_bfloat_mult_out)
    );
    
    // MAC Support: Second Adder to add Product + Accumulator
    wire [63:0] mac_final_out;
    bfloat16_simd64_adder bfloat_mac_adder (
        .reg_a(simd_bfloat_mult_out), // Product of A * B
        .reg_b(ACC_in),               // Current value of Rd
        .reg_out(mac_final_out)
    );
	 
    // Integer Path Logic (32-bit operations)
    wire [31:0] A32 = A[31:0];
    wire [31:0] B32 = B[31:0];
    reg [32:0] int_res; 

    always @(*) begin
        case (ALUOp)
            4'b0000: int_res = {1'b0, A32} + {1'b0, B32}; // ADD [cite: 14]
            4'b0001: int_res = {1'b0, A32} - {1'b0, B32}; // SUB [cite: 12]
            4'b0010: int_res = {1'b0, A32} - {1'b0, B32}; // COMP
            default: int_res = 33'b0;
        endcase
    end

    // Assign Final 64-bit Output
    always @(*) begin
        case (ALUOp)
            // Integer Ops (Sign extended from 32-bit result) [cite: 2]
            4'b0000: O = {{32{int_res[31]}}, int_res[31:0]}; 
            4'b0001: O = {{32{int_res[31]}}, int_res[31:0]}; 
            4'b0010: O = {{32{int_res[31]}}, int_res[31:0]}; 
            
            // Set Less Than [cite: 13, 14]
            4'b1010: O = ($signed(A32) < $signed(B32)) ? 64'd1 : 64'd0; 
				
            // Floating Point Ops
            4'b0100: O = simd_bfloat_add_out;            // ADD_FP
            4'b0101: O = simd_bfloat_mult_out;           // MULT_FP
            
            // SIMD ReLU: Threshold each 16-bit chunk independently
            4'b0110: O = { (A[63] == 1'b1) ? 16'h0000 : A[63:48], 
                           (A[47] == 1'b1) ? 16'h0000 : A[47:32], 
                           (A[31] == 1'b1) ? 16'h0000 : A[31:16], 
                           (A[15] == 1'b1) ? 16'h0000 : A[15:0] }; 
            
            // MAC (Multiply-Accumulate): O = ACC_in + (A * B)
            4'b0111: O = mac_final_out; 
            
            default: O = 64'b0;
        endcase
    end

    // --- Status Flags ---
    assign Z = (O == 64'b0);
    assign N = O[63]; 
    
    // Carry flag for integer operations [cite: 11]
    assign C = (ALUOp[3:2] == 2'b00) ? int_res[32] : 1'b0; 
    
    // Overflow flag logic for 32-bit signed integers [cite: 11]
    assign V = (ALUOp == 4'b0000) ? (~(A32[31] ^ B32[31]) & (A32[31] ^ int_res[31])) :
               (ALUOp == 4'b0001 || ALUOp == 4'b0010) ? ((A32[31] ^ B32[31]) & (A32[31] ^ int_res[31])) : 1'b0;

endmodule