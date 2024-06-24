module matmul #(
    parameter DATA_W      = 32,
    parameter IN_DIM    = 1,
    parameter OUT_DIM   = 1
) (
    input wire clk,

    input wire [DATA_W-1:0] weights [OUT_DIM-1:0][IN_DIM-1:0],
    input wire [DATA_W-1:0] vec_in [IN_DIM-1:0],

    output reg [DATA_W-1:0] vec_out [OUT_DIM-1:0]
);

wire [DATA_W-1:0] result [0:OUT_DIM-1];

genvar out_idx;
generate
    for (out_idx = 0; out_idx < OUT_DIM; out_idx = out_idx + 1) begin
        dotprod #(
            DATA_W = DATA_W,
            IN_DIM = IN_DIM
        ) dp (
            .vec_A(vec_in),
            .vec_B(weights[out_idx]),

            .out(result[out_idx])
        );
    end
endgenerate

integer i;
always @(posedge clk) begin
    for (i = 0; i < OUT_DIM; i = i + 1) begin
        vec_out[i] <= result[i];
    end
end
    
endmodule