module memory
#(
    parameter MEM_DEPTH = 32'10000
) (
    input wire  [31:0]              address,
    output reg  [`IN_ENTRY_W-1:0]   data_out    [`IN_DIM-1:0]
);

reg [`IN_ENTRY_W-1:0] mem [MEM_DEPTH:0][`IN_DIM-1:0];

always @(*) begin
    integer i;
    for (i = 0; i < `IN_DIM; i = i + 1) begin
        data_out[i] <= mem[address][i];
    end
end

// Load memory
initial begin
    reg [31:0] temp_arr [`SAMPLE_CNT*`IN_DIM*`IN_ENTRY_WORDCNT];
    $readmemh(`MEM_PATH, temp_arr);

    integer i, j, k;
    for (i = 0; i < `SAMPLE_CNT; i = i + 1) begin
        for (j = 0; j < `IN_DIM; j = j + 1) begin
            for (k = 0; k < `IN_ENTRY_WORDCNT; k = k + 1) begin
                mem[i][j][32*(k+1)-1:32*k] = temp_arr[i*j*k];
            end
        end
    end
end

endmodule