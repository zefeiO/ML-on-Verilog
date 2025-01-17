`include "common/example_mlp_systolic/states.vh"

module accumulator #(
    parameter DATA_W = 32,
    parameter RST_STATE = S0,
    parameter IN_DIM = 1
) (
    input wire clk,
    input wire [DATA_W-1:0] in_w,
    input wire [DATA_W-1:0] in_v,
    output reg [DATA_W-1:0] out
);

reg [DATA_W-1:0] sum;
systolic_state state;

always @(posedge clk) begin
    out <= sum;
    sum <= sum + in_w*in_v;
    if (state == RST_STATE) begin
        sum <= in_w*in_v;
    end
end
    
endmodule