// `include "common/example_mlp_systolic/states.vh"

module systolic #(
    parameter DATA_W = 32,
    parameter IN_DIM = 1,
    parameter OUT_DIM = 1
) (
    input wire clk,
    input wire reset,

    input wire valid,
    input wire [DATA_W-1:0] weights [0:OUT_DIM-1][0:IN_DIM-1],
    input wire [DATA_W-1:0] vec_in [0:IN_DIM-1],

    output reg ready,
    output reg [DATA_W-1:0] vec_out [0:OUT_DIM-1]
);

systolic_state state;

reg [DATA_W-1:0] weights_r [0:OUT_DIM-1][0:IN_DIM+OUT_DIM-2];
reg [DATA_W-1:0] vec_in_r [0:IN_DIM+OUT_DIM-2];
reg valid_r [0:IN_DIM+OUT_DIM-1];
wire [DATA_W-1:0] accum_out [0:OUT_DIM-1];

// register pipelining
always @(posedge clk) begin
    // accumulator input-side registers
    for (int i = 0; i < OUT_DIM; i = i + 1) begin
        for (int j = 0; j < IN_DIM - 1 + i; j = j + 1) begin
            weights_r[i][j+1] <= weights_r[i][j];
        end
    end
    for (int i = 0; i < IN_DIM+OUT_DIM-2; i = i + 1) begin
        vec_in_r[i+1] <= vec_in_r[i];
    end

    // accumulator output-side registers
    for (int i = 0; i < OUT_DIM - 1; i = i + 1) begin
        weights_r[i][IN_DIM+i] <= accum_out[i];
        for (int j = IN_DIM + i; j < IN_DIM + OUT_DIM - 1; j = j + 1) begin
            weights_r[i][j+1] <= weights_r[i][j];
        end
        vec_out[i] <= weights_r[i][IN_DIM+OUT_DIM-1];        
    end
    vec_out[OUT_DIM-1] <= accum_out[OUT_DIM-1];

    // valid signals
    valid_r[0] <= 1'b0;
    for (int i = 0; i < IN_DIM + OUT_DIM - 1; i = i + 1) begin
        valid_r[i+1] <= valid_r[i];
    end
    ready <= valid_r[IN_DIM+OUT_DIM-1];

    // load new vectors/weights at S3
    if (state == S3) begin
        valid_r[0] <= valid;

        // Intended assignment: 
        // weights_r[0:OUT_DIM-1][0:IN_DIM-1] <= weights[0:OUT_DIM-1][0:IN_DIM-1];
        for (int i = 0; i < OUT_DIM; i = i + 1) begin
            for (int j = 0; j < IN_DIM; j = j + 1) begin
                weights_r[i][j] <= weights[i][j];
            end
        end

        vec_in_r[0:IN_DIM-1] <= vec_in;
    end

    state <= systolic_state'(state + 2'b1);
end

// Accumulators
genvar i;
generate
    for (i = 0; i < OUT_DIM; i = i + 1) begin
        accumulator #(.RST_STATE(i)) a (
            .clk(clk),
            .in_w(weights_r[i][IN_DIM-1+i]),
            .in_v(vec_in_r[IN_DIM-1+i]),
            .out(accum_out[i])
        );
    end
endgenerate
    
endmodule