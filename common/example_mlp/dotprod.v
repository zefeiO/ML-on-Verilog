module dotprod #(
    parameter DATA_W      = 32,
    parameter IN_DIM    = 1
) (
    input wire signed [DATA_W-1:0] vec_A [IN_DIM-1:0],
    input wire signed [DATA_W-1:0] vec_B [IN_DIM-1:0],

    output reg signed [DATA_W-1:0] out
);

localparam P2 = 1 << $clog2(IN_DIM + (IN_DIM & (IN_DIM - 1) != 0)); // Smallest power of 2 >= IN_DIM
localparam int NUM_STAGES = $clog2(P2);
wire signed [DATA_W-1:0] sum_wires [0:P2-1][0:NUM_STAGES];

genvar i, stage;
generate
    for (i = 0; i < P2; i = i + 1) begin
        assign sum_wires[i][0] = (i < N) ? vec_A[i] * vec_B[i] : 0;
    end

    for (stage = 0; stage < NUM_STAGES; stage = stage + 1) begin
        for (i = 0; i < (P2 >> (stage + 1)); i = i + 1) begin : sum_pairs
            assign sum_wires[i][stage+1] = sum_wires[2*i][stage] + sum_wires[2*i+1][stage];
        end
    end
endgenerate

always @(*) begin
    out = sum_wires[0][NUM_STAGES];
end

endmodule