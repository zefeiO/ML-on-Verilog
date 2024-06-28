module weights
#(
    parameter DATA_W = 32,
    parameter IN_DIM = 1,
    parameter L1_DIM = 1,
    parameter OUT_DIM = 1
)
(
    output wire [DATA_W-1:0] w1 [0:L1_DIM-1][0:IN_DIM-1],
    output wire [DATA_W-1:0] w2 [0:OUT_DIM-1][0:L1_DIM-1]
);

reg [DATA_W-1:0] weights_mem [0:(IN_DIM*L1_DIM + L1_DIM*OUT_DIM) - 1];

// combinational read
genvar i, j;
generate
    for (i = 0; i < L1_DIM; i++) begin
        for (j = 0; j < IN_DIM; j++) begin
            assign w1[i][j] = weights_mem[i*IN_DIM + j];
        end
    end
    for (i = 0; i < OUT_DIM; i++) begin
        for (j = 0; j < L1_DIM; j++) begin
            assign w2[i][j] = weights_mem[i*L1_DIM + j];
        end
    end
endgenerate

// Load memory in simulation
// initial $readmemh(`MEM_PATH, weights_mem);

endmodule