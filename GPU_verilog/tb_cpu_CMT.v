`timescale 1ns / 1ps

module tb_cpu_CMT();

    reg CLK;
    reg RSTB;

    // Debug Ports
    reg  [8:0]  debug_pc;
    reg         debug_enable;
    reg  [31:0] debug_instr_in;
    reg         debug_instr_write_en;
    wire [31:0] debug_instr_out;
    
    reg  [7:0]  debug_addr_in;
    reg  [63:0] debug_data_in;
    reg         debug_data_write_en;
    wire [63:0] debug_data_out;
    wire [8:0]  PC_END;

    // Instantiate the CPU
    cpu_CMT uut (
        .CLK(CLK),
        .RSTB(RSTB),
        .debug_pc(debug_pc),
        .debug_enable(debug_enable),
        .debug_instr_in(debug_instr_in),
        .debug_instr_write_en(debug_instr_write_en),
        .debug_instr_out(debug_instr_out),
        .debug_addr_in(debug_addr_in),
        .debug_data_in(debug_data_in),
        .debug_data_write_en(debug_data_write_en),
        .debug_data_out(debug_data_out),
        .PC_END(PC_END)
    );

    // 100MHz Clock
    always #5 CLK = ~CLK;

    initial begin
        // Initialize Signals
        CLK = 0;
        RSTB = 0; // Hold CPU in reset
        debug_enable = 1;
        debug_instr_write_en = 0;
        debug_data_write_en = 0;
        
        // Wait a few cycles
        #25; 

        @(negedge CLK);
        debug_data_write_en = 1;

        debug_addr_in = 8'd0; debug_data_in = 64'hc0e5_4097_3f80_4000; @(negedge CLK); // Vector 1
        debug_addr_in = 8'd1; debug_data_in = 64'h4097_4097_4000_4080; @(negedge CLK); // Vector 2
        
        debug_data_write_en = 0; // Disable data write

        debug_instr_write_en = 1;

        debug_pc = 9'd0;  debug_instr_in = 32'h8C010000; @(negedge CLK); // LW $1, 0($0)
        debug_pc = 9'd1;  debug_instr_in = 32'h8C020001; @(negedge CLK); // LW $2, 1($0)
        
        debug_pc = 9'd2;  debug_instr_in = 32'h00000000; @(negedge CLK); 
        debug_pc = 9'd3;  debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd4;  debug_instr_in = 32'h00000000; @(negedge CLK);

        debug_pc = 9'd5;  debug_instr_in = 32'h10221800; @(negedge CLK); // ADD_FP  $3, $1, $2
        debug_pc = 9'd6;  debug_instr_in = 32'h14222000; @(negedge CLK); // MULT_FP $4, $1, $2
        
        debug_pc = 9'd7;  debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd8;  debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd9;  debug_instr_in = 32'h00000000; @(negedge CLK);

        debug_pc = 9'd10; debug_instr_in = 32'h18802800; @(negedge CLK); // ReLU $5, $4
        
        debug_pc = 9'd11; debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd12; debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd13; debug_instr_in = 32'h00000000; @(negedge CLK);

		  debug_pc = 9'd18; debug_instr_in = 32'h1C223000; @(negedge CLK); //MAC $6 = $6 + $1*$2

		  debug_pc = 9'd19; debug_instr_in = 32'h00000000; @(negedge CLK); 
		  debug_pc = 9'd20; debug_instr_in = 32'h00000000; @(negedge CLK);
		  debug_pc = 9'd21; debug_instr_in = 32'h00000000; @(negedge CLK);

		  debug_pc = 9'd22; debug_instr_in = 32'hAC060006; @(negedge CLK); // SW $6, 6($0)

        debug_pc = 9'd14; debug_instr_in = 32'hAC030002; @(negedge CLK); // SW $3, 2($0) -> Stores ADD result
        debug_pc = 9'd15; debug_instr_in = 32'hAC040003; @(negedge CLK); // SW $4, 3($0) -> Stores MULT result
        debug_pc = 9'd16; debug_instr_in = 32'hAC050004; @(negedge CLK); // SW $5, 4($0) -> Stores ReLU result
        
        debug_pc = 9'd17; debug_instr_in = 32'hFC000000; @(negedge CLK); // HALT
        
        debug_instr_write_en = 0; // Disable instruction write
        
        debug_instr_write_en = 0;
        debug_enable = 0; // Release debug control so CPU can run memory
        
        @(negedge CLK);
        RSTB = 1; // Start CPU
        
        #(50 * 10);
        
        @(negedge CLK);
        debug_enable = 1; // Re-enable debug mode
        
        // Read Address 2
        debug_addr_in = 8'd2;
        @(negedge CLK); @(negedge CLK); // Wait for block RAM read latency
        $display("-------------------------------------------------");
        $display("ADD_FP Result  : %h", debug_data_out);
        $display("Expected       : c01c4117404040c0"); 
        
        // Read Address 3
        debug_addr_in = 8'd3;
        @(negedge CLK); @(negedge CLK); // Wait for block RAM read latency
        $display("MULT_FP Result : %h", debug_data_out);
        $display("Expected       : c20741B240004100");
        $display("-------------------------------------------------");
		  debug_addr_in = 8'd4;
        @(negedge CLK); @(negedge CLK); // Wait for block RAM read latency
        $display("MULT_FP Result : %h", debug_data_out);
        $display("-------------------------------------------------");
		  
		  debug_addr_in = 8'd6;
        @(negedge CLK); @(negedge CLK); // Wait for block RAM read latency
        $display("MULT_FP Result : %h", debug_data_out);
        $display("-------------------------------------------------");
        
        $stop;
    end
endmodule