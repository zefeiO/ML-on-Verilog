`define IN_DIM 3
`define L1_DIM 3
`define OUT_DIM 1
`define DATA_W 32

module model (
    input wire clk,
    input wire reset,

	input wire [`DATA_W-1:0] in_data [0:`IN_DIM-1],
	input wire in_valid,
	output reg [`DATA_W-1:0] out_data [0:`OUT_DIM-1],
	output reg out_ready
);

reg [`DATA_W-1:0] l1_out [0:`L1_DIM-1];
reg in_valid_r0;
reg [`DATA_W-1:0] l2_in [0:`L1_DIM-1];
reg in_valid_r1;
reg [`DATA_W-1:0] l2_out [0:`OUT_DIM-1];
reg in_valid_r2;

always @(posedge clk) begin
    in_valid_r0 <= in_valid;
    in_valid_r1 <= in_valid_r0;
    in_valid_r2 <= in_valid_r1;
    out_ready <= in_valid_r2;

    if (reset) begin
        in_valid_r0 <= 1'b0;
        in_valid_r1 <= 1'b0;
        in_valid_r2 <= 1'b0;
        out_ready <= 1'b0;
    end
end

wire [`DATA_W-1:0] w1 [0:`L1_DIM-1][0:`IN_DIM-1];
wire [`DATA_W-1:0] w2 [0:`OUT_DIM-1][0:`L1_DIM-1];

memory #(
    DATA_W = `DATA_W,
    IN_DIM = `IN_DIM,
    L1_DIM = `L1_DIM,
    OUT_DIM = `OUT_DIM
) weights_mem (
    .w1(w1),
    .w2(w2)
);

matmul #(
    DATA_W = `DATA_W,
    IN_DIM = `IN_DIM,
    OUT_DIM = `L1_DIM
) layer1 (
    .clk(clk),
    .weights(w1),
    .vec_in(in_data),
    .vec_out(l1_out)
);

relu #(
    DATA_W = `DATA_W,
    DIM = `L1_DIM
) layer1_act (
    .clk(clk),
    .vec_in(l1_out),
    .vec_out(l2_in)
);

matmul #(
    DATA_W = `DATA_W,
    IN_DIM = `L1_DIM,
    OUT_DIM = `OUT_DIM
) layer1 (
    .clk(clk),
    .weights(w2),
    .vec_in(l2_in),
    .vec_out(l2_out)
);

relu #(
    DATA_W = `DATA_W,
    DIM = `OUT_DIM
) layer1_act (
    .clk(clk),
    .vec_in(l2_out),
    .vec_out(out_data)
);

endmodule