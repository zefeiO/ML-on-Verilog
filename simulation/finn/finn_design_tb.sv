`timescale 1ns / 1ps

module finn_design_tb;

    // Inputs
    reg ap_clk;
    reg ap_rst_n;
    reg [39:0] s_axis_0_tdata;
    reg s_axis_0_tvalid;
    reg m_axis_0_tready;

    // Outputs
    wire [7:0] m_axis_0_tdata;
    wire s_axis_0_tready;
    wire m_axis_0_tvalid;

    // Instantiate the Unit Under Test (UUT)
    finn_design uut (
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .s_axis_0_tdata(s_axis_0_tdata),
        .s_axis_0_tvalid(s_axis_0_tvalid),
        .s_axis_0_tready(s_axis_0_tready),
        .m_axis_0_tdata(m_axis_0_tdata),
        .m_axis_0_tready(m_axis_0_tready),
        .m_axis_0_tvalid(m_axis_0_tvalid)
    );

    initial begin
        // Initialize Inputs
        ap_clk = 0;
        ap_rst_n = 0;
        s_axis_0_tdata = 0;
        s_axis_0_tvalid = 0;
        m_axis_0_tready = 0;

        // Wait 100 ns for global reset to finish
        #100;
        ap_rst_n = 1;

        #10;
        s_axis_0_tvalid = 1;
        s_axis_0_tdata = 40'hABCDE;
        m_axis_0_tready = 1;
        
        #20;
        s_axis_0_tvalid = 0;
        m_axis_0_tready = 0;

        // Finish simulation
        #1000;
        $finish;
    end

    // Clock generation
    always #5 ap_clk = ~ap_clk;

    initial begin
        $monitor("Time: %0t, ap_rst_n: %b, s_axis_0_tdata: %h, s_axis_0_tvalid: %b, s_axis_0_tready: %b, m_axis_0_tdata: %h, m_axis_0_tready: %b, m_axis_0_tvalid: %b",
                  $time, ap_rst_n, s_axis_0_tdata, s_axis_0_tvalid, s_axis_0_tready, m_axis_0_tdata, m_axis_0_tready, m_axis_0_tvalid);
    end

    initial begin
        $dumpfile("dump.vcd"); // Specify the VCD file name
        $dumpvars(0, finn_design_tb); // Dump all variables in the testbench
    end

endmodule
