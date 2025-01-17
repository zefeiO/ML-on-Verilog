module matmul #(
    parameter DATA_W = 32,
    parameter IN_DIM = 1,
    parameter OUT_DIM = 1
) (
    input wire clk,

    input wire [DATA_W-1:0] weights [OUT_DIM-1:0][IN_DIM-1:0],
    input wire [DATA_W-1:0] vec_in [IN_DIM-1:0],

    output reg [DATA_W-1:0] vec_out [OUT_DIM-1:0]
);

reg resets [0:IN_DIM-1];
initial resets[0] = 1;

wire readys [0:IN_DIM-1];
wire [DATA_W-1:0] vec_outs [0:IN_DIM-1][0:OUT_DIM-1];
wire [DATA_W-1:0] vec_outs_mux [0:OUT_DIM-1];

always @(posedge clk) begin
    vec_out <= vec_outs_mux;

    for (int i = 0; i < IN_DIM - 1; i = i + 1) begin
        resets[i+1] <= resets[i];
    end
    resets[0] <= resets[IN_DIM-1];
end

for (genvar i = 0; i < IN_DIM; i++) begin
    for (genvar j = 0; j < OUT_DIM; j++) begin
        assign vec_outs_mux[j] = readys[i] ? vec_outs[i][j] : {DATA_W{1'b0}};
    end
end

for (genvar j = 0; j < IN_DIM; j = j + 1) begin
    systolic #(
        .DATA_W(DATA_W),
        .IN_DIM(IN_DIM),
        .OUT_DIM(OUT_DIM)
    ) s (
        .clk(clk),
        .reset(resets[j]),
        .valid(resets[j]),
        .weights(weights),
        .vec_in(vec_in),
        .ready(readys[j]),
        .vec_out(vec_outs[j])
    );
end

endmodule