module model_dut ();                        //simulation testbench 

reg clk, reset;
reg [31:0] addr_r;
reg [`DATA_W-1:0] in_r [0:`IN_DIM-1];
reg [`DATA_W-1:0] out_r [0:`OUT_DIM-1];


// combinational read
memory mem (
    .address(addr_r),
    .data_out(in_r)
);

model m0 (
    .clk(clk),
    .reset(reset),

    .in_data(in_r),
    .in_valid(1),
    .out_data(out_r),
    .out_ready()
); 

initial begin
    forever #10 clk = ~clk;
end

initial begin
    addr_r = 0;
    reset = 1;
    #20;
    reset = 0;
    forever begin
        addr_r = addr_r + 1;
        #20;
    end
end

integer i;
always @(posedge clk) begin
    // termination condition: all F's read from memory
    if (in_r[0] == {`DATA_W{1'b1}}) begin
        $display("Simulation reached end of memory. Exiting...");
        $finish;
    end
    
    for (i = 0; i < `OUT_DIM; i = i + 1) begin
        $display("%h", out_r[i]);
    end
end

endmodule