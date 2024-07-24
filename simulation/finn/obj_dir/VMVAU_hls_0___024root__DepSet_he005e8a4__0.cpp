// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMVAU_hls_0.h for the primary calling header

#include "VMVAU_hls_0__pch.h"
#include "VMVAU_hls_0__Syms.h"
#include "VMVAU_hls_0___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMVAU_hls_0___024root___dump_triggers__ico(VMVAU_hls_0___024root* vlSelf);
#endif  // VL_DEBUG

void VMVAU_hls_0___024root___eval_triggers__ico(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMVAU_hls_0___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMVAU_hls_0___024root___dump_triggers__act(VMVAU_hls_0___024root* vlSelf);
#endif  // VL_DEBUG

void VMVAU_hls_0___024root___eval_triggers__act(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->MVAU_hls_0_regslice_both_w1__02Eap_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_0_regslice_both_w1__02Eap_clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->MVAU_hls_1_regslice_both_w1__02Eap_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_1_regslice_both_w1__02Eap_clk__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->MVAU_hls_2_regslice_both_w1__02Eap_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_2_regslice_both_w1__02Eap_clk__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eclock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_3_hls_deadlock_idx0_monitor__02Eclock__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->MVAU_hls_3_regslice_both_w1__02Eap_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_3_regslice_both_w1__02Eap_clk__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Eclock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_0_hls_deadlock_idx0_monitor__02Eclock__0))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Eclock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_1_hls_deadlock_idx0_monitor__02Eclock__0))));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Eclock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_2_hls_deadlock_idx0_monitor__02Eclock__0))));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->finn_design_tb__DOT__ap_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__finn_design_tb__DOT__ap_clk__0))));
    vlSelf->__VactTriggered.set(9U, (((IData)(vlSelf->finn_design_tb__DOT__ap_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__finn_design_tb__DOT__ap_clk__0))) 
                                     | ((~ (IData)(vlSelf->finn_design_tb__DOT__ap_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__finn_design_tb__DOT__ap_rst_n__0))));
    vlSelf->__VactTriggered.set(0xaU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_0_regslice_both_w1__02Eap_clk__0 
        = vlSelf->MVAU_hls_0_regslice_both_w1__02Eap_clk;
    vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_1_regslice_both_w1__02Eap_clk__0 
        = vlSelf->MVAU_hls_1_regslice_both_w1__02Eap_clk;
    vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_2_regslice_both_w1__02Eap_clk__0 
        = vlSelf->MVAU_hls_2_regslice_both_w1__02Eap_clk;
    vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_3_hls_deadlock_idx0_monitor__02Eclock__0 
        = vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eclock;
    vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_3_regslice_both_w1__02Eap_clk__0 
        = vlSelf->MVAU_hls_3_regslice_both_w1__02Eap_clk;
    vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_0_hls_deadlock_idx0_monitor__02Eclock__0 
        = vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Eclock;
    vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_1_hls_deadlock_idx0_monitor__02Eclock__0 
        = vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Eclock;
    vlSelf->__Vtrigprevexpr___TOP__MVAU_hls_2_hls_deadlock_idx0_monitor__02Eclock__0 
        = vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Eclock;
    vlSelf->__Vtrigprevexpr___TOP__finn_design_tb__DOT__ap_clk__0 
        = vlSelf->finn_design_tb__DOT__ap_clk;
    vlSelf->__Vtrigprevexpr___TOP__finn_design_tb__DOT__ap_rst_n__0 
        = vlSelf->finn_design_tb__DOT__ap_rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMVAU_hls_0___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 128> VMVAU_hls_0__ConstPool__TABLE_h19187b36_0;
extern const VlUnpacked<CData/*1:0*/, 128> VMVAU_hls_0__ConstPool__TABLE_h570f8ced_0;
extern const VlUnpacked<CData/*1:0*/, 128> VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0;
extern const VlUnpacked<CData/*3:0*/, 256> VMVAU_hls_0__ConstPool__TABLE_haaa975fa_0;

VL_INLINE_OPT void VMVAU_hls_0___024root___act_sequent__TOP__0(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*6:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*6:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*6:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*6:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    CData/*6:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*6:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*6:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*6:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_NS_iter0_fsm 
        = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter0_fsm 
        = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter0_fsm 
        = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter0_fsm 
        = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = (1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state));
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state)) 
               && (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready));
    }
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = vlSelf->finn_design_tb__DOT__s_axis_0_tvalid;
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))) {
        if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
             & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                   >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                          & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        }
    } else if ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))) {
        if (vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_full) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ 
                = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U));
        } else if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
                    & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                          >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                          & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF_NX("Time: %0t, ap_rst_n: %b, s_axis_0_tdata: %x, s_axis_0_tvalid: %b, s_axis_0_tready: %b, m_axis_0_tdata: %x, m_axis_0_tready: %b, m_axis_0_tvalid: %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelf->finn_design_tb__DOT__ap_rst_n),
                     40,vlSelf->finn_design_tb__DOT__s_axis_0_tdata,
                     1,(IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid),
                     1,(1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__i_b_reg))),
                     8,(IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo),
                     1,vlSelf->finn_design_tb__DOT__m_axis_0_tready,
                     1,(IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__o_v_reg));
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_6 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
              >> 1U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__p 
        = (0xffffffffffffULL & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__m_reg) 
                                + VL_EXTENDS_QI(48,7, 
                                                ((0U 
                                                  == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__sf_fu_58)
                                                  ? 0U
                                                  : 
                                                 (0x7fU 
                                                  & (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter3_reg)) 
                                                      & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                         >> 1U))
                                                      ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__p_reg)
                                                      : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__empty_fu_66)))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_out_V_TDATA;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_out_V_TDATA;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        if ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
            if (vlSelf->finn_design_tb__DOT__m_axis_0_tready) {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ 
                    = ((0U >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr))
                        ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srl
                       [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr]
                        : 0U);
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ 
                    = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U);
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 2U;
            }
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready)
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr))));
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter4_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm))
            ? ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                         >> 1U) & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                           & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                 >> 1U)))) 
                                       | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                           >> 1U) & 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                            | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                           | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                  >> 1U)) 
                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                                   & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                          >> 1U) & 
                                         ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                          | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                             & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                   >> 1U)))))))))
                ? 2U : ((1U & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                    | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                       & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                             >> 1U)))) 
                                   | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                       >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                  | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                               & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                                      >> 1U)) | ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm)) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                    | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                       & (~ 
                                                          ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                           >> 1U))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm))
                                         ? ((IData)(
                                                    (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                                                      >> 1U) 
                                                     & (~ 
                                                        ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                           >> 1U) 
                                                          & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                             | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                                & (~ 
                                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                    >> 1U))))) 
                                                         | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                                             >> 1U) 
                                                            & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                                | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                               | ((~ 
                                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                    >> 1U)) 
                                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter5_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm))
            ? ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                         >> 1U) & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                        | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                       | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                              >> 1U)) 
                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))) 
                                   & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                         | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                            & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                  >> 1U))))))))
                ? 2U : ((1U & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                    | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                   | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                          >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))) 
                               & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                      >> 1U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                    | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                       & (~ 
                                                          ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                           >> 1U))))))))
                         ? 1U : ((((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                        | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                       | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                              >> 1U)) 
                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))) 
                                   & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                      >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter4_reg))
                                  ? 1U : 2U))) : ((1U 
                                                   == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm))
                                                   ? 
                                                  ((IData)(
                                                           (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                             >> 1U) 
                                                            & (~ 
                                                               (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                                 | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                                    & (~ 
                                                                       ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                        >> 1U)))) 
                                                                | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                                                    >> 1U) 
                                                                   & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                                       | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                           >> 1U)) 
                                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))
                                                    ? 2U
                                                    : 1U)
                                                   : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))) {
        if (vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__s_axis_0_tdata;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))) {
        if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
             & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                   >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__s_axis_0_tdata;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                          & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else if ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))) {
        if (vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_full) {
            if ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))) {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ 
                    = ((0x1eU >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))
                        ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl
                       [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr]
                        : 0ULL);
                if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                        = (0x1fU & 0U);
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 1U;
                } else {
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                        = (0x1fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr) 
                                    - (IData)(1U)));
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
                }
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                    = (0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr));
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
            }
        } else if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
                    & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                          >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr)));
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ 
                = ((0x1eU >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))
                    ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl
                   [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr]
                    : 0ULL);
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                          & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ 
                = ((0x1eU >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))
                    ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl
                   [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr]
                    : 0ULL);
            if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))) {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 1U;
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                    = (0x1fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr) 
                                - (IData)(1U)));
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
            }
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 0U;
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter2_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm))
            ? ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm) 
                         >> 1U) & (~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                     & (~ 
                                                        ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                         >> 1U))))) 
                                      | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                          >> 1U) & 
                                         (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                          | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                 >> 1U)) 
                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))
                ? 2U : ((1U & ((~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                     >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                  & (~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U))))) 
                                   | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                       >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                  | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                               & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm) 
                                     >> 1U)))) ? 1U
                         : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm))
                                    ? ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm) 
                                                 >> 1U) 
                                                & (~ 
                                                   ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                           & (~ 
                                                              ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                               >> 1U))))) 
                                                    | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                                        >> 1U) 
                                                       & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                          | ((~ 
                                                              ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                               >> 1U)) 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))
                                        ? 2U : 1U) : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter3_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm))
            ? ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm) 
                         >> 1U) & ((~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm)) 
                                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                     & (~ 
                                                        ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                         >> 1U)))))) 
                                   & (~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                           >> 1U) & 
                                          ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                           | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                              & (~ 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                  >> 1U))))) 
                                         | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                             >> 1U) 
                                            & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                               | ((~ 
                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))))))
                ? 2U : ((1U & ((~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                     >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                  & (~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U))))) 
                                   | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                       >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                  | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                               & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm) 
                                      >> 1U)) | (((
                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm) 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm)) 
                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm)) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                    | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                       & (~ 
                                                          ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                           >> 1U))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm))
                                         ? ((IData)(
                                                    (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm) 
                                                      >> 1U) 
                                                     & (~ 
                                                        ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                           >> 1U) 
                                                          & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                             | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                                & (~ 
                                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                    >> 1U))))) 
                                                         | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                                             >> 1U) 
                                                            & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                                | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                               | ((~ 
                                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                    >> 1U)) 
                                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state4_pp0_stage0_iter3 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
            >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
            >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                      | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm) 
            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_loop_init))
            ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__i_fu_62));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY 
        = (IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
                              >> 2U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY 
        = (IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
                              >> 2U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY 
        = (IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
                              >> 2U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_loop_init 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_)) 
           & (0x1eU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_)));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6 
        = (IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                    >> 1U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                 | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_8 
        = (1U & (~ ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter1_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm))
            ? ((((~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                       >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                 | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                    & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                          >> 1U))))) 
                     | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                         >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                    | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                   | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                          >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                 & (~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                        & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1))) 
                       | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                          & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)))))) 
                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm))
                ? 2U : ((1U & ((~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                     >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                  & (~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U))))) 
                                   | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                       >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                  | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                               & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm)) 
                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm) 
                                     & (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1))) 
                                        | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                                           & (0x40U 
                                              != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm))
                                         ? (((~ (((
                                                   (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                       | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                          & (~ 
                                                             ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                              >> 1U))))) 
                                                   | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                                      & (0x40U 
                                                         != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)))) 
                                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                                                     & (0x40U 
                                                        != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)))) 
                                                 | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                                     >> 1U) 
                                                    & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                        | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                            >> 1U)) 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_1 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
           & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_2 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
           & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_loop_init));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__out_V_TVALID_int_regslice 
        = ((IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__grp_fu_199_ce 
        = (1U & ((IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6) 
                 | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state4_pp0_stage0_iter3) 
                        | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4))) 
                    & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm) 
                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm))) 
                       >> 1U))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_ready_int 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state4_pp0_stage0_iter3) 
               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_1) 
                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_2) 
                     | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4))))) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TVALID 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_6));
    __Vtableidx6 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                              << 5U)) | ((0x20U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter1_fsm) 
                                                   << 4U)) 
                                         | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY) 
                                             << 4U) 
                                            | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_NS_iter2_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h19187b36_0
        [__Vtableidx6];
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_done_int 
        = (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io)) 
            & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_loop_exit_ready_pp0_iter2_reg))) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_done_reg));
    if (finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1 = 0U;
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_1_fu_304;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__i_fu_308;
    }
    if (finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1 = 0U;
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_1_fu_304;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__i_fu_308;
    }
    __Vtableidx16 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                               << 5U)) | ((0x20U & 
                                           ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter6_fsm) 
                                            << 4U)) 
                                          | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                              << 4U) 
                                             | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter7_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h570f8ced_0
        [__Vtableidx16];
    __Vtableidx11 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter2_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx11];
    __Vtableidx12 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter3_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx12];
    __Vtableidx13 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter4_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx13];
    __Vtableidx14 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter5_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter5_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx14];
    __Vtableidx15 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter5_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter6_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter6_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx15];
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io)) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
              >> 1U));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
            >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io));
    __Vtableidx26 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                               << 5U)) | ((0x20U & 
                                           ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter6_fsm) 
                                            << 4U)) 
                                          | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                              << 4U) 
                                             | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter7_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h570f8ced_0
        [__Vtableidx26];
    __Vtableidx21 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter2_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx21];
    __Vtableidx22 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter3_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx22];
    __Vtableidx23 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter4_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx23];
    __Vtableidx24 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter5_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter5_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx24];
    __Vtableidx25 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter5_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter6_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter6_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx25];
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io)) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
              >> 1U));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
            >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io));
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_sf_1 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_nf_2 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1 = 0U;
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_sf_1 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1 
            = (0xfU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_nf_2 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__nf_1_fu_2880;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__i_fu_2752;
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0 
        = (1U & (~ ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4)) 
                    & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_1 
        = (1U & (~ ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4)) 
                    & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748 
                       >> 1U))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_2 
        = (1U & (~ ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4)) 
                    & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748 
                       >> 2U))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__in0_V_TREADY_int_regslice 
        = ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_ready_int));
    __Vtableidx5 = ((0x80U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
                              << 5U)) | ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_done_int) 
                                           | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                          << 6U) | 
                                         ((0x20U & 
                                           ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
                                            << 2U)) 
                                          | (((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__i_b_reg) 
                                                & (3U 
                                                   == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                               | (1U 
                                                  == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                              << 4U) 
                                             | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_NS_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_haaa975fa_0
        [__Vtableidx5];
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1 
        = ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)) 
           & (0U == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1 
        = ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)) 
           & (0U == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TVALID 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
           & (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int 
        = (((IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5) 
            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter7_reg)) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_ce0 
        = ((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3)) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
              >> 1U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TVALID 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
           & (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int 
        = (((IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5) 
            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter7_reg)) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_ce0 
        = ((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3)) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
              >> 1U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_7 
        = ((0x3cU != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1 
        = ((0x3cU != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)) 
           & (0U == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_nf_2));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_7 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter1_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm))
            ? ((((~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                      | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                     | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                        & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))) 
                 & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm))
                ? 2U : ((1U & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                              | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY)))))) 
                               & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm)) 
                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
                                     & (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                         | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                            & (0x40U 
                                               != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                                           & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm))
                                         ? (((~ (((
                                                   (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                                   | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                                      & (0x40U 
                                                         != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) 
                                                 | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                                       | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_4 
        = (1U & (~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                     | (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1))) 
                        | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1)))) 
                    | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_8 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter1_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm))
            ? ((((~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                      | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                     | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                        & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))) 
                 & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm))
                ? 2U : ((1U & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                              | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY)))))) 
                               & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm)) 
                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
                                     & (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                         | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                            & (0x40U 
                                               != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                                           & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm))
                                         ? (((~ (((
                                                   (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                                   | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                                      & (0x40U 
                                                         != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) 
                                                 | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                                       | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_4 
        = (1U & (~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                     | (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1))) 
                        | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1)))) 
                    | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3))));
    __Vtableidx10 = ((0x80U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
                               << 5U)) | ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int) 
                                            | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                           << 6U) | 
                                          ((0x20U & 
                                            ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
                                             << 2U)) 
                                           | (((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__i_b_reg) 
                                                 & (3U 
                                                    == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                                | (1U 
                                                   == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                               << 4U) 
                                              | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_NS_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_haaa975fa_0
        [__Vtableidx10];
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__grp_fu_2894_ce 
        = (1U & (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3)) 
                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                     >> 1U)) | (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3)) 
                                 & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm) 
                                    >> 1U)) | (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3)) 
                                                & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm) 
                                                   >> 1U)) 
                                               | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_ce0)))));
    __Vtableidx20 = ((0x80U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
                               << 5U)) | ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int) 
                                            | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                           << 6U) | 
                                          ((0x20U & 
                                            ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
                                             << 2U)) 
                                           | (((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__i_b_reg) 
                                                 & (3U 
                                                    == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                                | (1U 
                                                   == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                               << 4U) 
                                              | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_NS_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_haaa975fa_0
        [__Vtableidx20];
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__grp_fu_2859_ce 
        = (1U & (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3)) 
                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                     >> 1U)) | (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3)) 
                                 & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm) 
                                    >> 1U)) | (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3)) 
                                                & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm) 
                                                   >> 1U)) 
                                               | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_ce0)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_5 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_NS_iter1_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter1_fsm))
            ? ((((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                      >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io) 
                                | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
                                   & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY)))))) 
                 & (~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                        | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                           & (0x3cU != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)))) 
                       | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))))) 
                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm))
                ? 2U : ((1U & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io) 
                                              | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
                                                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY)))))) 
                               & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm)) 
                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm) 
                                     & (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                                         | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                            & (0x3cU 
                                               != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)))) 
                                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1) 
                                           & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter1_fsm))
                                         ? (((~ (((
                                                   (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                                                   | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io) 
                                                         | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
                                                            & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY)))))) 
                                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                                     & (0x3cU 
                                                        != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)))) 
                                                 | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1) 
                                                    & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))) 
                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_phi_mux_inElem_1_phi_fu_2906_p32 
        = (((0U != vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_nf_2) 
            & (0x3cU != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)))
            ? ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4)) 
                      & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748 
                         >> 3U))) ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_2)
                                      ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_1)
                                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                                              ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_8_fu_2852
                                              : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_9_fu_2856)
                                          : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                                              ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_10_fu_2860
                                              : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_11_fu_2864))
                                      : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_1)
                                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                                              ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_12_fu_2868
                                              : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_13_fu_2872)
                                          : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_14_fu_2876))
                : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_2)
                    ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_1)
                        ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_fu_2820
                            : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_1_fu_2824)
                        : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_2_fu_2828
                            : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_3_fu_2832))
                    : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_1)
                        ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_4_fu_2836
                            : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_5_fu_2840)
                        : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_6_fu_2844
                            : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_7_fu_2848))))
            : (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1) 
                & ((0xeU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                   | ((0xfU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                      | ((0xdU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                         | ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                            | ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                               | ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                  | ((3U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                     | ((4U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                        | ((5U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                           | ((6U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                              | ((7U 
                                                  == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                                 | ((8U 
                                                     == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                                    | ((9U 
                                                        == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                                       | ((0xaU 
                                                           == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                                          | ((0xbU 
                                                              == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                                             | (0xcU 
                                                                == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1))))))))))))))))))
                ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__in0_V_TDATA_int_regslice
                : 0ULL));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_8 
        = (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
            & (0x3cU != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1))) 
           | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__in0_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_4) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_7)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_4) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__in0_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_4) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_8)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_4) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_2 
        = (1U & (~ ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                    | ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                         >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io)) 
                       | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_8)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_ready 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int) 
           & (0x40U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_ready 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int) 
           & (0x40U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_ready_int 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_2) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_ready 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_2) 
           & ((0x3cU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)) 
              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__in0_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_2) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_5)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__weights_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_2) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_7)));
}

VL_INLINE_OPT void VMVAU_hls_0___024root___nba_comb__TOP__0(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*6:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*6:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*6:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*6:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    CData/*6:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*6:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*6:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*6:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF_NX("Time: %0t, ap_rst_n: %b, s_axis_0_tdata: %x, s_axis_0_tvalid: %b, s_axis_0_tready: %b, m_axis_0_tdata: %x, m_axis_0_tready: %b, m_axis_0_tvalid: %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelf->finn_design_tb__DOT__ap_rst_n),
                     40,vlSelf->finn_design_tb__DOT__s_axis_0_tdata,
                     1,(IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid),
                     1,(1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__i_b_reg))),
                     8,(IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo),
                     1,vlSelf->finn_design_tb__DOT__m_axis_0_tready,
                     1,(IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__o_v_reg));
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        if (vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__s_axis_0_tdata;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))) {
        if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
             & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                   >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__s_axis_0_tdata;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                          & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else if ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))) {
        if (vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_full) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ 
                = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U));
            if ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))) {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ 
                    = ((0x1eU >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))
                        ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl
                       [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr]
                        : 0ULL);
                if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                        = (0x1fU & 0U);
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 1U;
                } else {
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                        = (0x1fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr) 
                                    - (IData)(1U)));
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
                }
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                    = (0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr));
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
            }
        } else if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
                    & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                          >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr)));
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ 
                = ((0x1eU >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))
                    ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl
                   [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr]
                    : 0ULL);
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                          & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__s_axis_0_tvalid)) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ 
                = ((0x1eU >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))
                    ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl
                   [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr]
                    : 0ULL);
            if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))) {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 1U;
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ 
                    = (0x1fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr) 
                                - (IData)(1U)));
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 2U;
            }
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srlo_ = 0ULL;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_ = 0U;
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_6 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
              >> 1U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_NS_iter0_fsm 
        = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_loop_init 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY 
        = (IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
                              >> 2U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        if ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_out_V_TDATA;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_out_V_TDATA;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state)) 
               && (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready));
        if ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
            if (vlSelf->finn_design_tb__DOT__m_axis_0_tready) {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ 
                    = ((0U >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr))
                        ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srl
                       [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr]
                        : 0U);
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ 
                    = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U);
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 2U;
            }
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready)
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr))));
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter0_fsm 
        = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm) 
            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_loop_init))
            ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__i_fu_62));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
            >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                      | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__p 
        = (0xffffffffffffULL & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__m_reg) 
                                + VL_EXTENDS_QI(48,7, 
                                                ((0U 
                                                  == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__sf_fu_58)
                                                  ? 0U
                                                  : 
                                                 (0x7fU 
                                                  & (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter3_reg)) 
                                                      & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                         >> 1U))
                                                      ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__p_reg)
                                                      : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__empty_fu_66)))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter4_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm))
            ? ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                         >> 1U) & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                           & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                 >> 1U)))) 
                                       | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                           >> 1U) & 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                            | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                           | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                  >> 1U)) 
                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                                   & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                          >> 1U) & 
                                         ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                          | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                             & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                   >> 1U)))))))))
                ? 2U : ((1U & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                    | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                       & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                             >> 1U)))) 
                                   | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                       >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                  | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                               & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                                      >> 1U)) | ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm)) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                    | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                       & (~ 
                                                          ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                           >> 1U))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm))
                                         ? ((IData)(
                                                    (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                                                      >> 1U) 
                                                     & (~ 
                                                        ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                           >> 1U) 
                                                          & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                             | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                                & (~ 
                                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                    >> 1U))))) 
                                                         | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                                             >> 1U) 
                                                            & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                                | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                               | ((~ 
                                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                    >> 1U)) 
                                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter5_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm))
            ? ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                         >> 1U) & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                        | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                       | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                              >> 1U)) 
                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))) 
                                   & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                         | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                            & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                  >> 1U))))))))
                ? 2U : ((1U & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                    | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                   | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                          >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))) 
                               & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                      >> 1U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                    | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                       & (~ 
                                                          ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                           >> 1U))))))))
                         ? 1U : ((((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                        | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                       | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                              >> 1U)) 
                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))) 
                                   & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                      >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter4_reg))
                                  ? 1U : 2U))) : ((1U 
                                                   == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm))
                                                   ? 
                                                  ((IData)(
                                                           (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                             >> 1U) 
                                                            & (~ 
                                                               (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                                 | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                                    & (~ 
                                                                       ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                        >> 1U)))) 
                                                                | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                                                    >> 1U) 
                                                                   & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                                       | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                           >> 1U)) 
                                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))
                                                    ? 2U
                                                    : 1U)
                                                   : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter2_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm))
            ? ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm) 
                         >> 1U) & (~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                     & (~ 
                                                        ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                         >> 1U))))) 
                                      | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                          >> 1U) & 
                                         (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                          | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                 >> 1U)) 
                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))
                ? 2U : ((1U & ((~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                     >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                  & (~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U))))) 
                                   | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                       >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                  | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                               & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm) 
                                     >> 1U)))) ? 1U
                         : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm))
                                    ? ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm) 
                                                 >> 1U) 
                                                & (~ 
                                                   ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                           & (~ 
                                                              ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                               >> 1U))))) 
                                                    | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                                        >> 1U) 
                                                       & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                          | ((~ 
                                                              ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                               >> 1U)) 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))
                                        ? 2U : 1U) : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter3_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm))
            ? ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm) 
                         >> 1U) & ((~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm)) 
                                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                     & (~ 
                                                        ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                         >> 1U)))))) 
                                   & (~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                           >> 1U) & 
                                          ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                           | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                              & (~ 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                  >> 1U))))) 
                                         | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                             >> 1U) 
                                            & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                               | ((~ 
                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))))))
                ? 2U : ((1U & ((~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                     >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                  & (~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U))))) 
                                   | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                       >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                  | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                               & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm) 
                                      >> 1U)) | (((
                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm) 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm)) 
                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm)) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                    | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                       & (~ 
                                                          ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                           >> 1U))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm))
                                         ? ((IData)(
                                                    (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm) 
                                                      >> 1U) 
                                                     & (~ 
                                                        ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                           >> 1U) 
                                                          & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                             | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                                & (~ 
                                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                    >> 1U))))) 
                                                         | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                                             >> 1U) 
                                                            & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                                | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                               | ((~ 
                                                                   ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                                    >> 1U)) 
                                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state4_pp0_stage0_iter3 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
            >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter0_fsm 
        = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter0_fsm 
        = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY 
        = (IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
                              >> 2U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY 
        = (IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
                              >> 2U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_)) 
           & (0x1eU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_loop_init));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_8 
        = (1U & (~ ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter1_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm))
            ? ((((~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                       >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                 | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                    & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                          >> 1U))))) 
                     | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                         >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                    | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                   | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                          >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                 & (~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                        & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1))) 
                       | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                          & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)))))) 
                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm))
                ? 2U : ((1U & ((~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                     >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                  & (~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U))))) 
                                   | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                       >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                  | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                      >> 1U)) 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                               & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm)) 
                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm) 
                                     & (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1))) 
                                        | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                                           & (0x40U 
                                              != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm))
                                         ? (((~ (((
                                                   (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                                       | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                                                          & (~ 
                                                             ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                              >> 1U))))) 
                                                   | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                                      & (0x40U 
                                                         != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)))) 
                                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                                                     & (0x40U 
                                                        != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)))) 
                                                 | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                                                     >> 1U) 
                                                    & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                                        | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                                            >> 1U)) 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_1 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
           & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_2 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
           & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6 
        = (IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                    >> 1U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                 | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4)))));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))));
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_sf_1 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_nf_2 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1 = 0U;
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_sf_1 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1 
            = (0xfU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_nf_2 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__nf_1_fu_2880;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__i_fu_2752;
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0 
        = (1U & (~ ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4)) 
                    & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_1 
        = (1U & (~ ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4)) 
                    & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748 
                       >> 1U))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_2 
        = (1U & (~ ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4)) 
                    & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748 
                       >> 2U))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TVALID 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_6));
    __Vtableidx6 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                              << 5U)) | ((0x20U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter1_fsm) 
                                                   << 4U)) 
                                         | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY) 
                                             << 4U) 
                                            | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
                                                << 3U) 
                                               | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_NS_iter2_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h19187b36_0
        [__Vtableidx6];
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_done_int 
        = (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io)) 
            & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_loop_exit_ready_pp0_iter2_reg))) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_done_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_ready_int 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state4_pp0_stage0_iter3) 
               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_1) 
                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_2) 
                     | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4))))) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__out_V_TVALID_int_regslice 
        = ((IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__grp_fu_199_ce 
        = (1U & ((IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6) 
                 | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state4_pp0_stage0_iter3) 
                        | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4))) 
                    & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm) 
                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm))) 
                       >> 1U))));
    if (finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1 = 0U;
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_1_fu_304;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__i_fu_308;
    }
    if (finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1 = 0U;
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_1_fu_304;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__i_fu_308;
    }
    __Vtableidx16 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                               << 5U)) | ((0x20U & 
                                           ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter6_fsm) 
                                            << 4U)) 
                                          | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                              << 4U) 
                                             | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter7_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h570f8ced_0
        [__Vtableidx16];
    __Vtableidx11 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter2_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx11];
    __Vtableidx12 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter3_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx12];
    __Vtableidx13 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter4_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx13];
    __Vtableidx14 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter5_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter5_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx14];
    __Vtableidx15 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter5_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter6_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter6_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx15];
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io)) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
              >> 1U));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
            >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io));
    __Vtableidx26 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                               << 5U)) | ((0x20U & 
                                           ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter6_fsm) 
                                            << 4U)) 
                                          | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                              << 4U) 
                                             | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter7_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h570f8ced_0
        [__Vtableidx26];
    __Vtableidx21 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter2_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx21];
    __Vtableidx22 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter3_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx22];
    __Vtableidx23 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter4_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx23];
    __Vtableidx24 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter5_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter5_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx24];
    __Vtableidx25 = ((0x40U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter5_fsm) 
                               << 5U)) | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY) 
                                           << 5U) | 
                                          (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg) 
                                            << 4U) 
                                           | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter6_fsm))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter6_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0
        [__Vtableidx25];
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io)) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
              >> 1U));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
            >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_7 
        = ((0x3cU != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1 
        = ((0x3cU != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)) 
           & (0U == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_nf_2));
    __Vtableidx5 = ((0x80U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
                              << 5U)) | ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_done_int) 
                                           | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                          << 6U) | 
                                         ((0x20U & 
                                           ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
                                            << 2U)) 
                                          | (((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__i_b_reg) 
                                                & (3U 
                                                   == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                               | (1U 
                                                  == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                              << 4U) 
                                             | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_NS_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_haaa975fa_0
        [__Vtableidx5];
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__in0_V_TREADY_int_regslice 
        = ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_ready_int));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1 
        = ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)) 
           & (0U == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1 
        = ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)) 
           & (0U == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TVALID 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
           & (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int 
        = (((IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5) 
            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter7_reg)) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_ce0 
        = ((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3)) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
              >> 1U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TVALID 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
           & (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int 
        = (((IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5) 
            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter7_reg)) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_ce0 
        = ((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3)) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
              >> 1U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_5 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_NS_iter1_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter1_fsm))
            ? ((((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                      >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io) 
                                | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
                                   & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY)))))) 
                 & (~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                        | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                           & (0x3cU != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)))) 
                       | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))))) 
                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm))
                ? 2U : ((1U & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io) 
                                              | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
                                                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY)))))) 
                               & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm)) 
                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm) 
                                     & (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                                         | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                            & (0x3cU 
                                               != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)))) 
                                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1) 
                                           & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter1_fsm))
                                         ? (((~ (((
                                                   (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                                                   | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io) 
                                                         | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
                                                            & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY)))))) 
                                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                                     & (0x3cU 
                                                        != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)))) 
                                                 | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1) 
                                                    & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))) 
                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_phi_mux_inElem_1_phi_fu_2906_p32 
        = (((0U != vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_nf_2) 
            & (0x3cU != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)))
            ? ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4)) 
                      & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sf_fu_2748 
                         >> 3U))) ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_2)
                                      ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_1)
                                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                                              ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_8_fu_2852
                                              : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_9_fu_2856)
                                          : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                                              ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_10_fu_2860
                                              : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_11_fu_2864))
                                      : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_1)
                                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                                              ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_12_fu_2868
                                              : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_13_fu_2872)
                                          : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_14_fu_2876))
                : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_2)
                    ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_1)
                        ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_fu_2820
                            : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_1_fu_2824)
                        : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_2_fu_2828
                            : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_3_fu_2832))
                    : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_1)
                        ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_4_fu_2836
                            : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_5_fu_2840)
                        : ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__mux_154_40_1_1_U1__DOT____VdfgRegularize_h9157129d_0_0)
                            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_6_fu_2844
                            : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__inputBuf_V_7_fu_2848))))
            : (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1) 
                & ((0xeU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                   | ((0xfU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                      | ((0xdU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                         | ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                            | ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                               | ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                  | ((3U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                     | ((4U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                        | ((5U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                           | ((6U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                              | ((7U 
                                                  == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                                 | ((8U 
                                                     == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                                    | ((9U 
                                                        == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                                       | ((0xaU 
                                                           == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                                          | ((0xbU 
                                                              == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1)) 
                                                             | (0xcU 
                                                                == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln257_fu_3083_p1))))))))))))))))))
                ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__in0_V_TDATA_int_regslice
                : 0ULL));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_8 
        = (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
            & (0x3cU != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1))) 
           | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op76_read_state1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_7 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter1_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm))
            ? ((((~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                      | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                     | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                        & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))) 
                 & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm))
                ? 2U : ((1U & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                              | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY)))))) 
                               & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm)) 
                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
                                     & (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                         | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                            & (0x40U 
                                               != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                                           & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm))
                                         ? (((~ (((
                                                   (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                                   | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                                      & (0x40U 
                                                         != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) 
                                                 | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                                       | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_4 
        = (1U & (~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                     | (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1))) 
                        | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1)))) 
                    | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_8 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter1_fsm 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm))
            ? ((((~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                      | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                     | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                        & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))) 
                 & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm))
                ? 2U : ((1U & ((~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                              | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY)))))) 
                               & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm)) 
                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
                                     & (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                         | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                            & (0x40U 
                                               != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                                        | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                                           & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))))))))
                         ? 1U : 2U)) : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm))
                                         ? (((~ (((
                                                   (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                                   | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                                      & (0x40U 
                                                         != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                                                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) 
                                                 | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                                       | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm))
                                             ? 2U : 1U)
                                         : 0U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_4 
        = (1U & (~ (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                     | (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1))) 
                        | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1)))) 
                    | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3))));
    __Vtableidx10 = ((0x80U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
                               << 5U)) | ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int) 
                                            | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                           << 6U) | 
                                          ((0x20U & 
                                            ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
                                             << 2U)) 
                                           | (((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__i_b_reg) 
                                                 & (3U 
                                                    == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                                | (1U 
                                                   == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                               << 4U) 
                                              | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_NS_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_haaa975fa_0
        [__Vtableidx10];
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__grp_fu_2894_ce 
        = (1U & (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3)) 
                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                     >> 1U)) | (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3)) 
                                 & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm) 
                                    >> 1U)) | (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3)) 
                                                & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm) 
                                                   >> 1U)) 
                                               | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_ce0)))));
    __Vtableidx20 = ((0x80U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
                               << 5U)) | ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int) 
                                            | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                           << 6U) | 
                                          ((0x20U & 
                                            ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
                                             << 2U)) 
                                           | (((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__i_b_reg) 
                                                 & (3U 
                                                    == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                                | (1U 
                                                   == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                               << 4U) 
                                              | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_NS_fsm 
        = VMVAU_hls_0__ConstPool__TABLE_haaa975fa_0
        [__Vtableidx20];
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__grp_fu_2859_ce 
        = (1U & (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3)) 
                  & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                     >> 1U)) | (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3)) 
                                 & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm) 
                                    >> 1U)) | (((~ (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3)) 
                                                & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm) 
                                                   >> 1U)) 
                                               | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_ce0)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_2 
        = (1U & (~ ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                    | ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                         >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io)) 
                       | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_8)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__in0_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_4) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_7)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_4) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__in0_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_4) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_8)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_4) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_ready_int 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_2) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_ready 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_2) 
           & ((0x3cU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_sig_allocacmp_i_1)) 
              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__in0_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_2) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_5)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__weights_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_2) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_7)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_ready 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int) 
           & (0x40U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_ready 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int) 
           & (0x40U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TREADY_int_regslice 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
            >> 2U) & ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)) 
                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_ready_int)));
}
