// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ model_dut__DOT__clk;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__model_dut__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ model_dut__DOT__addr_r;
    IData/*31:0*/ model_dut__DOT__m0__DOT__layer1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__dp__out;
    IData/*31:0*/ model_dut__DOT__m0__DOT__layer1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__dp__out;
    IData/*31:0*/ model_dut__DOT__m0__DOT__layer1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__dp__out;
    IData/*31:0*/ model_dut__DOT__m0__DOT__layer1_act__DOT____Vlvbound_h7ff6c162__0;
    IData/*31:0*/ model_dut__DOT__m0__DOT__layer2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__dp__out;
    IData/*31:0*/ model_dut__DOT__m0__DOT__layer2_act__DOT____Vlvbound_h6edb815a__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__in_r;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__out_r;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 1>, 10001> model_dut__DOT__mem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 15> model_dut__DOT__mem__DOT__unnamedblk1__DOT__temp_arr;
    VlUnpacked<IData/*31:0*/, 3> model_dut__DOT__m0__DOT__l1_out;
    VlUnpacked<IData/*31:0*/, 3> model_dut__DOT__m0__DOT__l2_in;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__m0__DOT__l2_out;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 1>, 3> model_dut__DOT__m0__DOT__w1;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 1> model_dut__DOT__m0__DOT__w2;
    VlUnpacked<IData/*31:0*/, 3> model_dut__DOT__m0__DOT____Vcellout__layer1__vec_out;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 1>, 3> model_dut__DOT__m0__DOT____Vcellinp__layer1__weights;
    VlUnpacked<IData/*31:0*/, 3> model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out;
    VlUnpacked<IData/*31:0*/, 3> model_dut__DOT__m0__DOT____Vcellinp__layer1_act__vec_in;
    VlUnpacked<IData/*31:0*/, 3> model_dut__DOT__m0__DOT____Vcellinp__layer2__vec_in;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 1> model_dut__DOT__m0__DOT____Vcellinp__layer2__weights;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__m0__DOT____Vcellinp__layer2_act__vec_in;
    VlUnpacked<IData/*31:0*/, 6> model_dut__DOT__m0__DOT__weights_mem__DOT__weights_mem;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_B;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_A;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__dp__vec_B;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__dp__vec_A;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__dp__vec_B;
    VlUnpacked<IData/*31:0*/, 1> model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__dp__vec_A;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 1>, 1> model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 1>, 1> model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT__sum_regs;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 1>, 1> model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT__sum_regs;
    VlUnpacked<IData/*31:0*/, 3> model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_B;
    VlUnpacked<IData/*31:0*/, 3> model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_A;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 4> model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
