`timescale 1ns / 1ps

module finn_design_tb;

    reg  ap_clk;
    reg  ap_rst_n;
    reg  m_axis_0_tready;
    reg [39:0] s_axis_0_tdata;
    reg  s_axis_0_tvalid;
    wire [7:0] m_axis_0_tdata;
    wire  m_axis_0_tvalid;
    wire  s_axis_0_tready;

    finn_design uut (
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .m_axis_0_tready(m_axis_0_tready),
        .s_axis_0_tdata(s_axis_0_tdata),
        .s_axis_0_tvalid(s_axis_0_tvalid),
        .m_axis_0_tdata(m_axis_0_tdata),
        .m_axis_0_tvalid(m_axis_0_tvalid),
        .s_axis_0_tready(s_axis_0_tready)
    );

    initial begin
        ap_clk = 0;
        ap_rst_n = 0;
        m_axis_0_tready = 0;
        s_axis_0_tdata = 0;
        s_axis_0_tvalid = 0;
        #100;
        //ap_clk = 0;
        ap_rst_n = 1;
        m_axis_0_tready = 1;
        s_axis_0_tdata = 32'h12345678;
        s_axis_0_tvalid = 1;
        #100;
        $finish;
    end

    always #5 ap_clk = ~ap_clk;

    initial begin
        $monitor("Time: %0t, ap_clk: %h, ap_rst_n: %h, m_axis_0_tready: %h, s_axis_0_tdata: %h, s_axis_0_tvalid: %h, m_axis_0_tdata: %h, m_axis_0_tvalid: %h, s_axis_0_tready: %h", $time, ap_clk, ap_rst_n, m_axis_0_tready, s_axis_0_tdata, s_axis_0_tvalid, m_axis_0_tdata, m_axis_0_tvalid, s_axis_0_tready);
    end
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, finn_design_tb);
    end
endmodule
