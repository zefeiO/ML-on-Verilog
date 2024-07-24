// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMVAU_hls_0__Syms.h"


void VMVAU_hls_0___024root__trace_chg_0_sub_3(VMVAU_hls_0___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root__trace_chg_0_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 5125);
    VlWide<40>/*1279:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<40>/*1279:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgCData(oldp+0,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_reg_32761), 
                                           ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                             ? ((1U 
                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                 ? 0xfU
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                 ? 0x25U
                                                 : 1U)))),2);
        bufp->chgCData(oldp+1,((3U & (VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_reg_32761), 
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
                                      + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_reg_32761), 
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
                                                       : 1U)))))),2);
        bufp->chgCData(oldp+2,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_reg_32761), 
                                           ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                             ? ((1U 
                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                 ? 3U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                 ? 0x1bU
                                                 : 1U)))),2);
        bufp->chgSData(oldp+3,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                 ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                     ? 0x1f1U : 0x1f7U)
                                 : 1U)),9);
        bufp->chgBit(oldp+4,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                        ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                          ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? 0x1f1U
                                              : 0x1f7U)
                                          : 1U))));
        bufp->chgBit(oldp+5,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x1f1U
                                               : 0x1f7U)
                                           : 1U))));
        bufp->chgSData(oldp+6,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                 ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                     ? 0x1f9U : 0x1fdU)
                                 : 1U)),9);
        bufp->chgBit(oldp+7,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                        ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                          ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? 0x1f9U
                                              : 0x1fdU)
                                          : 1U))));
        bufp->chgBit(oldp+8,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x1f9U
                                               : 0x1fdU)
                                           : 1U))));
        bufp->chgSData(oldp+9,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                 ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                     ? 1U : 4U) : 1U)),9);
        bufp->chgBit(oldp+10,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 1U
                                               : 4U)
                                           : 1U))));
        bufp->chgBit(oldp+11,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 1U
                                                : 4U)
                                            : 1U))));
        bufp->chgCData(oldp+12,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x1f1U
                                                  : 0x1f7U)
                                              : 1U))),2);
        bufp->chgCData(oldp+13,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 1U
                                                  : 4U)
                                              : 1U))),2);
        bufp->chgCData(oldp+14,((3U & (VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                                   ((2U 
                                                     & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                      ? 0x1f1U
                                                      : 0x1f7U)
                                                     : 1U)) 
                                       + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                                     ((2U 
                                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 1U
                                                        : 4U)
                                                       : 1U))))),2);
        bufp->chgCData(oldp+15,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x1f9U
                                                  : 0x1fdU)
                                              : 1U))),2);
        bufp->chgSData(oldp+16,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x13U : 0x22U)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0xdU : 1U))),9);
        bufp->chgBit(oldp+17,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x13U
                                               : 0x22U)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0xdU
                                               : 1U)))));
        bufp->chgBit(oldp+18,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x13U
                                                : 0x22U)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0xdU
                                                : 1U)))));
        bufp->chgSData(oldp+19,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x18U : 0x2aU)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x15U : 1U))),9);
        bufp->chgBit(oldp+20,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x18U
                                               : 0x2aU)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x15U
                                               : 1U)))));
        bufp->chgBit(oldp+21,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x18U
                                                : 0x2aU)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x15U
                                                : 1U)))));
        bufp->chgSData(oldp+22,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x1dU : 0x32U)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x1cU : 1U))),9);
        bufp->chgBit(oldp+23,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x1dU
                                               : 0x32U)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x1cU
                                               : 1U)))));
        bufp->chgBit(oldp+24,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x1dU
                                                : 0x32U)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x1cU
                                                : 1U)))));
        bufp->chgCData(oldp+25,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x13U
                                                  : 0x22U)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0xdU
                                                  : 1U)))),2);
        bufp->chgCData(oldp+26,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x1dU
                                                  : 0x32U)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x1cU
                                                  : 1U)))),2);
        bufp->chgCData(oldp+27,((3U & (VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
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
                                       + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
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
                                                        : 1U)))))),2);
        bufp->chgCData(oldp+28,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x18U
                                                  : 0x2aU)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x15U
                                                  : 1U)))),2);
        bufp->chgSData(oldp+29,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 8U : 0x14U)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x11U : 7U))),9);
        bufp->chgBit(oldp+30,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 8U
                                               : 0x14U)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x11U
                                               : 7U)))));
        bufp->chgBit(oldp+31,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 8U
                                                : 0x14U)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x11U
                                                : 7U)))));
        bufp->chgSData(oldp+32,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0xeU : 0x1eU)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x1bU : 0xeU))),9);
        bufp->chgBit(oldp+33,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0xeU
                                               : 0x1eU)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x1bU
                                               : 0xeU)))));
        bufp->chgBit(oldp+34,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0xeU
                                                : 0x1eU)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x1bU
                                                : 0xeU)))));
        bufp->chgSData(oldp+35,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x13U : 0x27U)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x25U : 0x15U))),9);
        bufp->chgBit(oldp+36,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x13U
                                               : 0x27U)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x25U
                                               : 0x15U)))));
        bufp->chgBit(oldp+37,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x13U
                                                : 0x27U)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x25U
                                                : 0x15U)))));
        bufp->chgCData(oldp+38,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 8U
                                                  : 0x14U)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x11U
                                                  : 7U)))),2);
        bufp->chgCData(oldp+39,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x13U
                                                  : 0x27U)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x25U
                                                  : 0x15U)))),2);
        bufp->chgCData(oldp+40,((3U & (VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
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
                                                        : 0x15U)))))),2);
        bufp->chgCData(oldp+41,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0xeU
                                                  : 0x1eU)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x1bU
                                                  : 0xeU)))),2);
        bufp->chgSData(oldp+42,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? 1U : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? 8U : 1U))),9);
        bufp->chgBit(oldp+43,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? 1U : (
                                                   (1U 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                    ? 8U
                                                    : 1U)))));
        bufp->chgBit(oldp+44,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? 1U : 
                                           ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                             ? 8U : 1U)))));
        bufp->chgSData(oldp+45,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 8U : 1U) : 
                                 ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xcU : 1U))),9);
        bufp->chgBit(oldp+46,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 8U
                                               : 1U)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0xcU
                                               : 1U)))));
        bufp->chgBit(oldp+47,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 8U
                                                : 1U)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0xcU
                                                : 1U)))));
        bufp->chgSData(oldp+48,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0xfU : 1U) : 
                                 ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x11U : 1U))),9);
        bufp->chgBit(oldp+49,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0xfU
                                               : 1U)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x11U
                                               : 1U)))));
        bufp->chgBit(oldp+50,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0xfU
                                                : 1U)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x11U
                                                : 1U)))));
        bufp->chgCData(oldp+51,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? 1U : 
                                             ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 8U
                                               : 1U)))),2);
        bufp->chgCData(oldp+52,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0xfU
                                                  : 1U)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x11U
                                                  : 1U)))),2);
        bufp->chgCData(oldp+53,((3U & (VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                                   ((2U 
                                                     & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                      ? 8U
                                                      : 1U))) 
                                       + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
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
                                                        : 1U)))))),2);
        bufp->chgCData(oldp+54,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 8U
                                                  : 1U)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0xcU
                                                  : 1U)))),2);
        bufp->chgSData(oldp+55,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 1U : 0x12U)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 1U : 0U))),9);
        bufp->chgBit(oldp+56,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 1U
                                               : 0x12U)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 1U
                                               : 0U)))));
        bufp->chgBit(oldp+57,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 1U
                                                : 0x12U)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 1U
                                                : 0U)))));
        bufp->chgSData(oldp+58,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 1U : 0x17U)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 1U : 4U))),9);
        bufp->chgBit(oldp+59,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 1U
                                               : 0x17U)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 1U
                                               : 4U)))));
        bufp->chgBit(oldp+60,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 1U
                                                : 0x17U)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 1U
                                                : 4U)))));
        bufp->chgSData(oldp+61,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 1U : 0x1cU)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 1U : 9U))),9);
        bufp->chgBit(oldp+62,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 1U
                                               : 0x1cU)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 1U
                                               : 9U)))));
        bufp->chgBit(oldp+63,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 1U
                                                : 0x1cU)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 1U
                                                : 9U)))));
        bufp->chgCData(oldp+64,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 1U
                                                  : 0x12U)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 1U
                                                  : 0U)))),2);
        bufp->chgCData(oldp+65,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 1U
                                                  : 0x1cU)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 1U
                                                  : 9U)))),2);
        bufp->chgCData(oldp+66,((3U & (VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
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
                                       + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
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
                                                        : 9U)))))),2);
        bufp->chgCData(oldp+67,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 1U
                                                  : 0x17U)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 1U
                                                  : 4U)))),2);
        bufp->chgSData(oldp+68,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x1feU : 0x24U)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0U : 1U))),9);
        bufp->chgBit(oldp+69,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x1feU
                                               : 0x24U)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0U
                                               : 1U)))));
        bufp->chgBit(oldp+70,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x1feU
                                                : 0x24U)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0U
                                                : 1U)))));
        bufp->chgSData(oldp+71,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 5U : 0x2dU)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 7U : 1U))),9);
        bufp->chgBit(oldp+72,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 5U
                                               : 0x2dU)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 7U
                                               : 1U)))));
        bufp->chgBit(oldp+73,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 5U
                                                : 0x2dU)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 7U
                                                : 1U)))));
        bufp->chgSData(oldp+74,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0xdU : 0x37U)
                                  : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0xeU : 1U))),9);
        bufp->chgBit(oldp+75,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0xdU
                                               : 0x37U)
                                           : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0xeU
                                               : 1U)))));
        bufp->chgBit(oldp+76,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0xdU
                                                : 0x37U)
                                            : ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0xeU
                                                : 1U)))));
        bufp->chgCData(oldp+77,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0x1feU
                                                  : 0x24U)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0U
                                                  : 1U)))),2);
        bufp->chgCData(oldp+78,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0xdU
                                                  : 0x37U)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 0xeU
                                                  : 1U)))),2);
        bufp->chgCData(oldp+79,((3U & (VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
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
                                                        : 1U)))))),2);
        bufp->chgCData(oldp+80,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 5U
                                                  : 0x2dU)
                                              : ((1U 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                  ? 7U
                                                  : 1U)))),2);
        bufp->chgSData(oldp+81,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? 1U : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? 0xaU : 0x12U))),9);
        bufp->chgBit(oldp+82,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? 1U : (
                                                   (1U 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                    ? 0xaU
                                                    : 0x12U)))));
        bufp->chgBit(oldp+83,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? 1U : 
                                           ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                             ? 0xaU
                                             : 0x12U)))));
        bufp->chgSData(oldp+84,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? 1U : 0x1aU)),9);
        bufp->chgBit(oldp+85,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? 1U : 0x1aU))));
        bufp->chgBit(oldp+86,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? 1U : 0x1aU))));
        bufp->chgSData(oldp+87,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? 1U : ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? 0x29U : 0x21U))),9);
        bufp->chgBit(oldp+88,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? 1U : (
                                                   (1U 
                                                    & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                    ? 0x29U
                                                    : 0x21U)))));
        bufp->chgBit(oldp+89,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? 1U : 
                                           ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                             ? 0x29U
                                             : 0x21U)))));
        bufp->chgCData(oldp+90,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? 1U : 
                                             ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0xaU
                                               : 0x12U)))),2);
        bufp->chgCData(oldp+91,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? 1U : 
                                             ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x29U
                                               : 0x21U)))),2);
        bufp->chgCData(oldp+92,((3U & (VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
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
                                                        : 0x21U)))))),2);
        bufp->chgCData(oldp+93,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
                                            ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                              ? 1U : 0x1aU))),2);
        bufp->chgSData(oldp+94,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 0x1fbU : 0xcU)
                                  : 1U)),9);
        bufp->chgBit(oldp+95,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 0x1fbU
                                               : 0xcU)
                                           : 1U))));
        bufp->chgBit(oldp+96,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x1fbU
                                                : 0xcU)
                                            : 1U))));
        bufp->chgSData(oldp+97,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                  ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                      ? 3U : 0x12U)
                                  : 1U)),9);
        bufp->chgBit(oldp+98,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                         ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                           ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? 3U
                                               : 0x12U)
                                           : 1U))));
        bufp->chgBit(oldp+99,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 3U
                                                : 0x12U)
                                            : 1U))));
        bufp->chgSData(oldp+100,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                       ? 0xbU : 0x18U)
                                   : 1U)),9);
        bufp->chgBit(oldp+101,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0xbU
                                                : 0x18U)
                                            : 1U))));
        bufp->chgBit(oldp+102,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                           ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                             ? ((1U 
                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                 ? 0xbU
                                                 : 0x18U)
                                             : 1U))));
        bufp->chgCData(oldp+103,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                             ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? ((1U 
                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                   ? 0x1fbU
                                                   : 0xcU)
                                               : 1U))),2);
        bufp->chgCData(oldp+104,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                             ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? ((1U 
                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                   ? 0xbU
                                                   : 0x18U)
                                               : 1U))),2);
        bufp->chgCData(oldp+105,((3U & (VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
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
                                                        : 1U))))),2);
        bufp->chgCData(oldp+106,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
                                             ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? ((1U 
                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                   ? 3U
                                                   : 0x12U)
                                               : 1U))),2);
        bufp->chgSData(oldp+107,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                       ? 8U : 1U) : 1U)),9);
        bufp->chgBit(oldp+108,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 8U
                                                : 1U)
                                            : 1U))));
        bufp->chgBit(oldp+109,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                           ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                             ? ((1U 
                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                 ? 8U
                                                 : 1U)
                                             : 1U))));
        bufp->chgSData(oldp+110,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                       ? 0xfU : 1U)
                                   : 1U)),9);
        bufp->chgBit(oldp+111,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0xfU
                                                : 1U)
                                            : 1U))));
        bufp->chgBit(oldp+112,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                           ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                             ? ((1U 
                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                 ? 0xfU
                                                 : 1U)
                                             : 1U))));
        bufp->chgSData(oldp+113,(((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                       ? 0x16U : 1U)
                                   : 1U)),9);
        bufp->chgBit(oldp+114,(VL_LTS_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                          ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                            ? ((1U 
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                ? 0x16U
                                                : 1U)
                                            : 1U))));
        bufp->chgBit(oldp+115,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                           ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                             ? ((1U 
                                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                 ? 0x16U
                                                 : 1U)
                                             : 1U))));
        bufp->chgCData(oldp+116,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                             ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? ((1U 
                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                   ? 8U
                                                   : 1U)
                                               : 1U))),2);
        bufp->chgCData(oldp+117,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                             ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? ((1U 
                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                   ? 0x16U
                                                   : 1U)
                                               : 1U))),2);
        bufp->chgCData(oldp+118,((3U & (VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                                    ((2U 
                                                      & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                       ? 8U
                                                       : 1U)
                                                      : 1U)) 
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                                      ((2U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                         ? 0x16U
                                                         : 1U)
                                                        : 1U))))),2);
        bufp->chgCData(oldp+119,(VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                             ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                               ? ((1U 
                                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                   ? 0xfU
                                                   : 1U)
                                               : 1U))),2);
        bufp->chgCData(oldp+120,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                                     ((2U 
                                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 8U
                                                        : 1U)
                                                       : 1U)) 
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                                       ((2U 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                          ? 0x16U
                                                          : 1U)
                                                         : 1U))) 
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_47_reg_32824), 
                                                      ((2U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                         ? 0xfU
                                                         : 1U)
                                                        : 1U))))),2);
        bufp->chgCData(oldp+121,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_46_reg_32817), 
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
                                                        : 1U))))),2);
        bufp->chgCData(oldp+122,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_45_reg_32810), 
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
                                                        : 0x1aU))))),2);
        bufp->chgCData(oldp+123,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_44_reg_32803), 
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
                                                         : 1U)))))),2);
        bufp->chgCData(oldp+124,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
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
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
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
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_43_reg_32796), 
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
                                                         : 4U)))))),2);
        bufp->chgCData(oldp+125,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
                                                     ((2U 
                                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                       ? 1U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 8U
                                                        : 1U))) 
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
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
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_42_reg_32789), 
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
                                                         : 1U)))))),2);
        bufp->chgCData(oldp+126,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_41_reg_32782), 
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
                                                         : 0xeU)))))),2);
        bufp->chgCData(oldp+127,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
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
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_40_reg_32775), 
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
                                                         : 1U)))))),2);
        bufp->chgCData(oldp+128,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                                     ((2U 
                                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 0x1f1U
                                                        : 0x1f7U)
                                                       : 1U)) 
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                                       ((2U 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                          ? 1U
                                                          : 4U)
                                                         : 1U))) 
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_39_reg_32768), 
                                                      ((2U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                         ? 0x1f9U
                                                         : 0x1fdU)
                                                        : 1U))))),2);
        bufp->chgCData(oldp+129,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_reg_32761), 
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
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_reg_32761), 
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
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_38_reg_32761), 
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
                                                         : 1U)))))),2);
        bufp->chgCData(oldp+130,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_37_reg_32754), 
                                                     ((2U 
                                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 0xcU
                                                        : 0xeU)
                                                       : 1U)) 
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_37_reg_32754), 
                                                       ((2U 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                          ? 0x19U
                                                          : 0x21U)
                                                         : 1U))) 
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_37_reg_32754), 
                                                      ((2U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                         ? 0x12U
                                                         : 0x18U)
                                                        : 1U))))),2);
        bufp->chgCData(oldp+131,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_36_reg_32747), 
                                                     ((2U 
                                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                       ? 1U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 0xdU
                                                        : 7U))) 
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_36_reg_32747), 
                                                       ((2U 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                         ? 1U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                          ? 0x19U
                                                          : 0x10U)))) 
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_36_reg_32747), 
                                                      ((2U 
                                                        & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                        ? 1U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                                         ? 0x13U
                                                         : 0xcU)))))),2);
        bufp->chgCData(oldp+132,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_35_reg_32740), 
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
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_35_reg_32740), 
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
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_35_reg_32740), 
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
                                                         : 0xeU)))))),2);
        bufp->chgCData(oldp+133,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_34_reg_32733), 
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
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_34_reg_32733), 
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
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_34_reg_32733), 
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
                                                         : 0x20U)))))),2);
        bufp->chgCData(oldp+134,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_33_reg_32726), 
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
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_33_reg_32726), 
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
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_33_reg_32726), 
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
                                                         : 0xeU)))))),2);
        bufp->chgCData(oldp+135,((3U & ((VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_32_reg_32719), 
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
                                         + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_32_reg_32719), 
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
                                        + VL_GTES_III(9, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__accu_V_32_reg_32719), 
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
                                                         : 0x14U)))))),2);
        bufp->chgBit(oldp+136,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_loop_exit_ready_pp0_iter1_reg));
        bufp->chgBit(oldp+137,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_loop_exit_ready_pp0_iter2_reg));
        bufp->chgSData(oldp+138,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 0x2aU)),9);
        bufp->chgSData(oldp+139,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 0x24U)),9);
        bufp->chgSData(oldp+140,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1feU : 8U)),9);
        bufp->chgSData(oldp+141,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1ebU : 1U)),9);
        bufp->chgSData(oldp+142,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 3U : 0xeU)),9);
        bufp->chgSData(oldp+143,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1f0U : 1U)),9);
        bufp->chgSData(oldp+144,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 8U : 0x14U)),9);
        bufp->chgSData(oldp+145,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1f4U : 1U)),9);
        bufp->chgSData(oldp+146,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xdU : 7U)),9);
        bufp->chgSData(oldp+147,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x13U : 0xcU)),9);
        bufp->chgSData(oldp+148,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x19U : 0x10U)),9);
        bufp->chgSData(oldp+149,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xcU : 0xeU)),9);
        bufp->chgSData(oldp+150,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x12U : 0x18U)),9);
        bufp->chgSData(oldp+151,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x19U : 0x21U)),9);
        bufp->chgSData(oldp+152,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 0xaU)),9);
        bufp->chgSData(oldp+153,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 5U : 0x3bU)),9);
        bufp->chgSData(oldp+154,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x11U : 1U)),9);
        bufp->chgSData(oldp+155,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1f7U : 1U)),9);
        bufp->chgSData(oldp+156,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1bU : 1U)),9);
        bufp->chgSData(oldp+157,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 3U : 1U)),9);
        bufp->chgSData(oldp+158,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x25U : 1U)),9);
        bufp->chgSData(oldp+159,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xfU : 1U)),9);
        bufp->chgSData(oldp+160,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1f1U : 0x1f7U)),9);
        bufp->chgSData(oldp+161,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1f9U : 0x1fdU)),9);
        bufp->chgSData(oldp+162,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 4U)),9);
        bufp->chgSData(oldp+163,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xdU : 1U)),9);
        bufp->chgSData(oldp+164,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x13U : 0x22U)),9);
        bufp->chgSData(oldp+165,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x15U : 1U)),9);
        bufp->chgSData(oldp+166,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x18U : 0x2aU)),9);
        bufp->chgSData(oldp+167,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1cU : 1U)),9);
        bufp->chgSData(oldp+168,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1dU : 0x32U)),9);
        bufp->chgSData(oldp+169,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x11U : 7U)),9);
        bufp->chgSData(oldp+170,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 0x14U)),9);
        bufp->chgSData(oldp+171,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xdU : 0x8dU)),9);
        bufp->chgSData(oldp+172,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1bU : 0xeU)),9);
        bufp->chgSData(oldp+173,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xeU : 0x1eU)),9);
        bufp->chgSData(oldp+174,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x25U : 0x15U)),9);
        bufp->chgSData(oldp+175,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x13U : 0x27U)),9);
        bufp->chgSData(oldp+176,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 8U : 1U)),9);
        bufp->chgSData(oldp+177,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xcU : 1U)),9);
        bufp->chgSData(oldp+178,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 0U)),9);
        bufp->chgSData(oldp+179,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 0x12U)),9);
        bufp->chgSData(oldp+180,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 0x17U)),9);
        bufp->chgSData(oldp+181,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 9U)),9);
        bufp->chgSData(oldp+182,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 0x1cU)),9);
        bufp->chgSData(oldp+183,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0U : 1U)),9);
        bufp->chgSData(oldp+184,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1feU : 0x24U)),9);
        bufp->chgSData(oldp+185,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 7U : 1U)),9);
        bufp->chgSData(oldp+186,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 5U : 0x2dU)),9);
        bufp->chgSData(oldp+187,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 0x1dU)),9);
        bufp->chgSData(oldp+188,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x15U : 0x8dU)),9);
        bufp->chgSData(oldp+189,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xeU : 1U)),9);
        bufp->chgSData(oldp+190,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xdU : 0x37U)),9);
        bufp->chgSData(oldp+191,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xaU : 0x12U)),9);
        bufp->chgSData(oldp+192,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x29U : 0x21U)),9);
        bufp->chgSData(oldp+193,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1fbU : 0xcU)),9);
        bufp->chgSData(oldp+194,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 3U : 0x12U)),9);
        bufp->chgSData(oldp+195,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xbU : 0x18U)),9);
        bufp->chgSData(oldp+196,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x16U : 1U)),9);
        bufp->chgSData(oldp+197,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0xdU : 8U)),9);
        bufp->chgSData(oldp+198,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x26U : 4U)),9);
        bufp->chgSData(oldp+199,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x1eU : 0xeU)),9);
        bufp->chgSData(oldp+200,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x2eU : 0xbU)),9);
        bufp->chgSData(oldp+201,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x2fU : 0x14U)),9);
        bufp->chgSData(oldp+202,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 0x37U : 0x11U)),9);
        bufp->chgSData(oldp+203,(((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__trunc_ln218_reg_32667_pp0_iter1_reg))
                                   ? 1U : 0x20U)),9);
        bufp->chgCData(oldp+204,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state),2);
        bufp->chgQData(oldp+205,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A),40);
        bufp->chgQData(oldp+207,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B),40);
        bufp->chgBit(oldp+209,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+210,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+211,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr)) 
                                & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+212,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+213,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))));
        bufp->chgCData(oldp+214,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state),2);
        bufp->chgIData(oldp+215,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_A),32);
        bufp->chgIData(oldp+216,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_B),32);
        bufp->chgBit(oldp+217,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+218,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+219,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr)) 
                                & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+220,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+221,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))));
        bufp->chgCData(oldp+222,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state),2);
        bufp->chgWData(oldp+223,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A),1280);
        bufp->chgWData(oldp+263,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B),1280);
        bufp->chgBit(oldp+303,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+304,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+305,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr)) 
                                & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+306,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+307,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state))));
        bufp->chgBit(oldp+308,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__awready));
        bufp->chgBit(oldp+309,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__wready));
        bufp->chgBit(oldp+310,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__arready));
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x27U)) {
            __Vtemp_1[__Vilp1] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__ip_wdata_wide[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        bufp->chgWData(oldp+311,(__Vtemp_1),1280);
        bufp->chgWData(oldp+351,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__ip_wdata_wide),2048);
        bufp->chgBit(oldp+415,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Wr1));
        bufp->chgBit(oldp+416,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs1));
        bufp->chgWData(oldp+417,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data1),1280);
        bufp->chgBit(oldp+457,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure));
        bufp->chgBit(oldp+458,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state) 
                                      >> 1U))));
        bufp->chgBit(oldp+459,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs2));
        bufp->chgCData(oldp+460,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__result_V_2_fu_2883_p2),8);
        bufp->chgBit(oldp+461,((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__i_b_reg) 
                                 & (3U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                | (1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)))));
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd) {
            __Vtemp_2[0U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[0U];
            __Vtemp_2[1U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[1U];
            __Vtemp_2[2U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[2U];
            __Vtemp_2[3U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[3U];
        } else {
            __Vtemp_2[0U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[0U];
            __Vtemp_2[1U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[1U];
            __Vtemp_2[2U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[2U];
            __Vtemp_2[3U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[3U];
        }
        bufp->chgWData(oldp+462,(__Vtemp_2),128);
        bufp->chgBit(oldp+466,((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))));
        bufp->chgWData(oldp+467,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice),128);
        bufp->chgBit(oldp+471,((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state))));
        bufp->chgBit(oldp+472,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                      >> 1U))));
        bufp->chgBit(oldp+473,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207));
        bufp->chgBit(oldp+474,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg));
        bufp->chgCData(oldp+475,((0x3fU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3202)),6);
        bufp->chgCData(oldp+476,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_q0),6);
        bufp->chgCData(oldp+477,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_q0),7);
        bufp->chgCData(oldp+478,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_q0),7);
        bufp->chgIData(oldp+479,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3202),32);
        bufp->chgBit(oldp+480,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter1_reg));
        bufp->chgBit(oldp+481,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter2_reg));
        bufp->chgBit(oldp+482,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter3_reg));
        bufp->chgBit(oldp+483,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter4_reg));
        bufp->chgBit(oldp+484,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter5_reg));
        bufp->chgCData(oldp+485,((3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U])),2);
        bufp->chgCData(oldp+486,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214),2);
        bufp->chgCData(oldp+487,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214_pp0_iter1_reg),2);
        bufp->chgCData(oldp+488,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214_pp0_iter2_reg),2);
        bufp->chgCData(oldp+489,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219),2);
        bufp->chgCData(oldp+490,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219_pp0_iter1_reg),2);
        bufp->chgCData(oldp+491,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219_pp0_iter2_reg),2);
        bufp->chgCData(oldp+492,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_65_reg_3224),2);
        bufp->chgCData(oldp+493,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229),2);
        bufp->chgCData(oldp+494,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229_pp0_iter1_reg),2);
        bufp->chgCData(oldp+495,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229_pp0_iter2_reg),2);
        bufp->chgCData(oldp+496,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_67_reg_3234),2);
        bufp->chgCData(oldp+497,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239),2);
        bufp->chgCData(oldp+498,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239_pp0_iter1_reg),2);
        bufp->chgCData(oldp+499,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239_pp0_iter2_reg),2);
        bufp->chgCData(oldp+500,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_69_reg_3244),2);
        bufp->chgCData(oldp+501,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249),2);
        bufp->chgCData(oldp+502,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249_pp0_iter1_reg),2);
        bufp->chgCData(oldp+503,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249_pp0_iter2_reg),2);
        bufp->chgCData(oldp+504,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_71_reg_3254),2);
        bufp->chgCData(oldp+505,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259),2);
        bufp->chgCData(oldp+506,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259_pp0_iter1_reg),2);
        bufp->chgCData(oldp+507,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259_pp0_iter2_reg),2);
        bufp->chgCData(oldp+508,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_73_reg_3264),2);
        bufp->chgCData(oldp+509,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269),2);
        bufp->chgCData(oldp+510,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269_pp0_iter1_reg),2);
        bufp->chgCData(oldp+511,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269_pp0_iter2_reg),2);
        bufp->chgCData(oldp+512,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_75_reg_3274),2);
        bufp->chgCData(oldp+513,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279),2);
        bufp->chgCData(oldp+514,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279_pp0_iter1_reg),2);
        bufp->chgCData(oldp+515,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279_pp0_iter2_reg),2);
        bufp->chgCData(oldp+516,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_77_reg_3284),2);
        bufp->chgCData(oldp+517,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289),2);
        bufp->chgCData(oldp+518,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289_pp0_iter1_reg),2);
        bufp->chgCData(oldp+519,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289_pp0_iter2_reg),2);
        bufp->chgCData(oldp+520,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_79_reg_3294),2);
        bufp->chgCData(oldp+521,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299),2);
        bufp->chgCData(oldp+522,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299_pp0_iter1_reg),2);
        bufp->chgCData(oldp+523,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299_pp0_iter2_reg),2);
        bufp->chgCData(oldp+524,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_81_reg_3304),2);
        bufp->chgCData(oldp+525,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309),2);
        bufp->chgCData(oldp+526,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309_pp0_iter1_reg),2);
        bufp->chgCData(oldp+527,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309_pp0_iter2_reg),2);
        bufp->chgCData(oldp+528,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_83_reg_3314),2);
        bufp->chgCData(oldp+529,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319),2);
        bufp->chgCData(oldp+530,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319_pp0_iter1_reg),2);
        bufp->chgCData(oldp+531,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319_pp0_iter2_reg),2);
        bufp->chgCData(oldp+532,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_85_reg_3324),2);
        bufp->chgCData(oldp+533,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3329),2);
        bufp->chgCData(oldp+534,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3329_pp0_iter1_reg),2);
        bufp->chgCData(oldp+535,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3329_pp0_iter2_reg),2);
        bufp->chgCData(oldp+536,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_87_reg_3334),2);
        bufp->chgCData(oldp+537,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3339),2);
        bufp->chgCData(oldp+538,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3339_pp0_iter1_reg),2);
        bufp->chgCData(oldp+539,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3339_pp0_iter2_reg),2);
        bufp->chgCData(oldp+540,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_89_reg_3344),2);
        bufp->chgCData(oldp+541,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3349),2);
        bufp->chgCData(oldp+542,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3349_pp0_iter1_reg),2);
        bufp->chgCData(oldp+543,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3349_pp0_iter2_reg),2);
        bufp->chgCData(oldp+544,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_91_reg_3354),2);
        bufp->chgCData(oldp+545,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3359),2);
        bufp->chgCData(oldp+546,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3359_pp0_iter1_reg),2);
        bufp->chgCData(oldp+547,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3359_pp0_iter2_reg),2);
        bufp->chgCData(oldp+548,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_93_reg_3364),2);
        bufp->chgCData(oldp+549,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_94_reg_3369),2);
        bufp->chgCData(oldp+550,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3374),2);
        bufp->chgCData(oldp+551,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3374_pp0_iter1_reg),2);
        bufp->chgCData(oldp+552,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3374_pp0_iter2_reg),2);
        bufp->chgCData(oldp+553,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_96_reg_3379),2);
        bufp->chgCData(oldp+554,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3384),2);
        bufp->chgCData(oldp+555,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3384_pp0_iter1_reg),2);
        bufp->chgCData(oldp+556,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3384_pp0_iter2_reg),2);
        bufp->chgCData(oldp+557,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_98_reg_3389),2);
        bufp->chgCData(oldp+558,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3394),2);
        bufp->chgCData(oldp+559,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3394_pp0_iter1_reg),2);
        bufp->chgCData(oldp+560,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3394_pp0_iter2_reg),2);
        bufp->chgCData(oldp+561,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_100_reg_3399),2);
        bufp->chgCData(oldp+562,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3404),2);
        bufp->chgCData(oldp+563,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3404_pp0_iter1_reg),2);
        bufp->chgCData(oldp+564,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3404_pp0_iter2_reg),2);
        bufp->chgCData(oldp+565,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_102_reg_3409),2);
        bufp->chgCData(oldp+566,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3414),2);
        bufp->chgCData(oldp+567,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3414_pp0_iter1_reg),2);
        bufp->chgCData(oldp+568,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3414_pp0_iter2_reg),2);
        bufp->chgCData(oldp+569,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_104_reg_3419),2);
        bufp->chgCData(oldp+570,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3424),2);
        bufp->chgCData(oldp+571,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3424_pp0_iter1_reg),2);
        bufp->chgCData(oldp+572,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3424_pp0_iter2_reg),2);
        bufp->chgCData(oldp+573,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_106_reg_3429),2);
        bufp->chgCData(oldp+574,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3434),2);
        bufp->chgCData(oldp+575,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3434_pp0_iter1_reg),2);
        bufp->chgCData(oldp+576,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3434_pp0_iter2_reg),2);
        bufp->chgCData(oldp+577,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_108_reg_3439),2);
        bufp->chgCData(oldp+578,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3444),2);
        bufp->chgCData(oldp+579,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3444_pp0_iter1_reg),2);
        bufp->chgCData(oldp+580,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3444_pp0_iter2_reg),2);
        bufp->chgCData(oldp+581,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_110_reg_3449),2);
        bufp->chgCData(oldp+582,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3454),2);
        bufp->chgCData(oldp+583,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3454_pp0_iter1_reg),2);
        bufp->chgCData(oldp+584,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3454_pp0_iter2_reg),2);
        bufp->chgCData(oldp+585,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_112_reg_3459),2);
        bufp->chgCData(oldp+586,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3464),2);
        bufp->chgCData(oldp+587,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3464_pp0_iter1_reg),2);
        bufp->chgCData(oldp+588,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3464_pp0_iter2_reg),2);
        bufp->chgCData(oldp+589,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_114_reg_3469),2);
        bufp->chgCData(oldp+590,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3474),2);
        bufp->chgCData(oldp+591,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3474_pp0_iter1_reg),2);
        bufp->chgCData(oldp+592,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3474_pp0_iter2_reg),2);
        bufp->chgCData(oldp+593,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_116_reg_3479),2);
        bufp->chgCData(oldp+594,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3484),2);
        bufp->chgCData(oldp+595,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3484_pp0_iter1_reg),2);
        bufp->chgCData(oldp+596,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3484_pp0_iter2_reg),2);
        bufp->chgCData(oldp+597,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_118_reg_3489),2);
        bufp->chgCData(oldp+598,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3494),2);
        bufp->chgCData(oldp+599,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3494_pp0_iter1_reg),2);
        bufp->chgCData(oldp+600,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3494_pp0_iter2_reg),2);
        bufp->chgCData(oldp+601,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_120_reg_3499),2);
        bufp->chgCData(oldp+602,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3504),2);
        bufp->chgCData(oldp+603,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3504_pp0_iter1_reg),2);
        bufp->chgCData(oldp+604,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3504_pp0_iter2_reg),2);
        bufp->chgCData(oldp+605,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_122_reg_3509),2);
        bufp->chgCData(oldp+606,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3514),2);
        bufp->chgCData(oldp+607,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3514_pp0_iter1_reg),2);
        bufp->chgCData(oldp+608,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3514_pp0_iter2_reg),2);
        bufp->chgCData(oldp+609,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3519),2);
        bufp->chgCData(oldp+610,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3519_pp0_iter1_reg),2);
        bufp->chgCData(oldp+611,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3519_pp0_iter2_reg),2);
        bufp->chgCData(oldp+612,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_125_reg_3524),2);
        bufp->chgCData(oldp+613,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_126_reg_3529),2);
        bufp->chgCData(oldp+614,((3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U])),2);
        bufp->chgCData(oldp+615,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3534),2);
        bufp->chgCData(oldp+616,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3534_pp0_iter2_reg),2);
        bufp->chgCData(oldp+617,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3539),2);
        bufp->chgCData(oldp+618,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3539_pp0_iter2_reg),2);
        bufp->chgCData(oldp+619,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3554),2);
        bufp->chgCData(oldp+620,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3554_pp0_iter2_reg),2);
        bufp->chgCData(oldp+621,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3569),2);
        bufp->chgCData(oldp+622,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3569_pp0_iter2_reg),2);
        bufp->chgCData(oldp+623,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3584),2);
        bufp->chgCData(oldp+624,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3584_pp0_iter2_reg),2);
        bufp->chgCData(oldp+625,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3599),2);
        bufp->chgCData(oldp+626,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3599_pp0_iter2_reg),2);
        bufp->chgCData(oldp+627,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3614),2);
        bufp->chgCData(oldp+628,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3614_pp0_iter2_reg),2);
        bufp->chgCData(oldp+629,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3629),2);
        bufp->chgCData(oldp+630,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3629_pp0_iter2_reg),2);
        bufp->chgCData(oldp+631,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3644),2);
        bufp->chgCData(oldp+632,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3644_pp0_iter2_reg),2);
        bufp->chgCData(oldp+633,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3659),2);
        bufp->chgCData(oldp+634,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3659_pp0_iter2_reg),2);
        bufp->chgCData(oldp+635,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3674),2);
        bufp->chgCData(oldp+636,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3674_pp0_iter2_reg),2);
        bufp->chgCData(oldp+637,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3689),2);
        bufp->chgCData(oldp+638,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3689_pp0_iter2_reg),2);
        bufp->chgCData(oldp+639,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3704),2);
        bufp->chgCData(oldp+640,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3704_pp0_iter2_reg),2);
        bufp->chgCData(oldp+641,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3719),2);
        bufp->chgCData(oldp+642,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3719_pp0_iter2_reg),2);
        bufp->chgCData(oldp+643,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3734),2);
        bufp->chgCData(oldp+644,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3734_pp0_iter2_reg),2);
        bufp->chgCData(oldp+645,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3749),2);
        bufp->chgCData(oldp+646,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3749_pp0_iter2_reg),2);
        bufp->chgCData(oldp+647,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3774),2);
        bufp->chgCData(oldp+648,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3774_pp0_iter2_reg),2);
        bufp->chgCData(oldp+649,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3789),2);
        bufp->chgCData(oldp+650,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3789_pp0_iter2_reg),2);
        bufp->chgCData(oldp+651,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3804),2);
        bufp->chgCData(oldp+652,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3804_pp0_iter2_reg),2);
        bufp->chgCData(oldp+653,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3819),2);
        bufp->chgCData(oldp+654,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3819_pp0_iter2_reg),2);
        bufp->chgCData(oldp+655,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3834),2);
        bufp->chgCData(oldp+656,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3834_pp0_iter2_reg),2);
        bufp->chgCData(oldp+657,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3849),2);
        bufp->chgCData(oldp+658,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3849_pp0_iter2_reg),2);
        bufp->chgCData(oldp+659,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3864),2);
        bufp->chgCData(oldp+660,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3864_pp0_iter2_reg),2);
        bufp->chgCData(oldp+661,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3879),2);
        bufp->chgCData(oldp+662,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3879_pp0_iter2_reg),2);
        bufp->chgCData(oldp+663,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3894),2);
        bufp->chgCData(oldp+664,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3894_pp0_iter2_reg),2);
        bufp->chgCData(oldp+665,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3909),2);
        bufp->chgCData(oldp+666,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3909_pp0_iter2_reg),2);
        bufp->chgCData(oldp+667,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3924),2);
        bufp->chgCData(oldp+668,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3924_pp0_iter2_reg),2);
        bufp->chgCData(oldp+669,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3939),2);
        bufp->chgCData(oldp+670,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3939_pp0_iter2_reg),2);
        bufp->chgCData(oldp+671,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3954),2);
        bufp->chgCData(oldp+672,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3954_pp0_iter2_reg),2);
        bufp->chgCData(oldp+673,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3969),2);
        bufp->chgCData(oldp+674,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3969_pp0_iter2_reg),2);
        bufp->chgCData(oldp+675,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3984),2);
        bufp->chgCData(oldp+676,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3984_pp0_iter2_reg),2);
        bufp->chgCData(oldp+677,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3989),2);
        bufp->chgCData(oldp+678,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3989_pp0_iter2_reg),2);
        bufp->chgCData(oldp+679,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_4029),6);
        bufp->chgCData(oldp+680,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_4029_pp0_iter3_reg),6);
        bufp->chgCData(oldp+681,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_4029_pp0_iter4_reg),6);
        bufp->chgCData(oldp+682,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_4029_pp0_iter5_reg),6);
        bufp->chgCData(oldp+683,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_4034),7);
        bufp->chgCData(oldp+684,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_4034_pp0_iter3_reg),7);
        bufp->chgCData(oldp+685,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_4034_pp0_iter4_reg),7);
        bufp->chgCData(oldp+686,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_4034_pp0_iter5_reg),7);
        bufp->chgCData(oldp+687,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4039),7);
        bufp->chgCData(oldp+688,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4039_pp0_iter3_reg),7);
        bufp->chgCData(oldp+689,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4039_pp0_iter4_reg),7);
        bufp->chgCData(oldp+690,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4039_pp0_iter5_reg),7);
        bufp->chgCData(oldp+691,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                           + VL_EXTENDS_II(7,6, 
                                                           (0x3fU 
                                                            & (VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                               + 
                                                               VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+692,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_6_reg_4204),7);
        bufp->chgCData(oldp+693,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                           + VL_EXTENDS_II(7,6, 
                                                           (0x3fU 
                                                            & (VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                               + 
                                                               VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+694,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_13_reg_4209),7);
        bufp->chgCData(oldp+695,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                           + VL_EXTENDS_II(7,6, 
                                                           (0x3fU 
                                                            & (VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                               + 
                                                               VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+696,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_21_reg_4214),7);
        bufp->chgCData(oldp+697,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                           + VL_EXTENDS_II(7,6, 
                                                           (0x3fU 
                                                            & (VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                               + 
                                                               VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+698,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_28_reg_4219),7);
        bufp->chgCData(oldp+699,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                           + VL_EXTENDS_II(7,6, 
                                                           (0x3fU 
                                                            & (VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                               + 
                                                               VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+700,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_37_reg_4224),7);
        bufp->chgCData(oldp+701,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                           + VL_EXTENDS_II(7,6, 
                                                           (0x3fU 
                                                            & (VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                               + 
                                                               VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+702,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_44_reg_4229),7);
        bufp->chgCData(oldp+703,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                           + VL_EXTENDS_II(7,6, 
                                                           (0x3fU 
                                                            & (VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                               + 
                                                               VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+704,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_52_reg_4234),7);
        bufp->chgCData(oldp+705,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                           + VL_EXTENDS_II(7,6, 
                                                           (0x3fU 
                                                            & (VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                               + 
                                                               VL_EXTENDS_II(6,5, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+706,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_59_reg_4239),7);
        bufp->chgCData(oldp+707,((0xffU & (VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_13_reg_4209)) 
                                           + VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_6_reg_4204))))),8);
        bufp->chgCData(oldp+708,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_14_reg_4244),8);
        bufp->chgCData(oldp+709,((0xffU & (VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_28_reg_4219)) 
                                           + VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_21_reg_4214))))),8);
        bufp->chgCData(oldp+710,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_29_reg_4249),8);
        bufp->chgCData(oldp+711,((0xffU & ((VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_59_reg_4239)) 
                                            + VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_52_reg_4234))) 
                                           + (VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_44_reg_4229)) 
                                              + VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_37_reg_4224)))))),8);
        bufp->chgCData(oldp+712,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_61_reg_4254),8);
        bufp->chgBit(oldp+713,(VL_LTS_III(8, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_62_fu_2818_p2), (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_4029_pp0_iter5_reg))));
        bufp->chgBit(oldp+714,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_reg_4259));
        bufp->chgBit(oldp+715,(VL_LTS_III(8, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_62_fu_2818_p2), (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_4034_pp0_iter5_reg))));
        bufp->chgBit(oldp+716,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_1_reg_4264));
        bufp->chgBit(oldp+717,(VL_LTS_III(8, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_62_fu_2818_p2), (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4039_pp0_iter5_reg))));
        bufp->chgBit(oldp+718,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_2_reg_4269));
        bufp->chgQData(oldp+719,((QData)((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3202))),64);
        bufp->chgIData(oldp+721,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_1_fu_304),32);
        bufp->chgCData(oldp+722,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__i_fu_308),7);
        bufp->chgWData(oldp+723,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312),128);
        bufp->chgCData(oldp+727,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+728,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 8U))),2);
        bufp->chgCData(oldp+729,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 0xcU))),2);
        bufp->chgCData(oldp+730,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 0x10U))),2);
        bufp->chgCData(oldp+731,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 0x14U))),2);
        bufp->chgCData(oldp+732,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+733,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+734,((3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U])),2);
        bufp->chgCData(oldp+735,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 4U))),2);
        bufp->chgCData(oldp+736,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 8U))),2);
        bufp->chgCData(oldp+737,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 0xcU))),2);
        bufp->chgCData(oldp+738,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 0x10U))),2);
        bufp->chgCData(oldp+739,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 0x14U))),2);
        bufp->chgCData(oldp+740,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+741,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+742,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+743,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 2U))),2);
        bufp->chgCData(oldp+744,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 6U))),2);
        bufp->chgCData(oldp+745,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 0xaU))),2);
        bufp->chgCData(oldp+746,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 0xeU))),2);
        bufp->chgCData(oldp+747,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 0x12U))),2);
        bufp->chgCData(oldp+748,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 0x16U))),2);
        bufp->chgCData(oldp+749,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 0x1aU))),2);
        bufp->chgCData(oldp+750,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+751,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 2U))),2);
        bufp->chgCData(oldp+752,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 6U))),2);
        bufp->chgCData(oldp+753,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 0xaU))),2);
        bufp->chgCData(oldp+754,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 0xeU))),2);
        bufp->chgCData(oldp+755,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 0x12U))),2);
        bufp->chgCData(oldp+756,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 0x16U))),2);
        bufp->chgCData(oldp+757,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+758,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+759,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3534_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+760,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3539_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+761,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3554_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+762,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3569_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+763,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3584_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+764,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3599_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+765,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3614_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+766,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3629_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+767,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3644_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+768,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3659_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+769,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3674_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+770,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3689_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+771,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3704_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3329_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+772,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3719_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3339_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+773,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3734_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3349_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+774,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3749_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3359_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+775,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3774_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3374_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+776,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3789_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3384_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+777,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3804_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3394_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+778,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3819_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3404_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+779,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3834_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3414_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+780,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3849_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3424_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+781,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3864_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3434_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+782,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3879_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3444_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+783,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3894_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3454_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+784,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3909_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3464_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+785,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3924_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3474_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+786,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3939_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3484_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+787,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3954_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3494_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+788,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3969_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3504_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+789,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3984_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3514_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+790,((0xfU & VL_MULS_III(4, 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3989_pp0_iter2_reg))), 
                                                     (0xfU 
                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3519_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+791,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+792,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+793,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+794,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+795,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+796,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+797,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+798,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+799,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+800,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+801,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+802,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+803,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+804,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+805,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+806,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+807,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+808,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+809,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+810,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+811,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+812,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+813,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+814,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+815,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+816,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+817,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+818,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+819,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+820,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+821,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+822,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+823,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+824,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+825,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+826,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+827,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+828,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+829,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+830,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+831,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+832,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+833,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+834,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+835,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+836,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+837,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+838,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+839,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+840,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+841,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+842,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+843,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+844,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+845,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+846,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+847,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+848,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+849,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+850,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+851,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+852,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+853,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+854,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+855,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+856,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+857,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+858,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+859,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+860,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+861,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+862,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+863,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+864,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+865,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+866,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+867,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+868,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+869,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+870,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+871,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+872,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+873,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+874,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+875,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+876,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+877,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+878,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+879,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+880,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+881,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+882,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+883,((0x3fU & VL_EXTENDS_II(6,5, 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+884,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                           + VL_EXTENDS_II(6,5, 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+885,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+886,((0x7fU & VL_EXTENDS_II(7,6, 
                                                        (0x3fU 
                                                         & (VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                            + 
                                                            VL_EXTENDS_II(6,5, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+887,((0xffU & VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_13_reg_4209)))),8);
        bufp->chgCData(oldp+888,((0xffU & VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_6_reg_4204)))),8);
        bufp->chgCData(oldp+889,((0xffU & VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_28_reg_4219)))),8);
        bufp->chgCData(oldp+890,((0xffU & VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_21_reg_4214)))),8);
        bufp->chgCData(oldp+891,((0xffU & VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_44_reg_4229)))),8);
        bufp->chgCData(oldp+892,((0xffU & VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_37_reg_4224)))),8);
        bufp->chgCData(oldp+893,((0xffU & VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_59_reg_4239)))),8);
        bufp->chgCData(oldp+894,((0xffU & VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_52_reg_4234)))),8);
        bufp->chgCData(oldp+895,((0xffU & (VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_59_reg_4239)) 
                                           + VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_52_reg_4234))))),8);
        bufp->chgCData(oldp+896,((0xffU & (VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_44_reg_4229)) 
                                           + VL_EXTENDS_II(8,7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_37_reg_4224))))),8);
        bufp->chgCData(oldp+897,((0xffU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_14_reg_4244) 
                                           + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_29_reg_4249)))),8);
        bufp->chgCData(oldp+898,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_62_fu_2818_p2),8);
        bufp->chgCData(oldp+899,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_4029_pp0_iter5_reg),8);
        bufp->chgCData(oldp+900,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_4034_pp0_iter5_reg),8);
        bufp->chgCData(oldp+901,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4039_pp0_iter5_reg),8);
        bufp->chgBit(oldp+902,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_reg_4259)))));
        bufp->chgBit(oldp+903,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_1_reg_4264)))));
        bufp->chgBit(oldp+904,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_2_reg_4269)))));
        bufp->chgCData(oldp+905,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_1_reg_4264)))),2);
        bufp->chgCData(oldp+906,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_2_reg_4269)))),2);
        bufp->chgCData(oldp+907,((3U & ((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_1_reg_4264))) 
                                        + (1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_2_reg_4269)))))),2);
        bufp->chgCData(oldp+908,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_reg_4259)))),2);
        bufp->chgCData(oldp+909,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__result_V_2_fu_2883_p2),2);
        bufp->chgBit(oldp+910,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter1_reg));
        bufp->chgBit(oldp+911,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter2_reg));
        bufp->chgBit(oldp+912,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter3_reg));
        bufp->chgBit(oldp+913,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter4_reg));
        bufp->chgBit(oldp+914,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter5_reg));
        bufp->chgBit(oldp+915,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter6_reg));
        bufp->chgBit(oldp+916,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter7_reg));
        bufp->chgCData(oldp+917,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 4U))),4);
        bufp->chgCData(oldp+918,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 8U))),4);
        bufp->chgCData(oldp+919,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 0xcU))),4);
        bufp->chgCData(oldp+920,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 0x10U))),4);
        bufp->chgCData(oldp+921,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 0x14U))),4);
        bufp->chgCData(oldp+922,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 0x18U))),4);
        bufp->chgCData(oldp+923,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 0x1cU))),4);
        bufp->chgCData(oldp+924,((3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U])),4);
        bufp->chgCData(oldp+925,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 4U))),4);
        bufp->chgCData(oldp+926,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 8U))),4);
        bufp->chgCData(oldp+927,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 0xcU))),4);
        bufp->chgCData(oldp+928,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 0x10U))),4);
        bufp->chgCData(oldp+929,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 0x14U))),4);
        bufp->chgCData(oldp+930,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 0x18U))),4);
        bufp->chgCData(oldp+931,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                        >> 0x1cU))),4);
        bufp->chgCData(oldp+932,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                  >> 0x1eU)),4);
        bufp->chgCData(oldp+933,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 2U))),4);
        bufp->chgCData(oldp+934,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 6U))),4);
        bufp->chgCData(oldp+935,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 0xaU))),4);
        bufp->chgCData(oldp+936,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 0xeU))),4);
        bufp->chgCData(oldp+937,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 0x12U))),4);
        bufp->chgCData(oldp+938,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 0x16U))),4);
        bufp->chgCData(oldp+939,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                        >> 0x1aU))),4);
        bufp->chgCData(oldp+940,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                  >> 0x1eU)),4);
        bufp->chgCData(oldp+941,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 2U))),4);
        bufp->chgCData(oldp+942,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 6U))),4);
        bufp->chgCData(oldp+943,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 0xaU))),4);
        bufp->chgCData(oldp+944,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 0xeU))),4);
        bufp->chgCData(oldp+945,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 0x12U))),4);
        bufp->chgCData(oldp+946,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 0x16U))),4);
        bufp->chgCData(oldp+947,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                        >> 0x1cU))),4);
        bufp->chgCData(oldp+948,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                  >> 0x1eU)),4);
        bufp->chgCData(oldp+949,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3614_pp0_iter2_reg),4);
        bufp->chgCData(oldp+950,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3629_pp0_iter2_reg),4);
        bufp->chgCData(oldp+951,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3644_pp0_iter2_reg),4);
        bufp->chgCData(oldp+952,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3659_pp0_iter2_reg),4);
        bufp->chgCData(oldp+953,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3674_pp0_iter2_reg),4);
        bufp->chgCData(oldp+954,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3539_pp0_iter2_reg),4);
        bufp->chgCData(oldp+955,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3689_pp0_iter2_reg),4);
        bufp->chgCData(oldp+956,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3704_pp0_iter2_reg),4);
        bufp->chgCData(oldp+957,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3719_pp0_iter2_reg),4);
        bufp->chgCData(oldp+958,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3734_pp0_iter2_reg),4);
        bufp->chgCData(oldp+959,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3749_pp0_iter2_reg),4);
        bufp->chgCData(oldp+960,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3774_pp0_iter2_reg),4);
        bufp->chgCData(oldp+961,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3789_pp0_iter2_reg),4);
        bufp->chgCData(oldp+962,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3804_pp0_iter2_reg),4);
        bufp->chgCData(oldp+963,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3819_pp0_iter2_reg),4);
        bufp->chgCData(oldp+964,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3554_pp0_iter2_reg),4);
        bufp->chgCData(oldp+965,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3834_pp0_iter2_reg),4);
        bufp->chgCData(oldp+966,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3849_pp0_iter2_reg),4);
        bufp->chgCData(oldp+967,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3864_pp0_iter2_reg),4);
        bufp->chgCData(oldp+968,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3879_pp0_iter2_reg),4);
        bufp->chgCData(oldp+969,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3894_pp0_iter2_reg),4);
        bufp->chgCData(oldp+970,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3909_pp0_iter2_reg),4);
        bufp->chgCData(oldp+971,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3924_pp0_iter2_reg),4);
        bufp->chgCData(oldp+972,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3939_pp0_iter2_reg),4);
        bufp->chgCData(oldp+973,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3954_pp0_iter2_reg),4);
        bufp->chgCData(oldp+974,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3969_pp0_iter2_reg),4);
        bufp->chgCData(oldp+975,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3569_pp0_iter2_reg),4);
        bufp->chgCData(oldp+976,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3984_pp0_iter2_reg),4);
        bufp->chgCData(oldp+977,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3989_pp0_iter2_reg),4);
        bufp->chgCData(oldp+978,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3584_pp0_iter2_reg),4);
        bufp->chgCData(oldp+979,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3599_pp0_iter2_reg),4);
        bufp->chgCData(oldp+980,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3534_pp0_iter2_reg),4);
        bufp->chgIData(oldp+981,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 4U))),25);
        bufp->chgIData(oldp+982,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_65_reg_3224)))),18);
        bufp->chgQData(oldp+983,((0xffffffffffffULL 
                                  & VL_EXTENDS_QI(48,4, 
                                                  (0xfU 
                                                   & VL_MULS_III(4, 
                                                                 (0xfU 
                                                                  & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3539_pp0_iter2_reg))), 
                                                                 (0xfU 
                                                                  & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+985,((0x7ffffffffffULL 
                                  & VL_MULS_QQQ(43, 
                                                (0x7ffffffffffULL 
                                                 & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                (0x7ffffffffffULL 
                                                 & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+987,((0xffffffffffffULL 
                                  & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                     + VL_EXTENDS_QI(48,4, 
                                                     (0xfU 
                                                      & VL_MULS_III(4, 
                                                                    (0xfU 
                                                                     & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3539_pp0_iter2_reg))), 
                                                                    (0xfU 
                                                                     & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+989,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+991,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+992,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+993,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+995,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                        >> 8U))),25);
        bufp->chgIData(oldp+996,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_67_reg_3234)))),18);
        bufp->chgQData(oldp+997,((0xffffffffffffULL 
                                  & VL_EXTENDS_QI(48,4, 
                                                  (0xfU 
                                                   & VL_MULS_III(4, 
                                                                 (0xfU 
                                                                  & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3534_pp0_iter2_reg))), 
                                                                 (0xfU 
                                                                  & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+999,((0x7ffffffffffULL 
                                  & VL_MULS_QQQ(43, 
                                                (0x7ffffffffffULL 
                                                 & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                (0x7ffffffffffULL 
                                                 & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1001,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3534_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1003,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1005,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1006,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1007,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1009,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0xcU))),25);
        bufp->chgIData(oldp+1010,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_69_reg_3244)))),18);
        bufp->chgQData(oldp+1011,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3554_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1013,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1015,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3554_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1017,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1019,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1020,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1021,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1023,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x10U))),25);
        bufp->chgIData(oldp+1024,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_71_reg_3254)))),18);
        bufp->chgQData(oldp+1025,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3569_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1027,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1029,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3569_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1031,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1033,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1034,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1035,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1037,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x14U))),25);
        bufp->chgIData(oldp+1038,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_73_reg_3264)))),18);
        bufp->chgQData(oldp+1039,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3584_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1041,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1043,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3584_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1045,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1047,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1048,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1049,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1051,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x18U))),25);
        bufp->chgIData(oldp+1052,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_75_reg_3274)))),18);
        bufp->chgQData(oldp+1053,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3599_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1055,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1057,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3599_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1059,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1061,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1062,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1063,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1065,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x1cU))),25);
        bufp->chgIData(oldp+1066,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_77_reg_3284)))),18);
        bufp->chgQData(oldp+1067,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3614_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1069,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1071,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3614_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1073,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1075,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1076,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1077,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1079,((3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U])),25);
        bufp->chgIData(oldp+1080,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_79_reg_3294)))),18);
        bufp->chgQData(oldp+1081,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3629_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1083,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1085,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3629_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1087,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1089,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1090,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1091,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1093,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 4U))),25);
        bufp->chgIData(oldp+1094,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_81_reg_3304)))),18);
        bufp->chgQData(oldp+1095,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3644_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1097,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1099,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3644_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1101,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1103,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1104,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1105,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1107,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 8U))),25);
        bufp->chgIData(oldp+1108,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_83_reg_3314)))),18);
        bufp->chgQData(oldp+1109,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3659_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1111,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1113,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3659_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1115,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1117,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1118,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1119,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1121,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0xcU))),25);
        bufp->chgIData(oldp+1122,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_85_reg_3324)))),18);
        bufp->chgQData(oldp+1123,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3674_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1125,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1127,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3674_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1129,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1131,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1132,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1133,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1135,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x10U))),25);
        bufp->chgIData(oldp+1136,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_87_reg_3334)))),18);
        bufp->chgQData(oldp+1137,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3689_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1139,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1141,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3689_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1143,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1145,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1146,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1147,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1149,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x14U))),25);
        bufp->chgIData(oldp+1150,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_89_reg_3344)))),18);
        bufp->chgQData(oldp+1151,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3704_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3329_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1153,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1155,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3704_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3329_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1157,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1159,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1160,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1161,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1163,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x18U))),25);
        bufp->chgIData(oldp+1164,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_91_reg_3354)))),18);
        bufp->chgQData(oldp+1165,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3719_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3339_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1167,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1169,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3719_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3339_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1171,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1173,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1174,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1175,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1177,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x1cU))),25);
        bufp->chgIData(oldp+1178,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_93_reg_3364)))),18);
        bufp->chgQData(oldp+1179,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3734_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3349_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1181,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1183,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3734_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3349_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1185,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1187,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1188,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1189,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1191,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                   >> 0x1eU)),25);
        bufp->chgIData(oldp+1192,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_94_reg_3369)))),18);
        bufp->chgQData(oldp+1193,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3774_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3374_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1195,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1197,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3774_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3374_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1199,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1201,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1202,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1203,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1205,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 2U))),25);
        bufp->chgIData(oldp+1206,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_96_reg_3379)))),18);
        bufp->chgQData(oldp+1207,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3789_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3384_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1209,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1211,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3789_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3384_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1213,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1215,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1216,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1217,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1219,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 6U))),25);
        bufp->chgIData(oldp+1220,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_98_reg_3389)))),18);
        bufp->chgQData(oldp+1221,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3804_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3394_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1223,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1225,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3804_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3394_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1227,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1229,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1230,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1231,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1233,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0xaU))),25);
        bufp->chgIData(oldp+1234,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_100_reg_3399)))),18);
        bufp->chgQData(oldp+1235,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3819_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3404_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1237,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1239,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3819_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3404_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1241,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1243,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1244,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1245,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1247,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0xeU))),25);
        bufp->chgIData(oldp+1248,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_102_reg_3409)))),18);
        bufp->chgQData(oldp+1249,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3834_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3414_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1251,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1253,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3834_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3414_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1255,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1257,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1258,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1259,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1261,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x12U))),25);
        bufp->chgIData(oldp+1262,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_104_reg_3419)))),18);
        bufp->chgQData(oldp+1263,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3849_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3424_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1265,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1267,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3849_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3424_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1269,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1271,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1272,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1273,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1275,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x16U))),25);
        bufp->chgIData(oldp+1276,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_106_reg_3429)))),18);
        bufp->chgQData(oldp+1277,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3864_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3434_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1279,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1281,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3864_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3434_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1283,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1285,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1286,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1287,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1289,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x1aU))),25);
        bufp->chgIData(oldp+1290,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_108_reg_3439)))),18);
        bufp->chgQData(oldp+1291,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3879_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3444_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1293,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1295,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3879_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3444_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1297,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1299,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1300,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1301,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1303,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                   >> 0x1eU)),25);
        bufp->chgIData(oldp+1304,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_110_reg_3449)))),18);
        bufp->chgQData(oldp+1305,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3894_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3454_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1307,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1309,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3894_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3454_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1311,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1313,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1314,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1315,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1317,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 2U))),25);
        bufp->chgIData(oldp+1318,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_112_reg_3459)))),18);
        bufp->chgQData(oldp+1319,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3909_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3464_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1321,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1323,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3909_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3464_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1325,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1327,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1328,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1329,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1331,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 6U))),25);
        bufp->chgIData(oldp+1332,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_114_reg_3469)))),18);
        bufp->chgQData(oldp+1333,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3924_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3474_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1335,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1337,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3924_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3474_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1339,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1341,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1342,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1343,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1345,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0xaU))),25);
        bufp->chgIData(oldp+1346,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_116_reg_3479)))),18);
        bufp->chgQData(oldp+1347,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3939_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3484_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1349,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1351,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3939_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3484_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1353,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1355,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1356,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1357,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1359,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0xeU))),25);
        bufp->chgIData(oldp+1360,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_118_reg_3489)))),18);
        bufp->chgQData(oldp+1361,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3954_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3494_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1363,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1365,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3954_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3494_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1367,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1369,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1370,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1371,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1373,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x12U))),25);
        bufp->chgIData(oldp+1374,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_120_reg_3499)))),18);
        bufp->chgQData(oldp+1375,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3969_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3504_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1377,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1379,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3969_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3504_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1381,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1383,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1384,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1385,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1387,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x16U))),25);
        bufp->chgIData(oldp+1388,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_122_reg_3509)))),18);
        bufp->chgQData(oldp+1389,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3984_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3514_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1391,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1393,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3984_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3514_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1395,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1397,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1398,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1399,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1401,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x1cU))),25);
        bufp->chgIData(oldp+1402,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_125_reg_3524)))),18);
        bufp->chgQData(oldp+1403,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3989_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3519_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1405,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1407,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3989_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3519_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1409,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1411,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1412,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1413,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+1415,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                   >> 0x1eU)),25);
        bufp->chgIData(oldp+1416,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_126_reg_3529)))),18);
        bufp->chgQData(oldp+1417,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3749_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3359_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+1419,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+1421,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3749_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3359_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+1423,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+1425,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+1426,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+1427,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgCData(oldp+1429,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state),2);
        bufp->chgWData(oldp+1430,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A),128);
        bufp->chgWData(oldp+1434,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B),128);
        bufp->chgBit(oldp+1438,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+1439,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+1440,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr)) 
                                 & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+1441,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+1442,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))));
        bufp->chgCData(oldp+1443,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state),2);
        bufp->chgCData(oldp+1444,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_A),8);
        bufp->chgCData(oldp+1445,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_B),8);
        bufp->chgBit(oldp+1446,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+1447,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+1448,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr)) 
                                 & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+1449,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+1450,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))));
        bufp->chgCData(oldp+1451,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state),2);
        bufp->chgWData(oldp+1452,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A),128);
        bufp->chgWData(oldp+1456,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B),128);
        bufp->chgBit(oldp+1460,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+1461,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+1462,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr)) 
                                 & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+1463,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+1464,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state))));
        bufp->chgBit(oldp+1465,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__awready));
        bufp->chgBit(oldp+1466,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__wready));
        bufp->chgBit(oldp+1467,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__arready));
        bufp->chgWData(oldp+1468,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__ip_wdata_wide),128);
        bufp->chgBit(oldp+1472,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Wr1));
        bufp->chgBit(oldp+1473,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs1));
        bufp->chgWData(oldp+1474,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data1),128);
        bufp->chgBit(oldp+1478,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure));
        bufp->chgBit(oldp+1479,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state) 
                                       >> 1U))));
        bufp->chgBit(oldp+1480,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs2));
        bufp->chgCData(oldp+1481,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__result_V_2_fu_2848_p2),8);
        bufp->chgBit(oldp+1482,((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__i_b_reg) 
                                  & (3U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
                                 | (1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)))));
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd) {
            __Vtemp_3[0U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[0U];
            __Vtemp_3[1U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[1U];
            __Vtemp_3[2U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[2U];
            __Vtemp_3[3U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[3U];
        } else {
            __Vtemp_3[0U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[0U];
            __Vtemp_3[1U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[1U];
            __Vtemp_3[2U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[2U];
            __Vtemp_3[3U] = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[3U];
        }
        bufp->chgWData(oldp+1483,(__Vtemp_3),128);
        bufp->chgBit(oldp+1487,((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))));
        bufp->chgWData(oldp+1488,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice),128);
        bufp->chgBit(oldp+1492,((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state))));
        bufp->chgBit(oldp+1493,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                       >> 1U))));
        bufp->chgBit(oldp+1494,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172));
        bufp->chgBit(oldp+1495,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg));
        bufp->chgCData(oldp+1496,((0x3fU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3167)),6);
        bufp->chgCData(oldp+1497,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_q0),6);
        bufp->chgCData(oldp+1498,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_q0),6);
        bufp->chgCData(oldp+1499,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_q0),6);
        bufp->chgIData(oldp+1500,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3167),32);
        bufp->chgBit(oldp+1501,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter1_reg));
        bufp->chgBit(oldp+1502,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter2_reg));
        bufp->chgBit(oldp+1503,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter3_reg));
        bufp->chgBit(oldp+1504,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter4_reg));
        bufp->chgBit(oldp+1505,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter5_reg));
        bufp->chgCData(oldp+1506,((3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U])),2);
        bufp->chgCData(oldp+1507,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179),2);
        bufp->chgCData(oldp+1508,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1509,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1510,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184),2);
        bufp->chgCData(oldp+1511,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1512,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1513,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_65_reg_3189),2);
        bufp->chgCData(oldp+1514,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194),2);
        bufp->chgCData(oldp+1515,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1516,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1517,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_67_reg_3199),2);
        bufp->chgCData(oldp+1518,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204),2);
        bufp->chgCData(oldp+1519,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1520,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1521,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_69_reg_3209),2);
        bufp->chgCData(oldp+1522,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214),2);
        bufp->chgCData(oldp+1523,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1524,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1525,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_71_reg_3219),2);
        bufp->chgCData(oldp+1526,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224),2);
        bufp->chgCData(oldp+1527,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1528,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1529,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_73_reg_3229),2);
        bufp->chgCData(oldp+1530,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234),2);
        bufp->chgCData(oldp+1531,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1532,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1533,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_75_reg_3239),2);
        bufp->chgCData(oldp+1534,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244),2);
        bufp->chgCData(oldp+1535,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1536,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1537,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_77_reg_3249),2);
        bufp->chgCData(oldp+1538,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254),2);
        bufp->chgCData(oldp+1539,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1540,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1541,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_79_reg_3259),2);
        bufp->chgCData(oldp+1542,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264),2);
        bufp->chgCData(oldp+1543,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1544,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1545,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_81_reg_3269),2);
        bufp->chgCData(oldp+1546,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274),2);
        bufp->chgCData(oldp+1547,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1548,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1549,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_83_reg_3279),2);
        bufp->chgCData(oldp+1550,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284),2);
        bufp->chgCData(oldp+1551,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1552,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1553,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_85_reg_3289),2);
        bufp->chgCData(oldp+1554,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294),2);
        bufp->chgCData(oldp+1555,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1556,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1557,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_87_reg_3299),2);
        bufp->chgCData(oldp+1558,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304),2);
        bufp->chgCData(oldp+1559,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1560,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1561,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_89_reg_3309),2);
        bufp->chgCData(oldp+1562,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314),2);
        bufp->chgCData(oldp+1563,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1564,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1565,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_91_reg_3319),2);
        bufp->chgCData(oldp+1566,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324),2);
        bufp->chgCData(oldp+1567,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1568,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1569,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_93_reg_3329),2);
        bufp->chgCData(oldp+1570,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_94_reg_3334),2);
        bufp->chgCData(oldp+1571,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3339),2);
        bufp->chgCData(oldp+1572,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3339_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1573,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3339_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1574,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_96_reg_3344),2);
        bufp->chgCData(oldp+1575,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3349),2);
        bufp->chgCData(oldp+1576,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3349_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1577,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3349_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1578,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_98_reg_3354),2);
        bufp->chgCData(oldp+1579,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3359),2);
        bufp->chgCData(oldp+1580,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3359_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1581,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3359_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1582,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_100_reg_3364),2);
        bufp->chgCData(oldp+1583,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3369),2);
        bufp->chgCData(oldp+1584,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3369_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1585,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3369_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1586,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_102_reg_3374),2);
        bufp->chgCData(oldp+1587,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3379),2);
        bufp->chgCData(oldp+1588,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3379_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1589,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3379_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1590,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_104_reg_3384),2);
        bufp->chgCData(oldp+1591,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3389),2);
        bufp->chgCData(oldp+1592,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3389_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1593,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3389_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1594,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_106_reg_3394),2);
        bufp->chgCData(oldp+1595,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3399),2);
        bufp->chgCData(oldp+1596,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3399_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1597,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3399_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1598,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_108_reg_3404),2);
        bufp->chgCData(oldp+1599,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3409),2);
        bufp->chgCData(oldp+1600,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3409_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1601,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3409_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1602,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_110_reg_3414),2);
        bufp->chgCData(oldp+1603,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3419),2);
        bufp->chgCData(oldp+1604,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3419_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1605,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3419_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1606,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_112_reg_3424),2);
        bufp->chgCData(oldp+1607,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3429),2);
        bufp->chgCData(oldp+1608,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3429_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1609,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3429_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1610,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_114_reg_3434),2);
        bufp->chgCData(oldp+1611,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3439),2);
        bufp->chgCData(oldp+1612,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3439_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1613,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3439_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1614,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_116_reg_3444),2);
        bufp->chgCData(oldp+1615,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3449),2);
        bufp->chgCData(oldp+1616,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3449_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1617,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3449_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1618,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_118_reg_3454),2);
        bufp->chgCData(oldp+1619,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3459),2);
        bufp->chgCData(oldp+1620,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3459_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1621,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3459_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1622,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_120_reg_3464),2);
        bufp->chgCData(oldp+1623,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3469),2);
        bufp->chgCData(oldp+1624,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3469_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1625,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3469_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1626,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_122_reg_3474),2);
        bufp->chgCData(oldp+1627,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3479),2);
        bufp->chgCData(oldp+1628,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3479_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1629,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3479_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1630,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3484),2);
        bufp->chgCData(oldp+1631,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3484_pp0_iter1_reg),2);
        bufp->chgCData(oldp+1632,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3484_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1633,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_125_reg_3489),2);
        bufp->chgCData(oldp+1634,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_126_reg_3494),2);
        bufp->chgCData(oldp+1635,((3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U])),2);
        bufp->chgCData(oldp+1636,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3499),2);
        bufp->chgCData(oldp+1637,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3499_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1638,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3504),2);
        bufp->chgCData(oldp+1639,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3504_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1640,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3519),2);
        bufp->chgCData(oldp+1641,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3519_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1642,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3534),2);
        bufp->chgCData(oldp+1643,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3534_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1644,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3549),2);
        bufp->chgCData(oldp+1645,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3549_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1646,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3564),2);
        bufp->chgCData(oldp+1647,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3564_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1648,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3579),2);
        bufp->chgCData(oldp+1649,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3579_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1650,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3594),2);
        bufp->chgCData(oldp+1651,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3594_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1652,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3609),2);
        bufp->chgCData(oldp+1653,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3609_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1654,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3624),2);
        bufp->chgCData(oldp+1655,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3624_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1656,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3639),2);
        bufp->chgCData(oldp+1657,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3639_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1658,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3654),2);
        bufp->chgCData(oldp+1659,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3654_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1660,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3669),2);
        bufp->chgCData(oldp+1661,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3669_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1662,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3684),2);
        bufp->chgCData(oldp+1663,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3684_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1664,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3699),2);
        bufp->chgCData(oldp+1665,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3699_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1666,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3714),2);
        bufp->chgCData(oldp+1667,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3714_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1668,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3739),2);
        bufp->chgCData(oldp+1669,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3739_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1670,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3754),2);
        bufp->chgCData(oldp+1671,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3754_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1672,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3769),2);
        bufp->chgCData(oldp+1673,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3769_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1674,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3784),2);
        bufp->chgCData(oldp+1675,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3784_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1676,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3799),2);
        bufp->chgCData(oldp+1677,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3799_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1678,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3814),2);
        bufp->chgCData(oldp+1679,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3814_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1680,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3829),2);
        bufp->chgCData(oldp+1681,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3829_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1682,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3844),2);
        bufp->chgCData(oldp+1683,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3844_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1684,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3859),2);
        bufp->chgCData(oldp+1685,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3859_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1686,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3874),2);
        bufp->chgCData(oldp+1687,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3874_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1688,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3889),2);
        bufp->chgCData(oldp+1689,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3889_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1690,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3904),2);
        bufp->chgCData(oldp+1691,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3904_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1692,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3919),2);
        bufp->chgCData(oldp+1693,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3919_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1694,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3934),2);
        bufp->chgCData(oldp+1695,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3934_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1696,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3949),2);
        bufp->chgCData(oldp+1697,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3949_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1698,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3954),2);
        bufp->chgCData(oldp+1699,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3954_pp0_iter2_reg),2);
        bufp->chgCData(oldp+1700,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_3994),6);
        bufp->chgCData(oldp+1701,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_3994_pp0_iter3_reg),6);
        bufp->chgCData(oldp+1702,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_3994_pp0_iter4_reg),6);
        bufp->chgCData(oldp+1703,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_3994_pp0_iter5_reg),6);
        bufp->chgCData(oldp+1704,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_3999),6);
        bufp->chgCData(oldp+1705,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_3999_pp0_iter3_reg),6);
        bufp->chgCData(oldp+1706,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_3999_pp0_iter4_reg),6);
        bufp->chgCData(oldp+1707,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_3999_pp0_iter5_reg),6);
        bufp->chgCData(oldp+1708,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4004),6);
        bufp->chgCData(oldp+1709,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4004_pp0_iter3_reg),6);
        bufp->chgCData(oldp+1710,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4004_pp0_iter4_reg),6);
        bufp->chgCData(oldp+1711,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4004_pp0_iter5_reg),6);
        bufp->chgCData(oldp+1712,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1713,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_2_reg_4169),6);
        bufp->chgCData(oldp+1714,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1715,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_5_reg_4174),6);
        bufp->chgCData(oldp+1716,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                          (0x3fU 
                                                           & (VL_EXTENDS_II(6,5, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                              + 
                                                              VL_EXTENDS_II(6,5, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                            + VL_EXTENDS_II(7,6, 
                                                            (0x3fU 
                                                             & (VL_EXTENDS_II(6,5, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                                + 
                                                                VL_EXTENDS_II(6,5, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+1717,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_13_reg_4179),7);
        bufp->chgCData(oldp+1718,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1719,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_17_reg_4184),6);
        bufp->chgCData(oldp+1720,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1721,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_20_reg_4189),6);
        bufp->chgCData(oldp+1722,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                          (0x3fU 
                                                           & (VL_EXTENDS_II(6,5, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                              + 
                                                              VL_EXTENDS_II(6,5, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                            + VL_EXTENDS_II(7,6, 
                                                            (0x3fU 
                                                             & (VL_EXTENDS_II(6,5, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                                + 
                                                                VL_EXTENDS_II(6,5, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+1723,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_28_reg_4194),7);
        bufp->chgCData(oldp+1724,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                          (0x3fU 
                                                           & (VL_EXTENDS_II(6,5, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                              + 
                                                              VL_EXTENDS_II(6,5, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                            + VL_EXTENDS_II(7,6, 
                                                            (0x3fU 
                                                             & (VL_EXTENDS_II(6,5, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                                + 
                                                                VL_EXTENDS_II(6,5, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+1725,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_37_reg_4199),7);
        bufp->chgCData(oldp+1726,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                          (0x3fU 
                                                           & (VL_EXTENDS_II(6,5, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                              + 
                                                              VL_EXTENDS_II(6,5, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                            + VL_EXTENDS_II(7,6, 
                                                            (0x3fU 
                                                             & (VL_EXTENDS_II(6,5, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                                + 
                                                                VL_EXTENDS_II(6,5, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+1727,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_44_reg_4204),7);
        bufp->chgCData(oldp+1728,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1729,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_48_reg_4209),6);
        bufp->chgCData(oldp+1730,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1731,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_51_reg_4214),6);
        bufp->chgCData(oldp+1732,((0x7fU & (VL_EXTENDS_II(7,6, 
                                                          (0x3fU 
                                                           & (VL_EXTENDS_II(6,5, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                              + 
                                                              VL_EXTENDS_II(6,5, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))) 
                                            + VL_EXTENDS_II(7,6, 
                                                            (0x3fU 
                                                             & (VL_EXTENDS_II(6,5, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                                + 
                                                                VL_EXTENDS_II(6,5, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))))))),7);
        bufp->chgCData(oldp+1733,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_59_reg_4219),7);
        bufp->chgCData(oldp+1734,((0x7fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_13_reg_4179) 
                                            + (VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_5_reg_4174)) 
                                               + VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_2_reg_4169)))))),7);
        bufp->chgCData(oldp+1735,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_14_reg_4224),7);
        bufp->chgCData(oldp+1736,((0x7fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_28_reg_4194) 
                                            + (VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_20_reg_4189)) 
                                               + VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_17_reg_4184)))))),7);
        bufp->chgCData(oldp+1737,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_29_reg_4229),7);
        bufp->chgCData(oldp+1738,((0x7fU & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_59_reg_4219) 
                                             + (VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_51_reg_4214)) 
                                                + VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_48_reg_4209)))) 
                                            + ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_37_reg_4199) 
                                               + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_44_reg_4204))))),7);
        bufp->chgCData(oldp+1739,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_61_reg_4234),7);
        bufp->chgBit(oldp+1740,(VL_LTS_III(7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_62_fu_2783_p2), (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_3994_pp0_iter5_reg))));
        bufp->chgBit(oldp+1741,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_reg_4239));
        bufp->chgBit(oldp+1742,(VL_LTS_III(7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_62_fu_2783_p2), (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_3999_pp0_iter5_reg))));
        bufp->chgBit(oldp+1743,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_1_reg_4244));
        bufp->chgBit(oldp+1744,(VL_LTS_III(7, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_62_fu_2783_p2), (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4004_pp0_iter5_reg))));
        bufp->chgBit(oldp+1745,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_2_reg_4249));
        bufp->chgQData(oldp+1746,((QData)((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3167))),64);
        bufp->chgIData(oldp+1748,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_1_fu_304),32);
        bufp->chgCData(oldp+1749,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__i_fu_308),7);
        bufp->chgWData(oldp+1750,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312),128);
        bufp->chgCData(oldp+1754,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1755,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 8U))),2);
        bufp->chgCData(oldp+1756,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0xcU))),2);
        bufp->chgCData(oldp+1757,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x10U))),2);
        bufp->chgCData(oldp+1758,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x14U))),2);
        bufp->chgCData(oldp+1759,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x18U))),2);
        bufp->chgCData(oldp+1760,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x1cU))),2);
        bufp->chgCData(oldp+1761,((3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U])),2);
        bufp->chgCData(oldp+1762,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1763,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 8U))),2);
        bufp->chgCData(oldp+1764,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0xcU))),2);
        bufp->chgCData(oldp+1765,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x10U))),2);
        bufp->chgCData(oldp+1766,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x14U))),2);
        bufp->chgCData(oldp+1767,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x18U))),2);
        bufp->chgCData(oldp+1768,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x1cU))),2);
        bufp->chgCData(oldp+1769,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                   >> 0x1eU)),2);
        bufp->chgCData(oldp+1770,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1771,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1772,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0xaU))),2);
        bufp->chgCData(oldp+1773,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0xeU))),2);
        bufp->chgCData(oldp+1774,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x12U))),2);
        bufp->chgCData(oldp+1775,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+1776,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x1aU))),2);
        bufp->chgCData(oldp+1777,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                   >> 0x1eU)),2);
        bufp->chgCData(oldp+1778,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1779,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1780,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0xaU))),2);
        bufp->chgCData(oldp+1781,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0xeU))),2);
        bufp->chgCData(oldp+1782,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x12U))),2);
        bufp->chgCData(oldp+1783,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+1784,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x1cU))),2);
        bufp->chgCData(oldp+1785,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                   >> 0x1eU)),2);
        bufp->chgCData(oldp+1786,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3499_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1787,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3504_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1788,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3519_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1789,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3534_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1790,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3549_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1791,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3564_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1792,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3579_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1793,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3594_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1794,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3609_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1795,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3624_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1796,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3639_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1797,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3654_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1798,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3669_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1799,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3684_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1800,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3699_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1801,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3714_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1802,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3739_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3339_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1803,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3754_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3349_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1804,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3769_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3359_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1805,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3784_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3369_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1806,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3799_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3379_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1807,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3814_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3389_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1808,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3829_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3399_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1809,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3844_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3409_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1810,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3859_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3419_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1811,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3874_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3429_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1812,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3889_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3439_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1813,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3904_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3449_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1814,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3919_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3459_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1815,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3934_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3469_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1816,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3949_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3479_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1817,((0xfU & VL_MULS_III(4, 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3954_pp0_iter2_reg))), 
                                                      (0xfU 
                                                       & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3484_pp0_iter2_reg)))))),4);
        bufp->chgCData(oldp+1818,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1819,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1820,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1821,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1822,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1823,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1824,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1825,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1826,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1827,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1828,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1829,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1830,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1831,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1832,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1833,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1834,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1835,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1836,((0x7fU & VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+1837,((0x7fU & VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+1838,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1839,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1840,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1841,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1842,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1843,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1844,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1845,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1846,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1847,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1848,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1849,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1850,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1851,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1852,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1853,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1854,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1855,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1856,((0x7fU & VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+1857,((0x7fU & VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+1858,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1859,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1860,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1861,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1862,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1863,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1864,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1865,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1866,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1867,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1868,((0x7fU & VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+1869,((0x7fU & VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+1870,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1871,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1872,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1873,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1874,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1875,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1876,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1877,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1878,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1879,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1880,((0x7fU & VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+1881,((0x7fU & VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+1882,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1883,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1884,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1885,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1886,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1887,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1888,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1889,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1890,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1891,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1892,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1893,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1894,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1895,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1896,((0x1fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))),5);
        bufp->chgCData(oldp+1897,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1898,((0x3fU & VL_EXTENDS_II(6,5, 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))))),6);
        bufp->chgCData(oldp+1899,((0x3fU & (VL_EXTENDS_II(6,5, 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                            + VL_EXTENDS_II(6,5, 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))),6);
        bufp->chgCData(oldp+1900,((0x7fU & VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+1901,((0x7fU & VL_EXTENDS_II(7,6, 
                                                         (0x3fU 
                                                          & (VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg))) 
                                                             + 
                                                             VL_EXTENDS_II(6,5, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg)))))))),7);
        bufp->chgCData(oldp+1902,((0x7fU & VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_5_reg_4174)))),7);
        bufp->chgCData(oldp+1903,((0x7fU & VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_2_reg_4169)))),7);
        bufp->chgCData(oldp+1904,((0x7fU & (VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_5_reg_4174)) 
                                            + VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_2_reg_4169))))),7);
        bufp->chgCData(oldp+1905,((0x7fU & VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_20_reg_4189)))),7);
        bufp->chgCData(oldp+1906,((0x7fU & VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_17_reg_4184)))),7);
        bufp->chgCData(oldp+1907,((0x7fU & (VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_20_reg_4189)) 
                                            + VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_17_reg_4184))))),7);
        bufp->chgCData(oldp+1908,((0x7fU & VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_51_reg_4214)))),7);
        bufp->chgCData(oldp+1909,((0x7fU & VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_48_reg_4209)))),7);
        bufp->chgCData(oldp+1910,((0x7fU & (VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_51_reg_4214)) 
                                            + VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_48_reg_4209))))),7);
        bufp->chgCData(oldp+1911,((0x7fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_59_reg_4219) 
                                            + (VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_51_reg_4214)) 
                                               + VL_EXTENDS_II(7,6, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_48_reg_4209)))))),7);
        bufp->chgCData(oldp+1912,((0x7fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_37_reg_4199) 
                                            + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_44_reg_4204)))),7);
        bufp->chgCData(oldp+1913,((0x7fU & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_14_reg_4224) 
                                            + (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_29_reg_4229)))),7);
        bufp->chgCData(oldp+1914,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__add_ln840_62_fu_2783_p2),7);
        bufp->chgCData(oldp+1915,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_3994_pp0_iter5_reg),7);
        bufp->chgCData(oldp+1916,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_3999_pp0_iter5_reg),7);
        bufp->chgCData(oldp+1917,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4004_pp0_iter5_reg),7);
        bufp->chgBit(oldp+1918,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_reg_4239)))));
        bufp->chgBit(oldp+1919,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_1_reg_4244)))));
        bufp->chgBit(oldp+1920,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_2_reg_4249)))));
        bufp->chgCData(oldp+1921,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_1_reg_4244)))),2);
        bufp->chgCData(oldp+1922,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_2_reg_4249)))),2);
        bufp->chgCData(oldp+1923,((3U & ((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_1_reg_4244))) 
                                         + (1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_2_reg_4249)))))),2);
        bufp->chgCData(oldp+1924,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln1039_reg_4239)))),2);
        bufp->chgCData(oldp+1925,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__result_V_2_fu_2848_p2),2);
        bufp->chgBit(oldp+1926,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter1_reg));
        bufp->chgBit(oldp+1927,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter2_reg));
        bufp->chgBit(oldp+1928,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter3_reg));
        bufp->chgBit(oldp+1929,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter4_reg));
        bufp->chgBit(oldp+1930,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter5_reg));
        bufp->chgBit(oldp+1931,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter6_reg));
        bufp->chgBit(oldp+1932,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter7_reg));
        bufp->chgCData(oldp+1933,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 4U))),4);
        bufp->chgCData(oldp+1934,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 8U))),4);
        bufp->chgCData(oldp+1935,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+1936,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+1937,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+1938,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x18U))),4);
        bufp->chgCData(oldp+1939,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x1cU))),4);
        bufp->chgCData(oldp+1940,((3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U])),4);
        bufp->chgCData(oldp+1941,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 4U))),4);
        bufp->chgCData(oldp+1942,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 8U))),4);
        bufp->chgCData(oldp+1943,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+1944,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+1945,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x14U))),4);
        bufp->chgCData(oldp+1946,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x18U))),4);
        bufp->chgCData(oldp+1947,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x1cU))),4);
        bufp->chgCData(oldp+1948,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                   >> 0x1eU)),4);
        bufp->chgCData(oldp+1949,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 2U))),4);
        bufp->chgCData(oldp+1950,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 6U))),4);
        bufp->chgCData(oldp+1951,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0xaU))),4);
        bufp->chgCData(oldp+1952,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0xeU))),4);
        bufp->chgCData(oldp+1953,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x12U))),4);
        bufp->chgCData(oldp+1954,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x16U))),4);
        bufp->chgCData(oldp+1955,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x1aU))),4);
        bufp->chgCData(oldp+1956,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                   >> 0x1eU)),4);
        bufp->chgCData(oldp+1957,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 2U))),4);
        bufp->chgCData(oldp+1958,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 6U))),4);
        bufp->chgCData(oldp+1959,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0xaU))),4);
        bufp->chgCData(oldp+1960,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0xeU))),4);
        bufp->chgCData(oldp+1961,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x12U))),4);
        bufp->chgCData(oldp+1962,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x16U))),4);
        bufp->chgCData(oldp+1963,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x1cU))),4);
        bufp->chgCData(oldp+1964,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                   >> 0x1eU)),4);
        bufp->chgCData(oldp+1965,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3579_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1966,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3594_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1967,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3609_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1968,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3624_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1969,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3639_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1970,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3504_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1971,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3654_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1972,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3669_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1973,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3684_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1974,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3699_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1975,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3714_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1976,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3739_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1977,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3754_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1978,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3769_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1979,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3784_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1980,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3519_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1981,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3799_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1982,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3814_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1983,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3829_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1984,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3844_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1985,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3859_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1986,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3874_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1987,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3889_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1988,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3904_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1989,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3919_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1990,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3934_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1991,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3534_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1992,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3949_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1993,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3954_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1994,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3549_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1995,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3564_pp0_iter2_reg),4);
        bufp->chgCData(oldp+1996,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3499_pp0_iter2_reg),4);
        bufp->chgIData(oldp+1997,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 4U))),25);
        bufp->chgIData(oldp+1998,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_65_reg_3189)))),18);
        bufp->chgQData(oldp+1999,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3504_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2001,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2003,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3504_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2005,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2007,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2008,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2009,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2011,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 8U))),25);
        bufp->chgIData(oldp+2012,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_67_reg_3199)))),18);
        bufp->chgQData(oldp+2013,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3499_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2015,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2017,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3499_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2019,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2021,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2022,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2023,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2025,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0xcU))),25);
        bufp->chgIData(oldp+2026,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_69_reg_3209)))),18);
        bufp->chgQData(oldp+2027,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3519_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2029,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2031,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3519_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2033,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2035,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2036,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2037,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2039,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x10U))),25);
        bufp->chgIData(oldp+2040,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_71_reg_3219)))),18);
        bufp->chgQData(oldp+2041,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3534_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2043,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2045,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3534_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2047,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2049,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2050,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2051,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2053,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x14U))),25);
        bufp->chgIData(oldp+2054,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_73_reg_3229)))),18);
        bufp->chgQData(oldp+2055,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3549_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2057,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2059,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3549_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2061,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2063,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2064,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2065,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2067,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x18U))),25);
        bufp->chgIData(oldp+2068,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_75_reg_3239)))),18);
        bufp->chgQData(oldp+2069,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3564_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2071,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2073,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3564_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2075,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2077,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2078,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2079,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2081,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                                         >> 0x1cU))),25);
        bufp->chgIData(oldp+2082,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_77_reg_3249)))),18);
        bufp->chgQData(oldp+2083,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3579_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2085,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2087,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3579_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2089,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2091,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2092,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2093,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2095,((3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U])),25);
        bufp->chgIData(oldp+2096,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_79_reg_3259)))),18);
        bufp->chgQData(oldp+2097,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3594_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2099,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2101,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3594_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2103,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2105,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2106,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2107,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2109,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 4U))),25);
        bufp->chgIData(oldp+2110,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_81_reg_3269)))),18);
        bufp->chgQData(oldp+2111,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3609_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2113,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2115,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3609_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2117,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2119,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2120,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2121,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2123,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 8U))),25);
        bufp->chgIData(oldp+2124,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_83_reg_3279)))),18);
        bufp->chgQData(oldp+2125,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3624_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2127,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2129,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3624_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2131,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2133,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2134,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2135,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2137,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0xcU))),25);
        bufp->chgIData(oldp+2138,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_85_reg_3289)))),18);
        bufp->chgQData(oldp+2139,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3639_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2141,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2143,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3639_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2145,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2147,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2148,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2149,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2151,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x10U))),25);
        bufp->chgIData(oldp+2152,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_87_reg_3299)))),18);
        bufp->chgQData(oldp+2153,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3654_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2155,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2157,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3654_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2159,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2161,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2162,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2163,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2165,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x14U))),25);
        bufp->chgIData(oldp+2166,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_89_reg_3309)))),18);
        bufp->chgQData(oldp+2167,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3669_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2169,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2171,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3669_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2173,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2175,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2176,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2177,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2179,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x18U))),25);
        bufp->chgIData(oldp+2180,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_91_reg_3319)))),18);
        bufp->chgQData(oldp+2181,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3684_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2183,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2185,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3684_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2187,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2189,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2190,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2191,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2193,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                         >> 0x1cU))),25);
        bufp->chgIData(oldp+2194,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_93_reg_3329)))),18);
        bufp->chgQData(oldp+2195,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3699_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2197,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2199,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3699_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2201,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2203,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2204,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2205,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2207,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                                   >> 0x1eU)),25);
        bufp->chgIData(oldp+2208,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_94_reg_3334)))),18);
        bufp->chgQData(oldp+2209,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3739_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3339_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2211,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2213,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3739_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3339_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2215,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2217,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2218,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2219,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2221,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 2U))),25);
        bufp->chgIData(oldp+2222,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_96_reg_3344)))),18);
        bufp->chgQData(oldp+2223,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3754_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3349_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2225,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2227,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3754_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3349_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2229,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2231,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2232,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2233,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2235,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 6U))),25);
        bufp->chgIData(oldp+2236,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_98_reg_3354)))),18);
        bufp->chgQData(oldp+2237,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3769_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3359_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2239,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2241,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3769_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3359_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2243,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2245,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2246,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2247,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2249,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0xaU))),25);
        bufp->chgIData(oldp+2250,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_100_reg_3364)))),18);
        bufp->chgQData(oldp+2251,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3784_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3369_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2253,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2255,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3784_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3369_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2257,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2259,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2260,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2261,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2263,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0xeU))),25);
        bufp->chgIData(oldp+2264,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_102_reg_3374)))),18);
        bufp->chgQData(oldp+2265,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3799_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3379_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2267,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2269,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3799_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3379_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2271,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2273,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2274,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2275,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2277,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x12U))),25);
        bufp->chgIData(oldp+2278,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_104_reg_3384)))),18);
        bufp->chgQData(oldp+2279,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3814_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3389_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2281,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2283,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3814_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3389_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2285,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2287,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2288,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2289,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2291,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x16U))),25);
        bufp->chgIData(oldp+2292,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_106_reg_3394)))),18);
        bufp->chgQData(oldp+2293,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3829_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3399_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2295,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2297,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3829_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3399_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2299,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2301,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2302,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2303,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2305,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                         >> 0x1aU))),25);
        bufp->chgIData(oldp+2306,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_108_reg_3404)))),18);
        bufp->chgQData(oldp+2307,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3844_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3409_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2309,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2311,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3844_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3409_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2313,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2315,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2316,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2317,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2319,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                                   >> 0x1eU)),25);
        bufp->chgIData(oldp+2320,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_110_reg_3414)))),18);
        bufp->chgQData(oldp+2321,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3859_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3419_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2323,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2325,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3859_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3419_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2327,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2329,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2330,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2331,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2333,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 2U))),25);
        bufp->chgIData(oldp+2334,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_112_reg_3424)))),18);
        bufp->chgQData(oldp+2335,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3874_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3429_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2337,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2339,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3874_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3429_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2341,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2343,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2344,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2345,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2347,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 6U))),25);
        bufp->chgIData(oldp+2348,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_114_reg_3434)))),18);
        bufp->chgQData(oldp+2349,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3889_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3439_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2351,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2353,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3889_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3439_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2355,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2357,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2358,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2359,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2361,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0xaU))),25);
        bufp->chgIData(oldp+2362,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_116_reg_3444)))),18);
        bufp->chgQData(oldp+2363,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3904_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3449_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2365,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2367,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3904_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3449_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2369,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2371,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2372,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2373,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2375,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0xeU))),25);
        bufp->chgIData(oldp+2376,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_118_reg_3454)))),18);
        bufp->chgQData(oldp+2377,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3919_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3459_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2379,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2381,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3919_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3459_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2383,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2385,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2386,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2387,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2389,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x12U))),25);
        bufp->chgIData(oldp+2390,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_120_reg_3464)))),18);
        bufp->chgQData(oldp+2391,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3934_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3469_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2393,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2395,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3934_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3469_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2397,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2399,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2400,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2401,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2403,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x16U))),25);
        bufp->chgIData(oldp+2404,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_122_reg_3474)))),18);
        bufp->chgQData(oldp+2405,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3949_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3479_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2407,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2409,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3949_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3479_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2411,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2413,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2414,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2415,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2417,((3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                         >> 0x1cU))),25);
        bufp->chgIData(oldp+2418,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_125_reg_3489)))),18);
        bufp->chgQData(oldp+2419,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3954_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3484_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2421,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2423,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3954_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3484_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2425,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2427,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2428,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2429,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgIData(oldp+2431,((vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                                   >> 0x1eU)),25);
        bufp->chgIData(oldp+2432,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_126_reg_3494)))),18);
        bufp->chgQData(oldp+2433,((0xffffffffffffULL 
                                   & VL_EXTENDS_QI(48,4, 
                                                   (0xfU 
                                                    & VL_MULS_III(4, 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3714_pp0_iter2_reg))), 
                                                                  (0xfU 
                                                                   & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324_pp0_iter2_reg)))))))),48);
        bufp->chgQData(oldp+2435,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2437,((0xffffffffffffULL 
                                   & (VL_EXTENDS_QQ(48,43, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg) 
                                      + VL_EXTENDS_QI(48,4, 
                                                      (0xfU 
                                                       & VL_MULS_III(4, 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,3, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3714_pp0_iter2_reg))), 
                                                                     (0xfU 
                                                                      & VL_EXTENDS_II(4,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324_pp0_iter2_reg))))))))),48);
        bufp->chgQData(oldp+2439,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2441,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2442,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2443,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgCData(oldp+2445,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state),2);
        bufp->chgWData(oldp+2446,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A),128);
        bufp->chgWData(oldp+2450,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B),128);
        bufp->chgBit(oldp+2454,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+2455,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+2456,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr)) 
                                 & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+2457,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+2458,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))));
        bufp->chgCData(oldp+2459,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state),2);
        bufp->chgCData(oldp+2460,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_A),8);
        bufp->chgCData(oldp+2461,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_B),8);
        bufp->chgBit(oldp+2462,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+2463,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+2464,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr)) 
                                 & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+2465,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+2466,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))));
        bufp->chgCData(oldp+2467,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state),2);
        bufp->chgWData(oldp+2468,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A),128);
        bufp->chgWData(oldp+2472,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B),128);
        bufp->chgBit(oldp+2476,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+2477,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+2478,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr)) 
                                 & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+2479,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+2480,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state))));
        bufp->chgBit(oldp+2481,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__awready));
        bufp->chgBit(oldp+2482,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__wready));
        bufp->chgBit(oldp+2483,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__arready));
        bufp->chgWData(oldp+2484,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__ip_wdata_wide),128);
        bufp->chgBit(oldp+2488,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Wr1));
        bufp->chgBit(oldp+2489,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs1));
        bufp->chgWData(oldp+2490,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data1),128);
        bufp->chgBit(oldp+2494,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure));
        bufp->chgBit(oldp+2495,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state) 
                                       >> 1U))));
        bufp->chgBit(oldp+2496,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs2));
        bufp->chgBit(oldp+2497,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230));
        bufp->chgBit(oldp+2498,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter3_reg));
        bufp->chgBit(oldp+2499,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln290_reg_259));
        bufp->chgBit(oldp+2500,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5));
        bufp->chgBit(oldp+2501,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io));
        bufp->chgBit(oldp+2502,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter4_reg));
        bufp->chgBit(oldp+2503,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln290_reg_259_pp0_iter4_reg));
        bufp->chgBit(oldp+2504,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6));
        bufp->chgBit(oldp+2505,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk));
        bufp->chgBit(oldp+2506,(((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk) 
                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io))));
        bufp->chgBit(oldp+2507,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io));
        bufp->chgBit(oldp+2508,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter1_reg));
        bufp->chgBit(oldp+2509,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter2_reg));
        bufp->chgCData(oldp+2510,((3U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd)
                                          ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B)
                                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A)))),2);
        bufp->chgCData(oldp+2511,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__inElem_reg_234),2);
        bufp->chgCData(oldp+2512,((3U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_rd)
                                          ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B)
                                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A)))),2);
        bufp->chgCData(oldp+2513,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__W_packed_V_reg_239),2);
        bufp->chgBit(oldp+2514,((0x40U == ((IData)(1U) 
                                           + vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__sf_fu_58))));
        bufp->chgIData(oldp+2515,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__sf_fu_58),32);
        bufp->chgIData(oldp+2516,(((IData)(1U) + vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__sf_fu_58)),32);
        bufp->chgCData(oldp+2517,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__i_fu_62),7);
        bufp->chgCData(oldp+2518,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__empty_fu_66),7);
        bufp->chgCData(oldp+2519,((0x7fU & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__p_reg))),7);
        bufp->chgBit(oldp+2520,((0U == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__sf_fu_58)));
        bufp->chgCData(oldp+2521,((0x3fU & (IData)(
                                                   (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__p_reg 
                                                    >> 1U)))),6);
        bufp->chgBit(oldp+2522,(VL_LTS_III(6, 0U, (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__p_reg 
                                                              >> 1U))))));
        bufp->chgBit(oldp+2523,(((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                                 | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk))));
        bufp->chgCData(oldp+2524,(((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd)
                                    ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B)
                                    : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A))),8);
        bufp->chgBit(oldp+2525,((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))));
        bufp->chgCData(oldp+2526,(((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_rd)
                                    ? (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B)
                                    : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A))),8);
        bufp->chgBit(oldp+2527,((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state))));
        bufp->chgCData(oldp+2528,(VL_LTS_III(6, 0U, 
                                             (0x3fU 
                                              & (IData)(
                                                        (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__p_reg 
                                                         >> 1U))))),8);
        bufp->chgBit(oldp+2529,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                       >> 1U))));
        bufp->chgCData(oldp+2530,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__inElem_reg_234),4);
        bufp->chgIData(oldp+2531,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__inElem_reg_234),25);
        bufp->chgIData(oldp+2532,((0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__W_packed_V_reg_239)))),18);
        bufp->chgQData(oldp+2533,((0x7ffffffffffULL 
                                   & VL_MULS_QQQ(43, 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__a_reg)), 
                                                 (0x7ffffffffffULL 
                                                  & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__b_reg))))),43);
        bufp->chgQData(oldp+2535,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__m_reg),43);
        bufp->chgIData(oldp+2537,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__a_reg),25);
        bufp->chgIData(oldp+2538,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__b_reg),18);
        bufp->chgQData(oldp+2539,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__mac_muladd_2ns_2s_7s_7_4_1_U1__DOT__MVAU_hls_3_mac_muladd_2ns_2s_7s_7_4_1_DSP48_0_U__DOT__p_reg),48);
        bufp->chgCData(oldp+2541,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state),2);
        bufp->chgCData(oldp+2542,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A),8);
        bufp->chgCData(oldp+2543,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B),8);
        bufp->chgBit(oldp+2544,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+2545,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+2546,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr)) 
                                 & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+2547,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+2548,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))));
        bufp->chgCData(oldp+2549,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state),2);
        bufp->chgCData(oldp+2550,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_A),8);
        bufp->chgCData(oldp+2551,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_payload_B),8);
        bufp->chgBit(oldp+2552,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+2553,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+2554,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr)) 
                                 & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+2555,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+2556,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))));
        bufp->chgCData(oldp+2557,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state),2);
        bufp->chgCData(oldp+2558,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_A),8);
        bufp->chgCData(oldp+2559,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_payload_B),8);
        bufp->chgBit(oldp+2560,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_rd));
        bufp->chgBit(oldp+2561,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr));
        bufp->chgBit(oldp+2562,(((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr)) 
                                 & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)))));
        bufp->chgBit(oldp+2563,(((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                 & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr))));
        bufp->chgBit(oldp+2564,((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state))));
        bufp->chgBit(oldp+2565,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__awready));
        bufp->chgBit(oldp+2566,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__wready));
        bufp->chgBit(oldp+2567,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__arready));
        bufp->chgCData(oldp+2568,((0xffU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__ip_wdata_wide)),8);
        bufp->chgIData(oldp+2569,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__ip_wdata_wide),32);
        bufp->chgBit(oldp+2570,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Wr1));
        bufp->chgBit(oldp+2571,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs1));
        bufp->chgCData(oldp+2572,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data1),8);
        bufp->chgBit(oldp+2573,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure));
        bufp->chgCData(oldp+2574,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt),3);
        bufp->chgIData(oldp+2575,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BDat),32);
        bufp->chgCData(oldp+2576,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__unnamedblk1__DOT__acnt),3);
        bufp->chgBit(oldp+2577,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__unnamedblk1__DOT__rdy));
        bufp->chgCData(oldp+2578,((3U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srlo))),2);
        bufp->chgCData(oldp+2579,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt),7);
        bufp->chgCData(oldp+2580,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BDat),2);
        bufp->chgCData(oldp+2581,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__unnamedblk1__DOT__acnt),7);
        bufp->chgBit(oldp+2582,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__unnamedblk1__DOT__rdy));
        bufp->chgCData(oldp+2583,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__count),6);
        bufp->chgCData(oldp+2584,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__maxcount_reg),6);
        bufp->chgBit(oldp+2585,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__i_b_reg));
        bufp->chgBit(oldp+2586,((1U & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                          >> 1U)))));
        bufp->chgCData(oldp+2587,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr),5);
        bufp->chgCData(oldp+2588,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__a_),5);
        bufp->chgQData(oldp+2589,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[0]),40);
        bufp->chgQData(oldp+2591,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[1]),40);
        bufp->chgQData(oldp+2593,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[2]),40);
        bufp->chgQData(oldp+2595,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[3]),40);
        bufp->chgQData(oldp+2597,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[4]),40);
        bufp->chgQData(oldp+2599,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[5]),40);
        bufp->chgQData(oldp+2601,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[6]),40);
        bufp->chgQData(oldp+2603,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[7]),40);
        bufp->chgQData(oldp+2605,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[8]),40);
        bufp->chgQData(oldp+2607,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[9]),40);
        bufp->chgQData(oldp+2609,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[10]),40);
        bufp->chgQData(oldp+2611,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[11]),40);
        bufp->chgQData(oldp+2613,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[12]),40);
        bufp->chgQData(oldp+2615,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[13]),40);
        bufp->chgQData(oldp+2617,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[14]),40);
        bufp->chgQData(oldp+2619,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[15]),40);
        bufp->chgQData(oldp+2621,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[16]),40);
        bufp->chgQData(oldp+2623,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[17]),40);
        bufp->chgQData(oldp+2625,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[18]),40);
        bufp->chgQData(oldp+2627,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[19]),40);
        bufp->chgQData(oldp+2629,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[20]),40);
        bufp->chgQData(oldp+2631,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[21]),40);
        bufp->chgQData(oldp+2633,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[22]),40);
        bufp->chgQData(oldp+2635,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[23]),40);
        bufp->chgQData(oldp+2637,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[24]),40);
        bufp->chgQData(oldp+2639,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[25]),40);
        bufp->chgQData(oldp+2641,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[26]),40);
        bufp->chgQData(oldp+2643,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[27]),40);
        bufp->chgQData(oldp+2645,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[28]),40);
        bufp->chgQData(oldp+2647,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[29]),40);
        bufp->chgQData(oldp+2649,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__srl[30]),40);
        bufp->chgCData(oldp+2651,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__state),2);
        bufp->chgBit(oldp+2652,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr_full));
        bufp->chgBit(oldp+2653,((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_0__DOT__inst__DOT__impl__DOT__addr))));
        bufp->chgCData(oldp+2654,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__count),2);
        bufp->chgCData(oldp+2655,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__maxcount_reg),2);
        bufp->chgBit(oldp+2656,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__i_b_reg));
        bufp->chgBit(oldp+2657,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy)))));
        bufp->chgBit(oldp+2658,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr));
        bufp->chgBit(oldp+2659,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_));
        bufp->chgBit(oldp+2660,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__a_));
        bufp->chgBit(oldp+2661,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_));
        bufp->chgIData(oldp+2662,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__srl[0]),32);
        bufp->chgBit(oldp+2663,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__shift_en_o_));
        bufp->chgIData(oldp+2664,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__srlo_),32);
        bufp->chgCData(oldp+2665,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state),2);
        bufp->chgCData(oldp+2666,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state_),2);
        bufp->chgBit(oldp+2667,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_full_));
        bufp->chgBit(oldp+2668,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr_full));
        bufp->chgBit(oldp+2669,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__addr)))));
        bufp->chgBit(oldp+2670,((0U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_1__DOT__inst__DOT__impl__DOT__state_))));
        bufp->chgCData(oldp+2671,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__count),2);
        bufp->chgCData(oldp+2672,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__maxcount_reg),2);
        bufp->chgBit(oldp+2673,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__i_b_reg));
        bufp->chgBit(oldp+2674,((1U & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                          >> 1U)))));
        bufp->chgBit(oldp+2675,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr));
        bufp->chgBit(oldp+2676,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_));
        bufp->chgBit(oldp+2677,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__a_));
        bufp->chgBit(oldp+2678,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_));
        bufp->chgWData(oldp+2679,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srl[0]),128);
        bufp->chgBit(oldp+2683,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_));
        bufp->chgWData(oldp+2684,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_),128);
        bufp->chgCData(oldp+2688,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state),2);
        bufp->chgCData(oldp+2689,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_),2);
        bufp->chgBit(oldp+2690,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_full_));
        bufp->chgBit(oldp+2691,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_full));
        bufp->chgBit(oldp+2692,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr)))));
        bufp->chgBit(oldp+2693,((0U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_))));
        bufp->chgCData(oldp+2694,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__count),2);
        bufp->chgCData(oldp+2695,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__maxcount_reg),2);
        bufp->chgBit(oldp+2696,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__i_b_reg));
        bufp->chgBit(oldp+2697,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__BRdy)))));
        bufp->chgBit(oldp+2698,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr));
        bufp->chgBit(oldp+2699,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_));
        bufp->chgBit(oldp+2700,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__a_));
        bufp->chgBit(oldp+2701,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_));
        bufp->chgCData(oldp+2702,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srl[0]),8);
        bufp->chgBit(oldp+2703,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__shift_en_o_));
        bufp->chgCData(oldp+2704,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__srlo_),8);
        bufp->chgCData(oldp+2705,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state),2);
        bufp->chgCData(oldp+2706,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state_),2);
        bufp->chgBit(oldp+2707,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_full_));
        bufp->chgBit(oldp+2708,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr_full));
        bufp->chgBit(oldp+2709,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__addr)))));
        bufp->chgBit(oldp+2710,((0U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_3__DOT__inst__DOT__impl__DOT__state_))));
        bufp->chgCData(oldp+2711,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__count),2);
        bufp->chgCData(oldp+2712,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__maxcount_reg),2);
        bufp->chgBit(oldp+2713,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__i_b_reg));
        bufp->chgBit(oldp+2714,((1U & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                          >> 1U)))));
        bufp->chgBit(oldp+2715,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr));
        bufp->chgBit(oldp+2716,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_));
        bufp->chgBit(oldp+2717,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__a_));
        bufp->chgBit(oldp+2718,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_));
        bufp->chgWData(oldp+2719,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srl[0]),128);
        bufp->chgBit(oldp+2723,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_));
        bufp->chgWData(oldp+2724,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_),128);
        bufp->chgCData(oldp+2728,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state),2);
        bufp->chgCData(oldp+2729,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_),2);
        bufp->chgBit(oldp+2730,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_full_));
        bufp->chgBit(oldp+2731,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_full));
        bufp->chgBit(oldp+2732,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr)))));
        bufp->chgBit(oldp+2733,((0U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_))));
        bufp->chgCData(oldp+2734,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__count),2);
        bufp->chgCData(oldp+2735,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__maxcount_reg),2);
        bufp->chgBit(oldp+2736,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__i_b_reg));
        bufp->chgBit(oldp+2737,((1U & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                          >> 1U)))));
        bufp->chgBit(oldp+2738,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr));
        bufp->chgBit(oldp+2739,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_));
        bufp->chgBit(oldp+2740,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__a_));
        bufp->chgBit(oldp+2741,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_));
        bufp->chgCData(oldp+2742,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srl[0]),8);
        bufp->chgBit(oldp+2743,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_));
        bufp->chgCData(oldp+2744,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_),8);
        bufp->chgCData(oldp+2745,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state),2);
        bufp->chgCData(oldp+2746,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_),2);
        bufp->chgBit(oldp+2747,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_full_));
        bufp->chgBit(oldp+2748,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_full));
        bufp->chgBit(oldp+2749,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr)))));
        bufp->chgBit(oldp+2750,((0U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_))));
        bufp->chgCData(oldp+2751,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__count),2);
        bufp->chgCData(oldp+2752,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__maxcount_reg),2);
        bufp->chgBit(oldp+2753,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__i_b_reg));
        bufp->chgBit(oldp+2754,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr));
        bufp->chgBit(oldp+2755,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__a_));
        bufp->chgCData(oldp+2756,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__srl[0]),8);
        bufp->chgCData(oldp+2757,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__state),2);
        bufp->chgBit(oldp+2758,(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr_full));
        bufp->chgBit(oldp+2759,((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__addr)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgBit(oldp+2760,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__bvalid));
        bufp->chgCData(oldp+2761,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__bresp),2);
        bufp->chgBit(oldp+2762,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__rvalid));
        bufp->chgCData(oldp+2763,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__rresp),2);
        bufp->chgIData(oldp+2764,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__rdata),32);
        bufp->chgCData(oldp+2765,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state),2);
        bufp->chgBit(oldp+2766,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__bvalid));
        bufp->chgCData(oldp+2767,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__bresp),2);
        bufp->chgBit(oldp+2768,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__rvalid));
        bufp->chgCData(oldp+2769,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__rresp),2);
        bufp->chgIData(oldp+2770,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__rdata),32);
        bufp->chgCData(oldp+2771,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state),2);
        bufp->chgBit(oldp+2772,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__bvalid));
        bufp->chgCData(oldp+2773,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__bresp),2);
        bufp->chgBit(oldp+2774,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__rvalid));
        bufp->chgCData(oldp+2775,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__rresp),2);
        bufp->chgIData(oldp+2776,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__rdata),32);
        bufp->chgCData(oldp+2777,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state),2);
        bufp->chgBit(oldp+2778,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__bvalid));
        bufp->chgCData(oldp+2779,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__bresp),2);
        bufp->chgBit(oldp+2780,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__rvalid));
        bufp->chgCData(oldp+2781,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__rresp),2);
        bufp->chgIData(oldp+2782,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__rdata),32);
        bufp->chgCData(oldp+2783,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgWData(oldp+2784,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2),1280);
        bufp->chgBit(oldp+2824,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_ce));
        bufp->chgBit(oldp+2825,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_we));
        bufp->chgBit(oldp+2826,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2));
        bufp->chgBit(oldp+2827,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack));
        VL_SHIFTR_WWI(1280,1280,32, __Vtemp_4, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2, 
                      VL_SHIFTL_III(32,32,32, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__fold__DOT__internal_rfold), 5U));
        bufp->chgIData(oldp+2828,(__Vtemp_4[0U]),32);
        bufp->chgBit(oldp+2829,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en));
        bufp->chgBit(oldp+2830,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback));
        bufp->chgCData(oldp+2831,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [0U].__PVT__val),6);
        bufp->chgBit(oldp+2832,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [0U].__PVT__lst));
        bufp->chgCData(oldp+2833,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [1U].__PVT__val),6);
        bufp->chgBit(oldp+2834,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [1U].__PVT__lst));
        bufp->chgCData(oldp+2835,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [2U].__PVT__val),6);
        bufp->chgBit(oldp+2836,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [2U].__PVT__lst));
        bufp->chgBit(oldp+2837,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
        bufp->chgCData(oldp+2838,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                  .__PVT__val),6);
        bufp->chgBit(oldp+2839,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                .__PVT__lst));
        bufp->chgCData(oldp+2840,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt
                                  .__PVT__val),6);
        bufp->chgBit(oldp+2841,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt
                                .__PVT__lst));
        bufp->chgCData(oldp+2842,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [1U].__PVT__val),6);
        bufp->chgWData(oldp+2843,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2),128);
        bufp->chgBit(oldp+2847,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_ce));
        bufp->chgBit(oldp+2848,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_we));
        bufp->chgBit(oldp+2849,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2));
        bufp->chgBit(oldp+2850,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack));
        VL_SHIFTR_WWI(128,128,32, __Vtemp_5, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2, 
                      VL_SHIFTL_III(32,32,32, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__fold__DOT__internal_rfold), 5U));
        bufp->chgIData(oldp+2851,(__Vtemp_5[0U]),32);
        bufp->chgBit(oldp+2852,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en));
        bufp->chgBit(oldp+2853,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback));
        bufp->chgCData(oldp+2854,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [0U].__PVT__val),6);
        bufp->chgBit(oldp+2855,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [0U].__PVT__lst));
        bufp->chgCData(oldp+2856,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [1U].__PVT__val),6);
        bufp->chgBit(oldp+2857,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [1U].__PVT__lst));
        bufp->chgCData(oldp+2858,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [2U].__PVT__val),6);
        bufp->chgBit(oldp+2859,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [2U].__PVT__lst));
        bufp->chgBit(oldp+2860,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
        bufp->chgCData(oldp+2861,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                  .__PVT__val),6);
        bufp->chgBit(oldp+2862,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                .__PVT__lst));
        bufp->chgCData(oldp+2863,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt
                                  .__PVT__val),6);
        bufp->chgBit(oldp+2864,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt
                                .__PVT__lst));
        bufp->chgCData(oldp+2865,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [1U].__PVT__val),6);
        bufp->chgWData(oldp+2866,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2),128);
        bufp->chgBit(oldp+2870,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_ce));
        bufp->chgBit(oldp+2871,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_we));
        bufp->chgBit(oldp+2872,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2));
        bufp->chgBit(oldp+2873,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack));
        VL_SHIFTR_WWI(128,128,32, __Vtemp_6, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2, 
                      VL_SHIFTL_III(32,32,32, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__fold__DOT__internal_rfold), 5U));
        bufp->chgIData(oldp+2874,(__Vtemp_6[0U]),32);
        bufp->chgBit(oldp+2875,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en));
        bufp->chgBit(oldp+2876,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback));
        bufp->chgCData(oldp+2877,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [0U].__PVT__val),6);
        bufp->chgBit(oldp+2878,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [0U].__PVT__lst));
        bufp->chgCData(oldp+2879,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [1U].__PVT__val),6);
        bufp->chgBit(oldp+2880,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [1U].__PVT__lst));
        bufp->chgCData(oldp+2881,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [2U].__PVT__val),6);
        bufp->chgBit(oldp+2882,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [2U].__PVT__lst));
        bufp->chgBit(oldp+2883,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
        bufp->chgCData(oldp+2884,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                  .__PVT__val),6);
        bufp->chgBit(oldp+2885,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                .__PVT__lst));
        bufp->chgCData(oldp+2886,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt
                                  .__PVT__val),6);
        bufp->chgBit(oldp+2887,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt
                                .__PVT__lst));
        bufp->chgCData(oldp+2888,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [1U].__PVT__val),6);
        bufp->chgCData(oldp+2889,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2),8);
        bufp->chgBit(oldp+2890,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_ce));
        bufp->chgBit(oldp+2891,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_we));
        bufp->chgBit(oldp+2892,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2));
        bufp->chgBit(oldp+2893,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack));
        bufp->chgIData(oldp+2894,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2),32);
        bufp->chgBit(oldp+2895,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en));
        bufp->chgBit(oldp+2896,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback));
        bufp->chgCData(oldp+2897,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [0U].__PVT__val),6);
        bufp->chgBit(oldp+2898,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [0U].__PVT__lst));
        bufp->chgCData(oldp+2899,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [1U].__PVT__val),6);
        bufp->chgBit(oldp+2900,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [1U].__PVT__lst));
        bufp->chgCData(oldp+2901,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [2U].__PVT__val),6);
        bufp->chgBit(oldp+2902,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                [2U].__PVT__lst));
        bufp->chgBit(oldp+2903,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
        bufp->chgCData(oldp+2904,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                  .__PVT__val),6);
        bufp->chgBit(oldp+2905,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff
                                .__PVT__lst));
        bufp->chgCData(oldp+2906,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt
                                  .__PVT__val),6);
        bufp->chgBit(oldp+2907,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_nxt
                                .__PVT__lst));
        bufp->chgCData(oldp+2908,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                                  [1U].__PVT__val),6);
    }
    bufp->chgBit(oldp+2909,(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Eclock));
    bufp->chgBit(oldp+2910,(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Ereset));
    bufp->chgCData(oldp+2911,(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Eaxis_block_sigs),3);
    bufp->chgCData(oldp+2912,(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Einst_idle_sigs),2);
    bufp->chgBit(oldp+2913,(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Einst_block_sigs));
    bufp->chgBit(oldp+2914,(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Eblock));
    bufp->chgBit(oldp+2915,(vlSelf->MVAU_hls_0_regslice_both_w1__02Eap_clk));
    bufp->chgBit(oldp+2916,(vlSelf->MVAU_hls_0_regslice_both_w1__02Eap_rst));
    bufp->chgBit(oldp+2917,(vlSelf->MVAU_hls_0_regslice_both_w1__02Edata_in));
    bufp->chgBit(oldp+2918,(vlSelf->MVAU_hls_0_regslice_both_w1__02Evld_in));
    bufp->chgBit(oldp+2919,(vlSelf->MVAU_hls_0_regslice_both_w1__02Eack_in));
    bufp->chgBit(oldp+2920,(vlSelf->MVAU_hls_0_regslice_both_w1__02Edata_out));
    bufp->chgBit(oldp+2921,(vlSelf->MVAU_hls_0_regslice_both_w1__02Evld_out));
    bufp->chgBit(oldp+2922,(vlSelf->MVAU_hls_0_regslice_both_w1__02Eack_out));
    bufp->chgBit(oldp+2923,(vlSelf->MVAU_hls_0_regslice_both_w1__02Eapdone_blk));
    bufp->chgBit(oldp+2924,(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Eclock));
    bufp->chgBit(oldp+2925,(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Ereset));
    bufp->chgCData(oldp+2926,(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Eaxis_block_sigs),3);
    bufp->chgCData(oldp+2927,(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Einst_idle_sigs),2);
    bufp->chgBit(oldp+2928,(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Einst_block_sigs));
    bufp->chgBit(oldp+2929,(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Eblock));
    bufp->chgBit(oldp+2930,(vlSelf->MVAU_hls_1_regslice_both_w1__02Eap_clk));
    bufp->chgBit(oldp+2931,(vlSelf->MVAU_hls_1_regslice_both_w1__02Eap_rst));
    bufp->chgBit(oldp+2932,(vlSelf->MVAU_hls_1_regslice_both_w1__02Edata_in));
    bufp->chgBit(oldp+2933,(vlSelf->MVAU_hls_1_regslice_both_w1__02Evld_in));
    bufp->chgBit(oldp+2934,(vlSelf->MVAU_hls_1_regslice_both_w1__02Eack_in));
    bufp->chgBit(oldp+2935,(vlSelf->MVAU_hls_1_regslice_both_w1__02Edata_out));
    bufp->chgBit(oldp+2936,(vlSelf->MVAU_hls_1_regslice_both_w1__02Evld_out));
    bufp->chgBit(oldp+2937,(vlSelf->MVAU_hls_1_regslice_both_w1__02Eack_out));
    bufp->chgBit(oldp+2938,(vlSelf->MVAU_hls_1_regslice_both_w1__02Eapdone_blk));
    bufp->chgBit(oldp+2939,(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Eclock));
    bufp->chgBit(oldp+2940,(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Ereset));
    bufp->chgCData(oldp+2941,(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Eaxis_block_sigs),3);
    bufp->chgCData(oldp+2942,(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Einst_idle_sigs),2);
    bufp->chgBit(oldp+2943,(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Einst_block_sigs));
    bufp->chgBit(oldp+2944,(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Eblock));
    bufp->chgBit(oldp+2945,(vlSelf->MVAU_hls_2_regslice_both_w1__02Eap_clk));
    bufp->chgBit(oldp+2946,(vlSelf->MVAU_hls_2_regslice_both_w1__02Eap_rst));
    bufp->chgBit(oldp+2947,(vlSelf->MVAU_hls_2_regslice_both_w1__02Edata_in));
    bufp->chgBit(oldp+2948,(vlSelf->MVAU_hls_2_regslice_both_w1__02Evld_in));
    bufp->chgBit(oldp+2949,(vlSelf->MVAU_hls_2_regslice_both_w1__02Eack_in));
    bufp->chgBit(oldp+2950,(vlSelf->MVAU_hls_2_regslice_both_w1__02Edata_out));
    bufp->chgBit(oldp+2951,(vlSelf->MVAU_hls_2_regslice_both_w1__02Evld_out));
    bufp->chgBit(oldp+2952,(vlSelf->MVAU_hls_2_regslice_both_w1__02Eack_out));
    bufp->chgBit(oldp+2953,(vlSelf->MVAU_hls_2_regslice_both_w1__02Eapdone_blk));
    bufp->chgBit(oldp+2954,(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eclock));
    bufp->chgBit(oldp+2955,(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Ereset));
    bufp->chgCData(oldp+2956,(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eaxis_block_sigs),3);
    bufp->chgBit(oldp+2957,(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Einst_idle_sigs));
    bufp->chgBit(oldp+2958,(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Einst_block_sigs));
    bufp->chgBit(oldp+2959,(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eblock));
    bufp->chgBit(oldp+2960,(vlSelf->MVAU_hls_3_regslice_both_w1__02Eap_clk));
    bufp->chgBit(oldp+2961,(vlSelf->MVAU_hls_3_regslice_both_w1__02Eap_rst));
    bufp->chgBit(oldp+2962,(vlSelf->MVAU_hls_3_regslice_both_w1__02Edata_in));
    bufp->chgBit(oldp+2963,(vlSelf->MVAU_hls_3_regslice_both_w1__02Evld_in));
    bufp->chgBit(oldp+2964,(vlSelf->MVAU_hls_3_regslice_both_w1__02Eack_in));
    bufp->chgBit(oldp+2965,(vlSelf->MVAU_hls_3_regslice_both_w1__02Edata_out));
    bufp->chgBit(oldp+2966,(vlSelf->MVAU_hls_3_regslice_both_w1__02Evld_out));
    bufp->chgBit(oldp+2967,(vlSelf->MVAU_hls_3_regslice_both_w1__02Eack_out));
    bufp->chgBit(oldp+2968,(vlSelf->MVAU_hls_3_regslice_both_w1__02Eapdone_blk));
    bufp->chgBit(oldp+2969,(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__monitor_find_block));
    bufp->chgBit(oldp+2970,(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__MVAU_hls_0_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block));
    bufp->chgBit(oldp+2971,(((IData)(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__MVAU_hls_0_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block) 
                             & (IData)(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__MVAU_hls_0_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block))));
    bufp->chgBit(oldp+2972,(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__monitor_find_block));
    bufp->chgBit(oldp+2973,(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__MVAU_hls_1_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block));
    bufp->chgBit(oldp+2974,(((IData)(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__MVAU_hls_1_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block) 
                             & (IData)(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__MVAU_hls_1_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block))));
    bufp->chgBit(oldp+2975,(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__monitor_find_block));
    bufp->chgBit(oldp+2976,(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__MVAU_hls_2_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block));
    bufp->chgBit(oldp+2977,(((IData)(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__MVAU_hls_2_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block) 
                             & (IData)(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__MVAU_hls_2_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block))));
    bufp->chgBit(oldp+2978,(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__DOT__monitor_find_block));
    bufp->chgBit(oldp+2979,((IData)((0U != (IData)(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eaxis_block_sigs)))));
    bufp->chgBit(oldp+2980,(vlSelf->finn_design_tb__DOT__ap_clk));
    bufp->chgBit(oldp+2981,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg));
    bufp->chgBit(oldp+2982,(((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_done_int) 
                             | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache)))));
    bufp->chgBit(oldp+2983,(((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter2_fsm) 
                             & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter1_fsm) 
                                & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                                   & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_CS_iter0_fsm))))));
    bufp->chgCData(oldp+2984,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm),4);
    bufp->chgBit(oldp+2985,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
                                   >> 1U))));
    bufp->chgBit(oldp+2986,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
                                   >> 2U))));
    bufp->chgBit(oldp+2987,((1U & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__ap_done_int) 
                                      | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache)))))));
    bufp->chgBit(oldp+2988,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__ap_CS_fsm) 
                                   >> 3U))));
    bufp->chgBit(oldp+2989,((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg)) 
                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_8)))));
    bufp->chgBit(oldp+2990,((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_5) 
                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg))) 
                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))));
    bufp->chgBit(oldp+2991,((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT____VdfgRegularize_he2dcc2f6_0_7) 
                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30_ap_start_reg))) 
                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)))));
    bufp->chgBit(oldp+2992,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int));
    bufp->chgBit(oldp+2993,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_30__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache));
    bufp->chgBit(oldp+2994,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg));
    bufp->chgBit(oldp+2995,(((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int) 
                             | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache)))));
    bufp->chgBit(oldp+2996,(((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                             & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter6_fsm) 
                                & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter5_fsm) 
                                   & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm) 
                                      & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm) 
                                         & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                                            & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
                                               & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm)))))))))));
    bufp->chgCData(oldp+2997,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm),4);
    bufp->chgBit(oldp+2998,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
                                   >> 1U))));
    bufp->chgBit(oldp+2999,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
                                   >> 2U))));
    bufp->chgBit(oldp+3000,((1U & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int) 
                                      | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache)))))));
    bufp->chgBit(oldp+3001,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm) 
                                   >> 3U))));
    bufp->chgBit(oldp+3002,((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                   | (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                       & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1))) 
                                      | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1)))))));
    bufp->chgBit(oldp+3003,((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_hf5dfd706_0_7) 
                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg))) 
                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))));
    bufp->chgBit(oldp+3004,((1U & ((~ ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                       & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                          >> 1U))) 
                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY)))));
    bufp->chgBit(oldp+3005,((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
                                       & ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)) 
                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)))) 
                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)))));
    bufp->chgBit(oldp+3006,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int));
    bufp->chgBit(oldp+3007,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache));
    bufp->chgBit(oldp+3008,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg));
    bufp->chgBit(oldp+3009,(((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int) 
                             | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache)))));
    bufp->chgBit(oldp+3010,(((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                             & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter6_fsm) 
                                & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter5_fsm) 
                                   & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter4_fsm) 
                                      & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm) 
                                         & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                                            & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
                                               & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                                  & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm)))))))))));
    bufp->chgCData(oldp+3011,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm),4);
    bufp->chgBit(oldp+3012,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
                                   >> 1U))));
    bufp->chgBit(oldp+3013,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
                                   >> 2U))));
    bufp->chgBit(oldp+3014,((1U & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_done_int) 
                                      | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache)))))));
    bufp->chgBit(oldp+3015,((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm) 
                                   >> 3U))));
    bufp->chgBit(oldp+3016,((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                                   | (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                       & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1))) 
                                      | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                                         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1)))))));
    bufp->chgBit(oldp+3017,((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT____VdfgRegularize_h5e42ee2d_0_8) 
                                       & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg))) 
                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))));
    bufp->chgBit(oldp+3018,((1U & ((~ ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                       & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                          >> 1U))) 
                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY)))));
    bufp->chgBit(oldp+3019,((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm) 
                                       & ((0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)) 
                                          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)))) 
                                   | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)))));
    bufp->chgBit(oldp+3020,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int));
    bufp->chgBit(oldp+3021,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache));
    bufp->chgBit(oldp+3022,((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter3_fsm) 
                              >> 1U) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state4_pp0_stage0_iter3))));
    bufp->chgBit(oldp+3023,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_loop_init));
    bufp->chgBit(oldp+3024,(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__flow_control_loop_pipe_no_ap_cont_U__DOT__ap_done_cache));
}

void VMVAU_hls_0___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root__trace_cleanup\n"); );
    // Init
    VMVAU_hls_0___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMVAU_hls_0___024root*>(voidSelf);
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
}
