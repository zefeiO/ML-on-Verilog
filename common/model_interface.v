`define IN_DIM ...
`define L1_DIM ...
`define Lx_DIM ...
...
`define OUT_DIM ...
`define DATA_W

module model (
    input wire              clk,
    input wire              reset,

	input wire [`DATA_W-1:0]   in_data     [0:`IN_DIM-1],
	input wire              in_valid,
	output reg [`DATA_W-1:0]  out_data    [0:`OUT_DIM-1],
	output reg              out_ready
);


    
endmodule
