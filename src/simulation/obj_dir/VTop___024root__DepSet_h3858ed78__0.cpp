// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf);
VlCoroutine VTop___024root___eval_initial__TOP__Vtiming__0(VTop___024root* vlSelf);
VlCoroutine VTop___024root___eval_initial__TOP__Vtiming__1(VTop___024root* vlSelf);

void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    VTop___024root___eval_initial__TOP(vlSelf);
    VTop___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTop___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__model_dut__DOT__clk__0 
        = vlSelf->model_dut__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VTop___024root___eval_initial__TOP__Vtiming__0(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "simulation/model_dut.sv", 
                                           26);
        vlSelf->model_dut__DOT__clk = (1U & (~ (IData)(vlSelf->model_dut__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine VTop___024root___eval_initial__TOP__Vtiming__1(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->model_dut__DOT__addr_r = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "simulation/model_dut.sv", 
                                       32);
    while (1U) {
        vlSelf->model_dut__DOT__addr_r = ((IData)(1U) 
                                          + vlSelf->model_dut__DOT__addr_r);
        co_await vlSelf->__VdlySched.delay(0x14ULL, 
                                           nullptr, 
                                           "simulation/model_dut.sv", 
                                           36);
    }
}

void VTop___024root___act_sequent__TOP__0(VTop___024root* vlSelf);

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VTop___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTop___024root___act_sequent__TOP__0(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ model_dut__DOT__mem__DOT____Vlvbound_h6ad2cb33__0;
    model_dut__DOT__mem__DOT____Vlvbound_h6ad2cb33__0 = 0;
    // Body
    model_dut__DOT__mem__DOT____Vlvbound_h6ad2cb33__0 
        = vlSelf->model_dut__DOT__mem__DOT__mem[((0x2710U 
                                                  >= 
                                                  (0x3fffU 
                                                   & vlSelf->model_dut__DOT__addr_r))
                                                  ? 
                                                 (0x3fffU 
                                                  & vlSelf->model_dut__DOT__addr_r)
                                                  : 0U)]
        [0U];
    vlSelf->model_dut__DOT__in_r[0U] = model_dut__DOT__mem__DOT____Vlvbound_h6ad2cb33__0;
    vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_A[0U] 
        = vlSelf->model_dut__DOT__in_r[0U];
    vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__dp__vec_A[0U] 
        = vlSelf->model_dut__DOT__in_r[0U];
    vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__dp__vec_A[0U] 
        = vlSelf->model_dut__DOT__in_r[0U];
}

void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf);

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0;
    model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0 = 0;
    IData/*31:0*/ model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0;
    model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0 = 0;
    IData/*31:0*/ model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0;
    model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0 = 0;
    IData/*31:0*/ model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_h9d86c3b4__0;
    model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_h9d86c3b4__0 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v0;
    __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT__sum_regs__v0;
    __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT__sum_regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT__sum_regs__v0;
    __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT__sum_regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v0;
    __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v0 = 0;
    CData/*0:0*/ __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v0;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v0 = 0;
    CData/*0:0*/ __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v1;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v1 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v2;
    __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v2 = 0;
    CData/*0:0*/ __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v2;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v2 = 0;
    CData/*0:0*/ __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v3;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v3 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v4;
    __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v4 = 0;
    CData/*0:0*/ __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v4;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v4 = 0;
    CData/*0:0*/ __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v5;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v5 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v0;
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v1;
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v1 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v2;
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v2 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v4;
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v4 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v5;
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v5 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v6;
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v6 = 0;
    IData/*31:0*/ __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v0;
    __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v0 = 0;
    CData/*0:0*/ __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v0;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v0 = 0;
    CData/*0:0*/ __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v1;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v1 = 0;
    // Body
    if (VL_UNLIKELY((0xffffffffU == vlSelf->model_dut__DOT__in_r
                     [0U]))) {
        VL_WRITEF_NX("Simulation reached end of memory. Exiting...\n",0);
        VL_FINISH_MT("simulation/model_dut.sv", 45, "");
    }
    VL_WRITEF_NX("%x\n",0,32,vlSelf->model_dut__DOT__out_r
                 [0U]);
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v0 = 0U;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v1 = 0U;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v0 = 0U;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v1 = 0U;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v2 = 0U;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v3 = 0U;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v4 = 0U;
    __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v5 = 0U;
    model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0 
        = VL_MULS_III(32, vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__dp__vec_A
                      [0U], vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__dp__vec_B
                      [0U]);
    __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT__sum_regs__v0 
        = model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0;
    model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0 
        = VL_MULS_III(32, vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__dp__vec_A
                      [0U], vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__dp__vec_B
                      [0U]);
    __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT__sum_regs__v0 
        = model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0;
    model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0 
        = VL_MULS_III(32, vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_A
                      [0U], vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_B
                      [0U]);
    __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v0 
        = model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_hd1c5f105__0;
    if (VL_LTS_III(32, 0U, vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer2_act__vec_in
                   [0U])) {
        vlSelf->model_dut__DOT__m0__DOT__layer2_act__DOT____Vlvbound_h6edb815a__0 
            = vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer2_act__vec_in
            [0U];
        __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v0 
            = vlSelf->model_dut__DOT__m0__DOT__layer2_act__DOT____Vlvbound_h6edb815a__0;
        __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v0 = 1U;
    } else {
        __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v1 = 1U;
    }
    if (VL_LTS_III(32, 0U, vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer1_act__vec_in
                   [0U])) {
        vlSelf->model_dut__DOT__m0__DOT__layer1_act__DOT____Vlvbound_h7ff6c162__0 
            = vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer1_act__vec_in
            [0U];
        __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v0 
            = vlSelf->model_dut__DOT__m0__DOT__layer1_act__DOT____Vlvbound_h7ff6c162__0;
        __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v0 = 1U;
    } else {
        __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v1 = 1U;
    }
    if (VL_LTS_III(32, 0U, vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer1_act__vec_in
                   [1U])) {
        vlSelf->model_dut__DOT__m0__DOT__layer1_act__DOT____Vlvbound_h7ff6c162__0 
            = vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer1_act__vec_in
            [1U];
        __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v2 
            = vlSelf->model_dut__DOT__m0__DOT__layer1_act__DOT____Vlvbound_h7ff6c162__0;
        __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v2 = 1U;
    } else {
        __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v3 = 1U;
    }
    if (VL_LTS_III(32, 0U, vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer1_act__vec_in
                   [2U])) {
        vlSelf->model_dut__DOT__m0__DOT__layer1_act__DOT____Vlvbound_h7ff6c162__0 
            = vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer1_act__vec_in
            [2U];
        __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v4 
            = vlSelf->model_dut__DOT__m0__DOT__layer1_act__DOT____Vlvbound_h7ff6c162__0;
        __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v4 = 1U;
    } else {
        __Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v5 = 1U;
    }
    vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__dp__out 
        = vlSelf->model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT__sum_regs
        [0U][0U];
    vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__dp__out 
        = vlSelf->model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT__sum_regs
        [0U][0U];
    vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__dp__out 
        = vlSelf->model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs
        [0U][0U];
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v0 
        = VL_MULS_III(32, vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_A
                      [0U], vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_B
                      [0U]);
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v1 
        = VL_MULS_III(32, vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_A
                      [1U], vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_B
                      [1U]);
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v2 
        = VL_MULS_III(32, vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_A
                      [2U], vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_B
                      [2U]);
    model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_h9d86c3b4__0 
        = (vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs
           [0U][0U] + vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs
           [1U][0U]);
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v4 
        = model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_h9d86c3b4__0;
    model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_h9d86c3b4__0 
        = (vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs
           [2U][0U] + vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs
           [3U][0U]);
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v5 
        = model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_h9d86c3b4__0;
    model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_h9d86c3b4__0 
        = (vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs
           [0U][1U] + vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs
           [1U][1U]);
    __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v6 
        = model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT____Vlvbound_h9d86c3b4__0;
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__dp__out 
        = vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs
        [0U][2U];
    if (__Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v0) {
        vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out[0U] 
            = __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v0;
    }
    if (__Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out__v1) {
        vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out[0U] = 0U;
    }
    if (__Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v0) {
        vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out[0U] 
            = __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v0;
    }
    if (__Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v1) {
        vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out[0U] = 0U;
    }
    if (__Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v2) {
        vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out[1U] 
            = __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v2;
    }
    if (__Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v3) {
        vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out[1U] = 0U;
    }
    if (__Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v4) {
        vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out[2U] 
            = __Vdlyvval__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v4;
    }
    if (__Vdlyvset__model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out__v5) {
        vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out[2U] = 0U;
    }
    vlSelf->model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT__sum_regs[0U][0U] 
        = __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__2__KET____DOT__dp__DOT__sum_regs__v0;
    vlSelf->model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT__sum_regs[0U][0U] 
        = __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__1__KET____DOT__dp__DOT__sum_regs__v0;
    vlSelf->model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs[0U][0U] 
        = __Vdlyvval__model_dut__DOT__m0__DOT__layer1__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v0;
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs[0U][0U] 
        = __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v0;
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs[1U][0U] 
        = __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v1;
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs[2U][0U] 
        = __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v2;
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs[3U][0U] = 0U;
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs[0U][1U] 
        = __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v4;
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs[1U][1U] 
        = __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v5;
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs[0U][2U] 
        = __Vdlyvval__model_dut__DOT__m0__DOT__layer2__DOT__genblk1__BRA__0__KET____DOT__dp__DOT__sum_regs__v6;
    vlSelf->model_dut__DOT__out_r[0U] = vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer2_act__vec_out
        [0U];
    vlSelf->model_dut__DOT__m0__DOT__l2_in[0U] = vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out
        [0U];
    vlSelf->model_dut__DOT__m0__DOT__l2_in[1U] = vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out
        [1U];
    vlSelf->model_dut__DOT__m0__DOT__l2_in[2U] = vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1_act__vec_out
        [2U];
    vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1__vec_out[2U] 
        = vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__dp__out;
    vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1__vec_out[1U] 
        = vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__dp__out;
    vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1__vec_out[0U] 
        = vlSelf->model_dut__DOT__m0__DOT__layer1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__dp__out;
    vlSelf->model_dut__DOT__m0__DOT__l2_out[0U] = vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellout__genblk1__BRA__0__KET____DOT__dp__out;
    vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer2__vec_in[2U] 
        = vlSelf->model_dut__DOT__m0__DOT__l2_in[0U];
    vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer2__vec_in[1U] 
        = vlSelf->model_dut__DOT__m0__DOT__l2_in[1U];
    vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer2__vec_in[0U] 
        = vlSelf->model_dut__DOT__m0__DOT__l2_in[2U];
    vlSelf->model_dut__DOT__m0__DOT__l1_out[0U] = vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1__vec_out
        [2U];
    vlSelf->model_dut__DOT__m0__DOT__l1_out[1U] = vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1__vec_out
        [1U];
    vlSelf->model_dut__DOT__m0__DOT__l1_out[2U] = vlSelf->model_dut__DOT__m0__DOT____Vcellout__layer1__vec_out
        [0U];
    vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer2_act__vec_in[0U] 
        = vlSelf->model_dut__DOT__m0__DOT__l2_out[0U];
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_A[2U] 
        = vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer2__vec_in
        [2U];
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_A[1U] 
        = vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer2__vec_in
        [1U];
    vlSelf->model_dut__DOT__m0__DOT__layer2__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__dp__vec_A[0U] 
        = vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer2__vec_in
        [0U];
    vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer1_act__vec_in[0U] 
        = vlSelf->model_dut__DOT__m0__DOT__l1_out[0U];
    vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer1_act__vec_in[1U] 
        = vlSelf->model_dut__DOT__m0__DOT__l1_out[1U];
    vlSelf->model_dut__DOT__m0__DOT____Vcellinp__layer1_act__vec_in[2U] 
        = vlSelf->model_dut__DOT__m0__DOT__l1_out[2U];
}

void VTop___024root___timing_resume(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__act(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTop___024root___timing_resume(vlSelf);
        VTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTop___024root___eval_phase__nba(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("simulation/model_dut.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("simulation/model_dut.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
