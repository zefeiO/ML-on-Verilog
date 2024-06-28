module dotprod #(
    parameter DATA_W      = 32,
    parameter IN_DIM    = 1
) (
    input wire clk,

    input wire signed [DATA_W-1:0] vec_A [IN_DIM-1:0],
    input wire signed [DATA_W-1:0] vec_B [IN_DIM-1:0],

    output reg signed [DATA_W-1:0] out
);

localparam P2 = 1 << $clog2(IN_DIM); // Smallest power of 2 >= IN_DIM
localparam int NUM_STAGES = $clog2(P2);
reg signed [DATA_W-1:0] sum_regs [0:P2-1][0:NUM_STAGES];

always @(posedge clk) begin
    integer i, stage;
    // cycle 1: element-wise multiplication
    for (i = 0; i < IN_DIM; i = i + 1) begin
        sum_regs[i][0] <= vec_A[i] * vec_B[i];
    end
    for (i = IN_DIM; i < P2; i = i + 1) begin
        sum_regs[i][0] <= 0;
    end

    // cycle 2 onwards: adder tree
    for (stage = 0; stage < NUM_STAGES; stage = stage + 1) begin
        for (i = 0; i < (P2 >> (stage + 1)); i = i + 1) begin
            sum_regs[i][stage+1] <= sum_regs[2*i][stage] + sum_regs[2*i+1][stage];
        end
    end

    // last cycle
    out <= sum_regs[0][NUM_STAGES];
end

endmodule