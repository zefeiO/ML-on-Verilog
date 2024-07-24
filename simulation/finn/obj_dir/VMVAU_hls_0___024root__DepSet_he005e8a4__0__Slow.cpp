// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMVAU_hls_0.h for the primary calling header

#include "VMVAU_hls_0__pch.h"
#include "VMVAU_hls_0__Syms.h"
#include "VMVAU_hls_0___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMVAU_hls_0___024root___dump_triggers__stl(VMVAU_hls_0___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMVAU_hls_0___024root___eval_triggers__stl(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMVAU_hls_0___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 128> VMVAU_hls_0__ConstPool__TABLE_h19187b36_0;
extern const VlUnpacked<CData/*1:0*/, 128> VMVAU_hls_0__ConstPool__TABLE_h570f8ced_0;
extern const VlUnpacked<CData/*1:0*/, 128> VMVAU_hls_0__ConstPool__TABLE_h36c21b38_0;
extern const VlUnpacked<CData/*3:0*/, 256> VMVAU_hls_0__ConstPool__TABLE_haaa975fa_0;

VL_ATTR_COLD void VMVAU_hls_0___024root___stl_sequent__TOP__0(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h72e03f87_0_0;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h72e03f87_0_0 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_3 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_5 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h30d9c4e7_0_0;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h30d9c4e7_0_0 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_3 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_5 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h4736d17f_0_0;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h4736d17f_0_0 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h27cd7231_0_0;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h27cd7231_0_0 = 0;
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
    vlSelf->MVAU_hls_0_regslice_both_w1__02Eack_in 
        = (1U & ((IData)(vlSelf->MVAU_hls_0_regslice_both_w1__DOT__B_V_data_1_state) 
                 >> 1U));
    vlSelf->MVAU_hls_0_regslice_both_w1__02Evld_out 
        = (1U & (IData)(vlSelf->MVAU_hls_0_regslice_both_w1__DOT__B_V_data_1_state));
    vlSelf->MVAU_hls_1_regslice_both_w1__02Eack_in 
        = (1U & ((IData)(vlSelf->MVAU_hls_1_regslice_both_w1__DOT__B_V_data_1_state) 
                 >> 1U));
    vlSelf->MVAU_hls_1_regslice_both_w1__02Evld_out 
        = (1U & (IData)(vlSelf->MVAU_hls_1_regslice_both_w1__DOT__B_V_data_1_state));
    vlSelf->MVAU_hls_2_regslice_both_w1__02Eack_in 
        = (1U & ((IData)(vlSelf->MVAU_hls_2_regslice_both_w1__DOT__B_V_data_1_state) 
                 >> 1U));
    vlSelf->MVAU_hls_2_regslice_both_w1__02Evld_out 
        = (1U & (IData)(vlSelf->MVAU_hls_2_regslice_both_w1__DOT__B_V_data_1_state));
    vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eblock 
        = vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__DOT__monitor_find_block;
    vlSelf->MVAU_hls_3_regslice_both_w1__02Eack_in 
        = (1U & ((IData)(vlSelf->MVAU_hls_3_regslice_both_w1__DOT__B_V_data_1_state) 
                 >> 1U));
    vlSelf->MVAU_hls_3_regslice_both_w1__02Evld_out 
        = (1U & (IData)(vlSelf->MVAU_hls_3_regslice_both_w1__DOT__B_V_data_1_state));
    vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__MVAU_hls_0_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block 
        = (IData)((0U != (IData)(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Eaxis_block_sigs)));
    vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Eblock 
        = vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__monitor_find_block;
    vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__MVAU_hls_1_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block 
        = (IData)((0U != (IData)(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Eaxis_block_sigs)));
    vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Eblock 
        = vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__monitor_find_block;
    vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__MVAU_hls_2_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block 
        = (IData)((0U != (IData)(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Eaxis_block_sigs)));
    vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Eblock 
        = vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__monitor_find_block;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln290_fu_159_p2 
        = (0x40U == ((IData)(1U) + vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__sf_fu_58));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__sf_1_fu_153_p2 
        = ((IData)(1U) + vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__sf_fu_58);
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0_out_V_TVALID 
        = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                 >> 2U));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1_out_V_TVALID 
        = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                 >> 6U));
    vlSelf->MVAU_hls_0_regslice_both_w1__02Eapdone_blk 
        = (((~ (IData)(vlSelf->MVAU_hls_0_regslice_both_w1__02Eack_out)) 
            & (3U == (IData)(vlSelf->MVAU_hls_0_regslice_both_w1__DOT__B_V_data_1_state))) 
           | (1U == (IData)(vlSelf->MVAU_hls_0_regslice_both_w1__DOT__B_V_data_1_state)));
    vlSelf->MVAU_hls_1_regslice_both_w1__02Eapdone_blk 
        = (((~ (IData)(vlSelf->MVAU_hls_1_regslice_both_w1__02Eack_out)) 
            & (3U == (IData)(vlSelf->MVAU_hls_1_regslice_both_w1__DOT__B_V_data_1_state))) 
           | (1U == (IData)(vlSelf->MVAU_hls_1_regslice_both_w1__DOT__B_V_data_1_state)));
    vlSelf->MVAU_hls_2_regslice_both_w1__02Eapdone_blk 
        = (((~ (IData)(vlSelf->MVAU_hls_2_regslice_both_w1__02Eack_out)) 
            & (3U == (IData)(vlSelf->MVAU_hls_2_regslice_both_w1__DOT__B_V_data_1_state))) 
           | (1U == (IData)(vlSelf->MVAU_hls_2_regslice_both_w1__DOT__B_V_data_1_state)));
    vlSelf->MVAU_hls_3_regslice_both_w1__02Eapdone_blk 
        = (((~ (IData)(vlSelf->MVAU_hls_3_regslice_both_w1__02Eack_out)) 
            & (3U == (IData)(vlSelf->MVAU_hls_3_regslice_both_w1__DOT__B_V_data_1_state))) 
           | (1U == (IData)(vlSelf->MVAU_hls_3_regslice_both_w1__DOT__B_V_data_1_state)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__count 
        = (0x3fU & ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))
                     ? ((IData)(2U) + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))
                     : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state))
                         ? 1U : 0U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__count 
        = (3U & ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state))
                  ? ((IData)(2U) + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr))
                  : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state))
                      ? 1U : 0U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__count 
        = (3U & ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))
                  ? ((IData)(2U) + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr))
                  : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))
                      ? 1U : 0U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__count 
        = (3U & ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state))
                  ? ((IData)(2U) + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr))
                  : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state))
                      ? 1U : 0U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__count 
        = (3U & ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))
                  ? ((IData)(2U) + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr))
                  : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))
                      ? 1U : 0U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__count 
        = (3U & ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))
                  ? ((IData)(2U) + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr))
                  : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))
                      ? 1U : 0U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__count 
        = (3U & ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))
                  ? ((IData)(2U) + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr))
                  : ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))
                      ? 1U : 0U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->MVAU_hls_0_regslice_both_w1__02Edata_out 
        = ((IData)(vlSelf->MVAU_hls_0_regslice_both_w1__DOT__B_V_data_1_sel_rd)
            ? (IData)(vlSelf->MVAU_hls_0_regslice_both_w1__DOT__B_V_data_1_payload_B)
            : (IData)(vlSelf->MVAU_hls_0_regslice_both_w1__DOT__B_V_data_1_payload_A));
    vlSelf->MVAU_hls_1_regslice_both_w1__02Edata_out 
        = ((IData)(vlSelf->MVAU_hls_1_regslice_both_w1__DOT__B_V_data_1_sel_rd)
            ? (IData)(vlSelf->MVAU_hls_1_regslice_both_w1__DOT__B_V_data_1_payload_B)
            : (IData)(vlSelf->MVAU_hls_1_regslice_both_w1__DOT__B_V_data_1_payload_A));
    vlSelf->MVAU_hls_2_regslice_both_w1__02Edata_out 
        = ((IData)(vlSelf->MVAU_hls_2_regslice_both_w1__DOT__B_V_data_1_sel_rd)
            ? (IData)(vlSelf->MVAU_hls_2_regslice_both_w1__DOT__B_V_data_1_payload_B)
            : (IData)(vlSelf->MVAU_hls_2_regslice_both_w1__DOT__B_V_data_1_payload_A));
    vlSelf->MVAU_hls_3_regslice_both_w1__02Edata_out 
        = ((IData)(vlSelf->MVAU_hls_3_regslice_both_w1__DOT__B_V_data_1_sel_rd)
            ? (IData)(vlSelf->MVAU_hls_3_regslice_both_w1__DOT__B_V_data_1_payload_B)
            : (IData)(vlSelf->MVAU_hls_3_regslice_both_w1__DOT__B_V_data_1_payload_A));
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_rd) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x27U)) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__weights_V_TDATA_int_regslice[__Vilp1] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    } else {
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x27U)) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__weights_V_TDATA_int_regslice[__Vilp2] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__result_V_2_fu_2883_p2 
        = (3U & (((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_1_reg_4264))) 
                  + (1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_2_reg_4269)))) 
                 + (1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_reg_4259)))));
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_rd) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B[3U];
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A[3U];
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_62_fu_2818_p2 
        = (0xffU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_61_reg_4254) 
                    + ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_14_reg_4244) 
                       + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_29_reg_4249))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__result_V_2_fu_2848_p2 
        = (3U & (((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_1_reg_4244))) 
                  + (1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_2_reg_4249)))) 
                 + (1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_reg_4239)))));
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_rd) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B[3U];
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A[3U];
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_62_fu_2783_p2 
        = (0x7fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_61_reg_4234) 
                    + ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_14_reg_4224) 
                       + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_29_reg_4229))));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                     >> 2U));
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))) {
        if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                      >> 2U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                   >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                             >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                       >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
        } else if ((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                              >> 2U)) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                            >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if ((IData)(((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                                >> 2U)) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                           >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U)));
    }
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                     >> 6U));
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))) {
        if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                      >> 6U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                   >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                             >> 6U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                       >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
        } else if ((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                              >> 6U)) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                            >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if ((IData)(((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                                >> 6U)) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                           >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U)));
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
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = (1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state));
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state)) 
               && (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy));
    }
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = (1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state));
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state)) 
               && (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy));
    }
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = (1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state));
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U)));
    }
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
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
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
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))) {
        if ((4U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[3U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))) {
        if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                      >> 2U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                   >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                             >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                       >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[3U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                              >> 2U)) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                            >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((IData)(((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                                >> 2U)) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                           >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        if ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))) {
            if ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))) {
                if ((0U >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] 
                        = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srl
                        [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr][0U];
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] 
                        = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srl
                        [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr][1U];
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] 
                        = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srl
                        [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr][2U];
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] 
                        = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srl
                        [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr][3U];
                } else {
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
                }
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ 
                    = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U);
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 2U;
            }
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr))));
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))) {
        if ((0x40U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[3U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))) {
        if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                      >> 6U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                   >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                             >> 6U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                       >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[3U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                              >> 6U)) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                            >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((IData)(((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                                >> 6U)) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                           >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        if ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))) {
            if ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))) {
                if ((0U >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] 
                        = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srl
                        [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr][0U];
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] 
                        = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srl
                        [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr][1U];
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] 
                        = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srl
                        [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr][2U];
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] 
                        = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srl
                        [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr][3U];
                } else {
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
                    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
                }
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ 
                    = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U);
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 2U;
            }
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr))));
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 0U;
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
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_out_V_TDATA 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_rd)
            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_B
            : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_A);
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_out_V_TDATA 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_rd)
            ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_B)
            : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_A));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_out_V_TDATA 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_rd)
            ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_B)
            : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_A));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_out_V_TDATA 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_rd)
            ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_B)
            : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_A));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TDATA 
        = ((((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                            ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                ? 8U : 1U) : 1U)) + 
              VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                            ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                ? 0x16U : 1U) : 1U))) 
             + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                           ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                             ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                 ? 0xfU : 1U) : 1U))) 
            << 0x1eU) | ((0x30000000U & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                                       ((2U 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                          ? 0x1fbU
                                                          : 0xcU)
                                                         : 1U)) 
                                           + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                                         ((2U 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                            ? 0xbU
                                                            : 0x18U)
                                                           : 1U))) 
                                          + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                                        ((2U 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                           ? 3U
                                                           : 0x12U)
                                                          : 1U))) 
                                         << 0x1cU)) 
                         | ((0xc000000U & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                                         ((2U 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                           ? 1U
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                            ? 0xaU
                                                            : 0x12U))) 
                                             + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                                           ((2U 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                             ? 1U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                              ? 0x29U
                                                              : 0x21U)))) 
                                            + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                                          ((2U 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                            ? 1U
                                                            : 0x1aU))) 
                                           << 0x1aU)) 
                            | ((0x3000000U & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                                            ((2U 
                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                               ? 0x1feU
                                                               : 0x24U)
                                                              : 
                                                             ((1U 
                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                               ? 0U
                                                               : 1U))) 
                                                + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                                              ((2U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 
                                                               ((1U 
                                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                 ? 0xdU
                                                                 : 0x37U)
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                 ? 0xeU
                                                                 : 1U)))) 
                                               + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                                             ((2U 
                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                               ? 
                                                              ((1U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 5U
                                                                : 0x2dU)
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 7U
                                                                : 1U)))) 
                                              << 0x18U)) 
                               | ((0xc00000U & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                                              ((2U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 
                                                               ((1U 
                                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                 ? 1U
                                                                 : 0x12U)
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                 ? 1U
                                                                 : 0U))) 
                                                  + 
                                                  VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                                              ((2U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 
                                                               ((1U 
                                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                 ? 1U
                                                                 : 0x1cU)
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                 ? 1U
                                                                 : 9U)))) 
                                                 + 
                                                 VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                                             ((2U 
                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                               ? 
                                                              ((1U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 1U
                                                                : 0x17U)
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 1U
                                                                : 4U)))) 
                                                << 0x16U)) 
                                  | ((0x300000U & (
                                                   ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                   ? 1U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                    ? 8U
                                                                    : 1U))) 
                                                     + 
                                                     VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                   ? 
                                                                  ((1U 
                                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                    ? 0xfU
                                                                    : 1U)
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                    ? 0x11U
                                                                    : 1U)))) 
                                                    + 
                                                    VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                                                ((2U 
                                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                  ? 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                   ? 8U
                                                                   : 1U)
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                   ? 0xcU
                                                                   : 1U)))) 
                                                   << 0x14U)) 
                                     | ((0xc0000U & 
                                         (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                                        ((2U 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                           ? 8U
                                                           : 0x14U)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                           ? 0x11U
                                                           : 7U))) 
                                            + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                                          ((2U 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                             ? 0x13U
                                                             : 0x27U)
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                             ? 0x25U
                                                             : 0x15U)))) 
                                           + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                                         ((2U 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                            ? 0xeU
                                                            : 0x1eU)
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                            ? 0x1bU
                                                            : 0xeU)))) 
                                          << 0x12U)) 
                                        | ((0x30000U 
                                            & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                                             ((2U 
                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                               ? 
                                                              ((1U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 0x13U
                                                                : 0x22U)
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 0xdU
                                                                : 1U))) 
                                                 + 
                                                 VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                                             ((2U 
                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                               ? 
                                                              ((1U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 0x1dU
                                                                : 0x32U)
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 0x1cU
                                                                : 1U)))) 
                                                + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                                              ((2U 
                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                ? 
                                                               ((1U 
                                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                 ? 0x18U
                                                                 : 0x2aU)
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                 ? 0x15U
                                                                 : 1U)))) 
                                               << 0x10U)) 
                                           | ((0xc000U 
                                               & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                                                ((2U 
                                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                  ? 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                   ? 0x1f1U
                                                                   : 0x1f7U)
                                                                  : 1U)) 
                                                    + 
                                                    VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                                                ((2U 
                                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                  ? 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                   ? 1U
                                                                   : 4U)
                                                                  : 1U))) 
                                                   + 
                                                   VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                                               ((2U 
                                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                  ? 0x1f9U
                                                                  : 0x1fdU)
                                                                 : 1U))) 
                                                  << 0xeU)) 
                                              | ((0x3000U 
                                                  & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_reg_32761), 
                                                                   ((2U 
                                                                     & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                      ? 0x1f7U
                                                                      : 1U)
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                      ? 0x11U
                                                                      : 1U))) 
                                                       + 
                                                       VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_reg_32761), 
                                                                   ((2U 
                                                                     & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                      ? 0xfU
                                                                      : 1U)
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                      ? 0x25U
                                                                      : 1U)))) 
                                                      + 
                                                      VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_reg_32761), 
                                                                  ((2U 
                                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                    ? 
                                                                   ((1U 
                                                                     & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                     ? 3U
                                                                     : 1U)
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                     ? 0x1bU
                                                                     : 1U)))) 
                                                     << 0xcU)) 
                                                 | ((0xc00U 
                                                     & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_37_reg_32754), 
                                                                      ((2U 
                                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                        ? 
                                                                       ((1U 
                                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                         ? 0xcU
                                                                         : 0xeU)
                                                                        : 1U)) 
                                                          + 
                                                          VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_37_reg_32754), 
                                                                      ((2U 
                                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                        ? 
                                                                       ((1U 
                                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                         ? 0x19U
                                                                         : 0x21U)
                                                                        : 1U))) 
                                                         + 
                                                         VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_37_reg_32754), 
                                                                     ((2U 
                                                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                       ? 
                                                                      ((1U 
                                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                        ? 0x12U
                                                                        : 0x18U)
                                                                       : 1U))) 
                                                        << 0xaU)) 
                                                    | ((0x300U 
                                                        & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_36_reg_32747), 
                                                                         ((2U 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                           ? 1U
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                            ? 0xdU
                                                                            : 7U))) 
                                                             + 
                                                             VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_36_reg_32747), 
                                                                         ((2U 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                           ? 1U
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                            ? 0x19U
                                                                            : 0x10U)))) 
                                                            + 
                                                            VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_36_reg_32747), 
                                                                        ((2U 
                                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                          ? 1U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                           ? 0x13U
                                                                           : 0xcU)))) 
                                                           << 8U)) 
                                                       | ((0xc0U 
                                                           & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_35_reg_32740), 
                                                                            ((2U 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                              ? 
                                                                             ((1U 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                               ? 0x1ebU
                                                                               : 1U)
                                                                              : 
                                                                             ((1U 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                               ? 0x1feU
                                                                               : 8U))) 
                                                                + 
                                                                VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_35_reg_32740), 
                                                                            ((2U 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                              ? 
                                                                             ((1U 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                               ? 0x1f4U
                                                                               : 1U)
                                                                              : 
                                                                             ((1U 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                               ? 8U
                                                                               : 0x14U)))) 
                                                               + 
                                                               VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_35_reg_32740), 
                                                                           ((2U 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                             ? 
                                                                            ((1U 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                              ? 0x1f0U
                                                                              : 1U)
                                                                             : 
                                                                            ((1U 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                              ? 3U
                                                                              : 0xeU)))) 
                                                              << 6U)) 
                                                          | ((0x30U 
                                                              & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_34_reg_32733), 
                                                                               ((2U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 1U
                                                                                 : 0x14U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 1U
                                                                                 : 0x17U))) 
                                                                   + 
                                                                   VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_34_reg_32733), 
                                                                               ((2U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 1U
                                                                                 : 0x24U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 1U
                                                                                 : 0x2aU)))) 
                                                                  + 
                                                                  VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_34_reg_32733), 
                                                                              ((2U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                ? 
                                                                               ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 1U
                                                                                 : 0x1cU)
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 1U
                                                                                 : 0x20U)))) 
                                                                 << 4U)) 
                                                             | ((0xcU 
                                                                 & (((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_33_reg_32726), 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 0x26U
                                                                                 : 4U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 0xdU
                                                                                 : 8U))) 
                                                                      + 
                                                                      VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_33_reg_32726), 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 0x37U
                                                                                 : 0x11U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 0x2fU
                                                                                 : 0x14U)))) 
                                                                     + 
                                                                     VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_33_reg_32726), 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 0x2eU
                                                                                 : 0xbU)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 0x1eU
                                                                                 : 0xeU)))) 
                                                                    << 2U)) 
                                                                | (3U 
                                                                   & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_32_reg_32719), 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 5U
                                                                                 : 0x3bU)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 1U
                                                                                 : 0xaU))) 
                                                                       + 
                                                                       VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_32_reg_32719), 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 0x15U
                                                                                 : 0x8dU)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 1U
                                                                                 : 0x1dU)))) 
                                                                      + 
                                                                      VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_32_reg_32719), 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 0xdU
                                                                                 : 0x8dU)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                                                 ? 1U
                                                                                 : 0x14U))))))))))))))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_fu_28414_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_435_reg_32233)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_433_reg_32228))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_430_reg_32223)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_428_reg_32218)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_425_reg_32213)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_423_reg_32208))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_421_reg_32203)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_419_reg_32198))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_415_reg_32193)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_413_reg_32188))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_411_reg_32183)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_409_reg_32178)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_406_reg_32173)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_404_reg_32168))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_402_reg_32163)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_10_fu_2796)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_815_reg_32153)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_437_reg_32158)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_fu_28608_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_475_reg_32318)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_473_reg_32313))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_470_reg_32308)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_468_reg_32303)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_465_reg_32298)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_463_reg_32293))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_461_reg_32288)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_459_reg_32283))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_455_reg_32278)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_453_reg_32273))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_451_reg_32268)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_449_reg_32263)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_446_reg_32258)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_444_reg_32253))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_442_reg_32248)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_11_fu_2800)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_893_reg_32238)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_477_reg_32243)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_fu_28802_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_515_reg_32403)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_513_reg_32398))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_510_reg_32393)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_508_reg_32388)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_505_reg_32383)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_503_reg_32378))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_501_reg_32373)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_499_reg_32368))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_495_reg_32363)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_493_reg_32358))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_491_reg_32353)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_489_reg_32348)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_486_reg_32343)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_484_reg_32338))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_482_reg_32333)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_12_fu_2804)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_971_reg_32323)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_517_reg_32328)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_fu_28996_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_555_reg_32488)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_553_reg_32483))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_550_reg_32478)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_548_reg_32473)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_545_reg_32468)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_543_reg_32463))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_541_reg_32458)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_539_reg_32453))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_535_reg_32448)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_533_reg_32443))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_531_reg_32438)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_529_reg_32433)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_526_reg_32428)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_524_reg_32423))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_522_reg_32418)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_13_fu_2808)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_1049_reg_32408)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_557_reg_32413)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_fu_29190_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_595_reg_32573)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_593_reg_32568))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_590_reg_32563)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_588_reg_32558)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_585_reg_32553)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_583_reg_32548))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_581_reg_32543)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_579_reg_32538))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_575_reg_32533)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_573_reg_32528))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_571_reg_32523)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_569_reg_32518)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_566_reg_32513)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_564_reg_32508))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_562_reg_32503)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_14_fu_2812)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_1127_reg_32493)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_597_reg_32498)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_fu_29384_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_635_reg_32658)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_633_reg_32653))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_630_reg_32648)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_628_reg_32643)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_625_reg_32638)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_623_reg_32633))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_621_reg_32628)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_619_reg_32623))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_615_reg_32618)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_613_reg_32613))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_611_reg_32608)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_609_reg_32603)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_606_reg_32598)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_604_reg_32593))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_602_reg_32588)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_15_fu_2816)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_1205_reg_32578)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_637_reg_32583)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_33_fu_26668_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_75_reg_31468)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_73_reg_31463))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_70_reg_31458)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_68_reg_31453)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_65_reg_31448)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_63_reg_31443))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_61_reg_31438)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_59_reg_31433))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_55_reg_31428)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_53_reg_31423))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_51_reg_31418)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_49_reg_31413)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_46_reg_31408)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_44_reg_31403))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_42_reg_31398)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_1_fu_2760)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_113_reg_31388)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_77_reg_31393)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_34_fu_26862_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_115_reg_31553)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_113_reg_31548))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_110_reg_31543)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_108_reg_31538)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_105_reg_31533)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_103_reg_31528))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_101_reg_31523)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_99_reg_31518))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_95_reg_31513)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_93_reg_31508))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_91_reg_31503)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_89_reg_31498)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_86_reg_31493)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_84_reg_31488))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_82_reg_31483)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_2_fu_2764)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_191_reg_31473)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_117_reg_31478)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_32_fu_26474_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_35_reg_31383)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_33_reg_31378))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_30_reg_31373)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_28_reg_31368)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_25_reg_31363)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_23_reg_31358))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_21_reg_31353)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_19_reg_31348))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_15_reg_31343)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_13_reg_31338))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_11_reg_31333)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_9_reg_31328)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_6_reg_31323)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_4_reg_31318))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_2_reg_31313)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_fu_2756)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_36_reg_31303)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_37_reg_31308)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_35_fu_27056_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_155_reg_31638)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_153_reg_31633))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_150_reg_31628)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_148_reg_31623)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_145_reg_31618)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_143_reg_31613))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_141_reg_31608)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_139_reg_31603))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_135_reg_31598)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_133_reg_31593))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_131_reg_31588)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_129_reg_31583)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_126_reg_31578)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_124_reg_31573))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_122_reg_31568)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_3_fu_2768)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_269_reg_31558)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_157_reg_31563)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_36_fu_27250_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_195_reg_31723)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_193_reg_31718))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_190_reg_31713)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_188_reg_31708)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_185_reg_31703)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_183_reg_31698))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_181_reg_31693)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_179_reg_31688))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_175_reg_31683)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_173_reg_31678))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_171_reg_31673)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_169_reg_31668)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_166_reg_31663)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_164_reg_31658))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_162_reg_31653)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_4_fu_2772)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_347_reg_31643)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_197_reg_31648)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_37_fu_27444_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_235_reg_31808)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_233_reg_31803))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_230_reg_31798)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_228_reg_31793)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_225_reg_31788)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_223_reg_31783))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_221_reg_31778)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_219_reg_31773))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_215_reg_31768)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_213_reg_31763))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_211_reg_31758)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_209_reg_31753)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_206_reg_31748)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_204_reg_31743))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_202_reg_31738)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_5_fu_2776)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_425_reg_31728)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_237_reg_31733)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_fu_27638_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_275_reg_31893)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_273_reg_31888))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_270_reg_31883)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_268_reg_31878)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_265_reg_31873)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_263_reg_31868))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_261_reg_31863)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_259_reg_31858))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_255_reg_31853)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_253_reg_31848))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_251_reg_31843)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_249_reg_31838)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_246_reg_31833)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_244_reg_31828))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_242_reg_31823)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_6_fu_2780)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_503_reg_31813)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_277_reg_31818)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_fu_27832_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_315_reg_31978)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_313_reg_31973))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_310_reg_31968)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_308_reg_31963)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_305_reg_31958)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_303_reg_31953))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_301_reg_31948)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_299_reg_31943))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_295_reg_31938)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_293_reg_31933))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_291_reg_31928)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_289_reg_31923)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_286_reg_31918)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_284_reg_31913))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_282_reg_31908)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_7_fu_2784)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_581_reg_31898)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_317_reg_31903)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_fu_28026_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_355_reg_32063)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_353_reg_32058))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_350_reg_32053)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_348_reg_32048)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_345_reg_32043)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_343_reg_32038))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_341_reg_32033)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_339_reg_32028))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_335_reg_32023)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_333_reg_32018))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_331_reg_32013)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_329_reg_32008)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_326_reg_32003)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_324_reg_31998))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_322_reg_31993)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_8_fu_2788)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_659_reg_31983)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_357_reg_31988)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_fu_28220_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,7, (0x7fU & (VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_395_reg_32148)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_393_reg_32143))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_390_reg_32138)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_388_reg_32133)))))))) 
                                                  + 
                                                  VL_EXTENDS_II(7,6, 
                                                                (0x3fU 
                                                                 & (VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_385_reg_32128)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_383_reg_32123))))) 
                                                                    + 
                                                                    VL_EXTENDS_II(6,5, 
                                                                                (0x1fU 
                                                                                & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_381_reg_32118)) 
                                                                                + 
                                                                                VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_379_reg_32113))))))))))) 
                     + (VL_EXTENDS_II(9,6, (0x3fU & 
                                            (VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_375_reg_32108)) 
                                                               + 
                                                               VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_373_reg_32103))))) 
                                             + VL_EXTENDS_II(6,5, 
                                                             (0x1fU 
                                                              & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_371_reg_32098)) 
                                                                 + 
                                                                 VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_369_reg_32093)))))))) 
                        + (VL_EXTENDS_II(9,5, (0x1fU 
                                               & (VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_366_reg_32088)) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_364_reg_32083))))) 
                           + (VL_EXTENDS_II(9,4, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__add_ln840_362_reg_32078)) 
                              + (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln272_reg_31263)
                                   ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_9_fu_2792)) 
                                 + VL_EXTENDS_II(9,3, 
                                                 ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__p_Result_37_reg_31283)
                                                   ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__sext_ln186_737_reg_32068)
                                                   : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ret_V_397_reg_32073)))))))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs2));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h72e03f87_0_0 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_ce) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs2));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h30d9c4e7_0_0 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_ce) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs2));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h4736d17f_0_0 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_ce) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs2));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h27cd7231_0_0 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_ce) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__in0_V_TDATA_int_regslice 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd)
            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B
            : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A);
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm) 
            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_loop_init))
            ? 0U : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__i_fu_62));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY 
        = (IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
                              >> 2U)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__i_b_reg) 
            & (3U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
           | (1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln249_reg_31251_pp0_iter1_reg)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__icmp_ln290_reg_32663_pp0_iter1_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter4_reg)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln290_reg_259_pp0_iter4_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter3_reg)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln290_reg_259));
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
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state_ 
            = ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy)
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr))));
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state))
                ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy)
                    ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U) : 2U) : 0U);
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state_)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_)));
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state_ 
            = ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy)
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr))));
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state))
                ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy)
                    ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U) : 2U) : 0U);
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state_)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_)));
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ 
            = ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr))));
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))
                ? ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))
                    ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U) : 2U) : 0U);
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_)));
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ 
            = ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready)
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr))));
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))
                ? ((IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready)
                    ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U) : 2U) : 0U);
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state_)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state_)) 
           & (0x1eU == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__srlo_ 
            = ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))
                ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_out_V_TDATA
                : 0U);
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_out_V_TDATA;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__srlo_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state))
                ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy)
                    ? ((0U >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr))
                        ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__srl
                       [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr]
                        : 0U) : 0U) : 0U);
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srlo_ 
            = ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))
                ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_out_V_TDATA)
                : 0U);
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_out_V_TDATA;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srlo_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state))
                ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy)
                    ? ((0U >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr))
                        ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srl
                       [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr]
                        : 0U) : 0U) : 0U);
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ 
            = ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))
                ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_out_V_TDATA)
                : 0U);
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_out_V_TDATA;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))
                ? ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))
                    ? ((0U >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr))
                        ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srl
                       [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr]
                        : 0U) : 0U) : 0U);
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ 
            = ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))
                ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_out_V_TDATA)
                : 0U);
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_out_V_TDATA;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srlo_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state))
                ? ((IData)(vlSelf->finn_design_tb__DOT__m_axis_0_tready)
                    ? ((0U >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr))
                        ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srl
                       [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr]
                        : 0U) : 0U) : 0U);
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure)) 
                 | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h72e03f87_0_0)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure) 
           & (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h72e03f87_0_0));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure)) 
                 | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h30d9c4e7_0_0)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure) 
           & (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h30d9c4e7_0_0));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure)) 
                 | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h4736d17f_0_0)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure) 
           & (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h4736d17f_0_0));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure)) 
                 | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h27cd7231_0_0)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure) 
           & (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h27cd7231_0_0));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_8 
        = (1U & (~ ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)) 
                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_1 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
           & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_2 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
           & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_6 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3) 
           & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
              >> 1U));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_block_state3_io 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_out_V_TREADY)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_predicate_op4694_write_state3));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_8 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_6 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_init));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_4 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_loop_init));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback)
            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
           [2U] : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
           [0U]);
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback)
            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
           [2U] : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
           [0U]);
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback)
            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
           [2U] : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
           [0U]);
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback)
            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
           [2U] : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
           [0U]);
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
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
            >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                      | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)));
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
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state4_pp0_stage0_iter3 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
            >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io));
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
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt.__PVT__val 
        = (0x3fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                            .__PVT__val) + ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_ce)
                                             ? 0U : 
                                            (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                             .__PVT__lst
                                              ? 5U : 1U))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt.__PVT__lst 
        = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_ce)
                  ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                 .__PVT__lst : (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                .__PVT__lst ? 0U : 
                                (0x3aU == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                 .__PVT__val))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt.__PVT__val 
        = (0x3fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                            .__PVT__val) + ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_ce)
                                             ? 0U : 
                                            (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                             .__PVT__lst
                                              ? 1U : 1U))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt.__PVT__lst 
        = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_ce)
                  ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                 .__PVT__lst : (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                .__PVT__lst ? 0U : 
                                (0x3eU == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                 .__PVT__val))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt.__PVT__val 
        = (0x3fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                            .__PVT__val) + ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_ce)
                                             ? 0U : 
                                            (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                             .__PVT__lst
                                              ? 1U : 1U))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt.__PVT__lst 
        = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_ce)
                  ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                 .__PVT__lst : (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                .__PVT__lst ? 0U : 
                                (0x3eU == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                 .__PVT__val))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt.__PVT__val 
        = (0x3fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                            .__PVT__val) + ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_ce)
                                             ? 0U : 
                                            (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                             .__PVT__lst
                                              ? 1U : 1U))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt.__PVT__lst 
        = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_ce)
                  ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                 .__PVT__lst : (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                .__PVT__lst ? 0U : 
                                (0x3eU == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                 .__PVT__val))));
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
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_6 
        = (IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                    >> 1U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                                 | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4)))));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_ready_int 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state4_pp0_stage0_iter3) 
               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_1) 
                  | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_2) 
                     | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT____VdfgRegularize_hd6f617ed_1_4))))) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm));
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
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__in0_V_TREADY_int_regslice 
        = ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_ready_int));
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
