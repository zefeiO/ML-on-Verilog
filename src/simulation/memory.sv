module memory
#(
    parameter MEM_DEPTH = 32'd10000
) (
    input wire  [31:0]              address,
    output reg  [`DATA_W-1:0]   data_out    [`IN_DIM-1:0]
);

reg [`DATA_W-1:0] mem [MEM_DEPTH:0][`IN_DIM-1:0];
integer x, i, j, k;

always @(*) begin           
    for (x = 0; x < `IN_DIM; x = x + 1) begin               //read data from memory
        data_out[x] = mem[address][x];
    end
end

// Load memory
initial begin
    reg [`DATA_W-1:0] temp_arr [`SAMPLE_CNT*`IN_DIM + 1];   // one extra line for termination line
    $readmemh(`MEM_PATH, temp_arr);

    for (i = 0; i < `SAMPLE_CNT; i = i + 1) begin
        for (j = 0; j < `IN_DIM; j = j + 1) begin
            mem[i][j] = temp_arr[i*`IN_DIM + j];
        end
    end
    
    // load termination line
    mem[`SAMPLE_CNT][0] = temp_arr[`SAMPLE_CNT*`IN_DIM];
end

endmodule