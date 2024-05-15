module model_dut #(
    parameters
) (
    input wire clk
);

reg samp_r [`SAMPLE_DATA_SIZE-1:0];
reg pred_r [`PREDICTION_DATA_SIZE-1:0];

memory mem (
    .clk(clk),
    .addr(addr_r),
    .data_out(samp_r)
);

model #(
    .IN_W(`SAMPLE_DATA_SIZE),
    .OUT_W(`PREDICTION_DATA_SIZE)
) m0 (
    .sample(samp_r),
    .prediction(pred_r)
);


always @(clk) begin
    if (samp_r == {`SAMPLE_DATA_SIZE{1'b1}}) begin
        $display("Simulation reached bottom of memory. Exiting...");
        $finish;
    end
    $display("%h", pred_r);
end


endmodule