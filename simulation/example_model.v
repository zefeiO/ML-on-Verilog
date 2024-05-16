module model #(
    parameter IN_W      = 32,
    parameter IN_DIM    = 1,
    parameter OUT_W     = 32,
    parameter OUT_DIM   = 1
) (
    input wire              clk,
    input wire              reset,

	input wire [IN_W-1:0]   in_data     [0:IN_DIM-1],
	input wire              in_valid,
	output reg [OUT_W-1:0]  out_data    [0:OUT_DIM-1],
	output reg              out_ready
);

always @(posedge clk) begin
    out_ready <= 0;
    if (in_valid) begin
        integer i;
        for (i = 0; i < OUT_DIM; i = i + 1) begin
            out_data[i] <= {OUT_W{1'b1}};
        end
    end
end
    
endmodule
