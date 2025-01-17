module relu #(
    parameter DATA_W = 32,
    parameter DIM = 1
) (
    input wire clk,
    input wire signed [DATA_W-1:0] vec_in [0:DIM-1],
    output reg signed [DATA_W-1:0] vec_out [0:DIM-1]
);

integer i;
always @(posedge clk) begin
    for (i = 0; i < DIM; i = i + 1) begin
        if (vec_in[i] > 0) begin
            vec_out[i] <= vec_in[i];
        end else begin
            vec_out[i] <= 0;
        end
    end
end

endmodule