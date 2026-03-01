

`timescale 1ns / 1ps

// Operation List: 
// ADDINT x, SUBINT x, COMP x, SLT x, ADDFP bug, MULTFP, ReLU x, ACCUM





module alu_gpu(A, 
              ALUOp, 
              B,
              D, 
              C, 
              N, 
              O, 
              V, 
              Z);

    input [63:0] A;
    input [3:0] ALUOp;
    input [63:0] B;
    input [63:0] D;
    output C;
    output N;
    output reg [63:0] O;
    output V;
    output Z;
   
// =============================
// Helper wire for grabbing integer overflow 
// =============================

    reg [16:0] int_temp_0;

    
// =============================
// Integer output signals
// =============================

    assign Z = O[15:0] == 16'd0 ? 1 : 0;  // Assumes that when doing compare, the integer is in the lowest slot
    assign V = int_temp_0[16] != int_temp_0[15] ? 1: 0;
    assign C = int_temp_0[16];
	assign N = int_temp_0[15];  


// =============================
// bfloat 16 signals
// =============================

    wire [7:0]fp_a_mant[3:0];
    wire [7:0]fp_b_mant[3:0];
    wire [7:0]fp_d_mant[3:0];

    // Append the implicit bit to mantissa
    assign fp_a_mant[0] = {1'b1, A[6:0]};
    assign fp_a_mant[1] = {1'b1, A[22:16]};
    assign fp_a_mant[2] = {1'b1, A[38:32]};
    assign fp_a_mant[3] = {1'b1, A[54:48]};

    assign fp_b_mant[0] = {1'b1, B[6:0]};
    assign fp_b_mant[1] = {1'b1, B[22:16]};
    assign fp_b_mant[2] = {1'b1, B[38:32]};
    assign fp_b_mant[3] = {1'b1, B[54:48]};

    assign fp_d_mant[0] = {1'b1, D[6:0]};
    assign fp_d_mant[1] = {1'b1, D[22:16]};
    assign fp_d_mant[2] = {1'b1, D[38:32]};
    assign fp_d_mant[3] = {1'b1, D[54:48]};

    wire [7:0]fp_a_exp[3:0];

    wire [7:0]fp_b_exp[3:0];
    wire [7:0]fp_d_exp[3:0];

    assign fp_a_exp[0] = A[14:7];
    assign fp_a_exp[1] = A[30:23];
    assign fp_a_exp[2] = A[46:39];
    assign fp_a_exp[3] = A[62:55];

    assign fp_b_exp[0] = B[14:7];
    assign fp_b_exp[1] = B[30:23];
    assign fp_b_exp[2] = B[46:39];
    assign fp_b_exp[3] = B[62:55];
    
    assign fp_d_exp[0] = D[14:7];
    assign fp_d_exp[1] = D[30:23];
    assign fp_d_exp[2] = D[46:39];
    assign fp_d_exp[3] = D[62:55];

    reg [15:0]fp_mant_result[3:0];

    reg [8:0]fp_exp_result[3:0];

    reg [3:0]sign;

    integer i;

// =============================
// ALU Logic
// =============================

    always @(*)
    begin
        case (ALUOp)
            4'h1:   begin   // SUB INT
                        int_temp_0 = {A[15], A[15:0]} - {B[15], B[15:0]};      
                        O[15:0] = int_temp_0[15:0];  // Keeping the arith temp reassignment to reduce generated HW for O [15:0]
                        O[31:16] = A[31:16] - B[31:16];
                        O[47:32] = A[47:32] - B[47:32];
                        O[63:48] = A[63:48] - B[63:48];
                    end

            4'h2:   begin   // COMP
                        int_temp_0 = {A[15], A[15:0]} - {B[15], B[15:0]};      
                        O[15:0] = int_temp_0[15:0];   
                        O[31:16] = 16'hX;   
                        O[47:32] = 16'hX;
                        O[63:48] = 16'hX;
                    end

            4'h3:   begin   // SLT
                        int_temp_0 = $signed(A[15:0]) < $signed(B[15:0]) ? 16'd1 : 16'd0;     
                        O[15:0] = int_temp_0[15:0];     // Keeping the arith temp reassignment to reduce generated HW for O [15:0]
                        O[31:16] = 16'hX;   
                        O[47:32] = 16'hX;
                        O[63:48] = 16'hX;
                    end

            4'h4:   begin   // ADD FP
                        
                        for (i = 0; i < 4; i = i+1)begin
                            // Calculate magnitude
                            if (A[15 + 16 * i] == B[15 + 16 * i]) // Same sign, can directly add together
                            begin
                                sign[i] = A[15 + 16 * i];
                                fp_mant_result[i] = fp_a_mant[i] + fp_b_mant[i];
                            end
                            else // Different signs, determine larger term, large - small
                            begin
                                if (fp_a_mant[i] > fp_b_mant[i]) // unsigned comparison
                                begin
                                    sign[i] = A[15 + 16 * i];
                                    fp_mant_result[i] = fp_a_mant[i] - fp_b_mant[i];
                                end
                                else
                                begin
                                    sign[i] = B[15 + 16 * i];
                                    fp_mant_result[i] = fp_b_mant[i] - fp_a_mant[i];
                                end
                            end

                            // Normalize to 1.xxxxxxx, drop leading 1.
                            if (fp_mant_result[i][8] == 1'b1) // If significant 1 place value moved, move over 1 place and increment exponent
                                O[16 * i +: 16] = {sign[i], fp_a_exp[i] + 1, fp_mant_result[i][7:1]};
                            else if (fp_mant_result[i][7] == 1'b1)    // Places maintained, no need to shift
                                O[16 * i +: 16] = {sign[i], fp_a_exp[i], fp_mant_result[i][6:0]};
                            else // Performed subtraction of magnitude values, can lose place value, decrement exponent instead // two cases lose place value, gain place value?
                                O[16 * i +: 16] = {sign[i], fp_a_exp[i] - 1, fp_mant_result[i][5:0], 1'b0};

                        end
                       

                    end

            4'h5:   begin   // MULT FP
                        
                        for (i = 0; i < 4; i = i + 1)begin
                            // Basic operations
                            fp_mant_result[i] = fp_a_mant[i] * fp_b_mant[i];
                            fp_exp_result[i] = fp_a_exp[i] + fp_b_exp[i] - 127;
                            sign[i] = A[15 + 16 * i] ^ B[15 + 16 * i];

                            // Normalization. Due to implicit bit, leading 1 guaranteed at 15 or 14. Decimal places: 7 + 7 = 14, so after 14 index.
                            if (fp_mant_result[i][15] == 1'b1)  // Increment exponent, shift output
                                O[16 * i +: 16] = {sign[i], fp_a_exp[i] + 1, fp_mant_result[i][15:9]};
                            else    
                                O[16 * i +: 16] = {sign[i], fp_a_exp[i], fp_mant_result[i][14:8]};

                        end
                    end

            4'h6:   begin   // ReLU
                    // Check sign bit.
                        for (i = 0; i < 4; i = i + 1)
                            O[16 * i +: 16] = A[15 + 16 * i] == 0? A[16 * i +: 16] : 16'b0;
                    end

            4'h7:   begin   // ACCUM
                        O[15:0] = 16'hX;
                        O[31:16] = 16'hX;   
                        O[47:32] = 16'hX;
                        O[63:48] = 16'hX;
                    end

            default:begin   // ADD INT
                        int_temp_0 = {A[15], A[15:0]} + {B[15], B[15:0]};
                        O[15:0] = int_temp_0[15:0];
                        O[31:16] = A[31:16] + B[31:16];
                        O[47:32] = A[47:32] + B[47:32];
                        O[63:48] = A[63:48] + B[63:48];
                    end
        endcase
    end
endmodule
