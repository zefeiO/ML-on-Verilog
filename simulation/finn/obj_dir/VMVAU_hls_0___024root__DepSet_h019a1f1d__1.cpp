// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMVAU_hls_0.h for the primary calling header

#include "VMVAU_hls_0__pch.h"
#include "VMVAU_hls_0___024root.h"

VL_INLINE_OPT void VMVAU_hls_0___024root___nba_sequent__TOP__6(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___nba_sequent__TOP__6\n"); );
    // Body
    if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                  >> 1U) & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                          | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                             & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3689_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3689;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3674_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3674;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3659_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3659;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3644_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3644;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3629_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3629;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3614_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3614;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3599_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3599;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3584_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3584;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3569_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3569;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3554_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3554;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3534_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3534;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3539_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3539;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter3_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter2_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter1_reg;
    }
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__grp_fu_2894_ce) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_108_reg_3439)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_106_reg_3429)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_104_reg_3419)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_102_reg_3409)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_100_reg_3399)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_98_reg_3389)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_96_reg_3379)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_94_reg_3369)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_116_reg_3479)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_114_reg_3469)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_112_reg_3459)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_110_reg_3449)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_120_reg_3499)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_118_reg_3489)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_122_reg_3509)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_125_reg_3524)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_126_reg_3529)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_93_reg_3364)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_91_reg_3354)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_89_reg_3344)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_87_reg_3334)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_85_reg_3324)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_83_reg_3314)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_81_reg_3304)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_79_reg_3294)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_77_reg_3284)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_75_reg_3274)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_73_reg_3264)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_71_reg_3254)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_69_reg_3244)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_67_reg_3234)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_65_reg_3224)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_1_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 4U));
    }
    if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                  >> 1U) & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                          | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                             & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3654_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3654;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3639_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3639;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3624_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3624;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3609_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3609;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3714_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3714;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3699_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3699;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3684_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3684;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3669_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3669;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3534_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3534;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3519_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3519;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3499_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3499;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3504_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3504;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3594_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3594;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3579_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3579;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3564_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3564;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3549_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3549;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter3_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter2_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter1_reg;
    }
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__grp_fu_2859_ce) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__m_reg 
            = (0x7ffffffffffULL & VL_MULS_QQQ(43, (0x7ffffffffffULL 
                                                   & VL_EXTENDS_QI(43,25, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg)), 
                                              (0x7ffffffffffULL 
                                               & VL_EXTENDS_QI(43,18, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg))));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_100_reg_3364)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U51__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_98_reg_3354)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U50__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_96_reg_3344)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U49__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_94_reg_3334)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U48__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_108_reg_3404)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U55__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_106_reg_3394)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U54__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_104_reg_3384)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U53__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_102_reg_3374)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U52__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_120_reg_3464)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U61__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_118_reg_3454)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U60__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_122_reg_3474)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U62__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_125_reg_3489)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U63__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_116_reg_3444)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U59__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_114_reg_3434)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U58__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_112_reg_3424)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U57__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_110_reg_3414)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U56__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_87_reg_3299)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U44__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_85_reg_3289)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U43__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_83_reg_3279)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U42__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_81_reg_3269)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U41__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_126_reg_3494)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U64__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_93_reg_3329)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U47__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_91_reg_3319)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U46__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_89_reg_3309)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U45__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_71_reg_3219)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U36__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_69_reg_3209)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U35__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_67_reg_3199)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U34__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_65_reg_3189)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U33__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_79_reg_3259)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U40__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_77_reg_3249)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U39__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_75_reg_3239)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U38__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__b_reg 
            = (0x3ffffU & VL_EXTENDS_II(18,2, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_73_reg_3229)));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__mac_muladd_2ns_2s_4s_5_4_1_U37__DOT__MVAU_hls_2_mac_muladd_2ns_2s_4s_5_4_1_DSP48_0_U__DOT__a_reg 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x14U));
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_sel_wr;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr;
    if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm) 
                  >> 1U) & (~ ((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
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
                                                & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6))))))))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230;
    }
    if ((IData)(((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                   >> 1U) & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter1_reg))) 
                 & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4039 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_q0;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_4034 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_q0;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_4029 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_q0;
    }
    if ((IData)(((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm) 
                   >> 1U) & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter1_reg))) 
                 & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_load_reg_4004 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_q0;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_load_reg_3999 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_q0;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_load_reg_3994 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_q0;
    }
    if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
                  >> 1U) & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                          | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                             & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3444_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3444;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3434_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3434;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3424_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3424;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3414_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3414;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3404_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3404;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3394_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3394;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3384_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3384;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3374_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3374;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3484_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3484;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3474_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3474;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3464_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3464;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3454_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3454;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3504_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3504;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3494_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3494;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3514_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3514;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3519_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3519;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3359_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3359;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3349_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3349;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3339_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3339;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3329_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3329;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207;
    }
    if ((IData)(((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
                   >> 1U) & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207))) 
                 & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3879 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3864 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3849 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3834 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3819 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3804 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3789 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3774 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3939 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3924 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3909 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3894 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3969 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3954 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3984 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3989 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3749 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3734 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3719 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3704 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3689 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3674 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3659 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3644 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3629 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3614 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3599 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3584 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3569 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3554 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3534 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3539 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 2U));
    }
    if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
                  >> 1U) & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                                >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                          | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                             & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3369_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3369;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3359_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3359;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3349_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3349;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3339_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3339;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3409_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3409;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3399_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3399;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3389_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3389;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3379_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3379;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3469_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3469;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3459_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3459;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3479_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3479;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3484_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3484;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3449_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3449;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3439_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3439;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3429_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3429;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3419_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3419;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter2_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter1_reg;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172;
    }
    if ((IData)(((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm) 
                   >> 1U) & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172))) 
                 & (~ (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                        >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                                  | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                     & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_38_reg_3784 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_36_reg_3769 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_34_reg_3754 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_32_reg_3739 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_46_reg_3844 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_44_reg_3829 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_42_reg_3814 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_40_reg_3799 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_58_reg_3934 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_56_reg_3919 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_60_reg_3949 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_61_reg_3954 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_54_reg_3904 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_52_reg_3889 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_50_reg_3874 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_48_reg_3859 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_21_reg_3654 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_19_reg_3639 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_17_reg_3624 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_15_reg_3609 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_29_reg_3714 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_27_reg_3699 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_25_reg_3684 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_23_reg_3669 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_5_reg_3534 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_3_reg_3519 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_reg_3499 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_1_reg_3504 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_13_reg_3594 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_11_reg_3579 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_9_reg_3564 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__r_V_7_reg_3549 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                     >> 0xeU));
    }
    if (((~ ((((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm) 
                 >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io) 
                           | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5) 
                              & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                    >> 1U))))) | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                                                  & (0x40U 
                                                     != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)))) 
              | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
                 & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1)))) 
             | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm) 
                 >> 1U) & (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io) 
                            | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk)) 
                           | ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                                  >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6)))))) 
         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230 
            = (0x40U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_sig_allocacmp_i_1));
    }
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_ce0) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_q0 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_U__DOT__rom0
            [(0x3fU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3202)];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_q0 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_U__DOT__rom0
            [(0x3fU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3202)];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_q0 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_U__DOT__rom0
            [(0x3fU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3202)];
    }
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_ce0) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_q0 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_2_U__DOT__rom0
            [(0x3fU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3167)];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_q0 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_1_U__DOT__rom0
            [(0x3fU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3167)];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_q0 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_ZL7threshs_0_U__DOT__rom0
            [(0x3fU & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3167)];
    }
    if ((((~ ((((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                   & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                  & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) 
              | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                  >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                            | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                               & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm)) 
         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3444 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_108_reg_3439 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3434 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_106_reg_3429 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3424 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_104_reg_3419 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3414 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_102_reg_3409 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3404 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_100_reg_3399 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3394 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_98_reg_3389 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3384 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_96_reg_3379 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3374 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_94_reg_3369 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3484 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_116_reg_3479 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3474 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_114_reg_3469 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3464 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_112_reg_3459 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3454 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_110_reg_3449 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3504 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_120_reg_3499 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3494 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_118_reg_3489 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3514 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_122_reg_3509 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3519 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_125_reg_3524 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3359 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_126_reg_3529 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3349 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_93_reg_3364 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3339 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_91_reg_3354 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3329 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_89_reg_3344 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3319 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_87_reg_3334 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3309 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_85_reg_3324 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3299 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_83_reg_3314 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3289 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_81_reg_3304 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3279 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_79_reg_3294 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3269 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_77_reg_3284 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3259 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_75_reg_3274 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3249 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_73_reg_3264 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3239 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_71_reg_3254 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3229 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_69_reg_3244 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3214 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_67_reg_3234 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3219 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_65_reg_3224 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 4U));
    }
    if ((((~ ((((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                   & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
               | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                  & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) 
              | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                  >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                            | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                               & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
          & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm)) 
         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_101_reg_3369 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_100_reg_3364 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_99_reg_3359 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_98_reg_3354 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_97_reg_3349 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_96_reg_3344 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_95_reg_3339 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_94_reg_3334 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_109_reg_3409 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_108_reg_3404 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_107_reg_3399 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_106_reg_3394 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_105_reg_3389 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_104_reg_3384 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_103_reg_3379 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_102_reg_3374 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_121_reg_3469 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_120_reg_3464 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_119_reg_3459 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_118_reg_3454 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_123_reg_3479 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_122_reg_3474 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_124_reg_3484 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_125_reg_3489 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_117_reg_3449 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_116_reg_3444 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_115_reg_3439 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_114_reg_3434 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_113_reg_3429 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_112_reg_3424 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_111_reg_3419 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_110_reg_3414 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[2U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_84_reg_3284 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_87_reg_3299 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_82_reg_3274 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_85_reg_3289 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_80_reg_3264 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_83_reg_3279 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_78_reg_3254 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_81_reg_3269 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_92_reg_3324 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_126_reg_3494 
            = (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[3U] 
               >> 0x1eU);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_90_reg_3314 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_93_reg_3329 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_88_reg_3304 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_91_reg_3319 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_86_reg_3294 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_89_reg_3309 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U] 
                     >> 0x14U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_68_reg_3204 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0xaU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_71_reg_3219 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x10U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_66_reg_3194 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 6U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_69_reg_3209 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0xcU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_reg_3179 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_67_reg_3199 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 8U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_64_reg_3184 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 2U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_65_reg_3189 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 4U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_76_reg_3244 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x1aU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_79_reg_3259 
            = (3U & vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[1U]);
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_74_reg_3234 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x16U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_77_reg_3249 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x1cU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_72_reg_3224 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x12U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_75_reg_3239 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x18U));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_70_reg_3214 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0xeU));
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__local_temp_V_73_reg_3229 
            = (3U & (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__weights_V_TDATA_int_regslice[0U] 
                     >> 0x14U));
    }
    if (((((~ ((((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                 | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                    & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) 
               | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                   >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                             | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                                & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm)) 
          & (0U == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3)) 
         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) {
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[3U];
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[3U];
        }
    }
    if (((((~ ((((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
                 | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                    & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
                | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                   & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) 
               | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                   >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                             | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                                & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm)) 
          & (0U == vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3)) 
         & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) {
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[3U];
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__p_Val2_s_fu_312[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[3U];
        }
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter4_reg)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln290_reg_259_pp0_iter4_reg));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln249_reg_230_pp0_iter3_reg)) 
           & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__icmp_ln290_reg_259));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state;
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
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd;
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
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_rd;
    if (((~ ((((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
               | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                  & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
              | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) 
             | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                 >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                           | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg)) 
                              & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_ready;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3202 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207 
            = (0x40U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1));
    }
    if (((~ ((((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg)) 
               | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state)) 
                  & (0x40U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1)))) 
              | ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_predicate_op30_read_state1) 
                 & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) 
             | (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm) 
                 >> 1U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_block_state8_io) 
                           | ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg)) 
                              & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_out_V_TREADY))))))) 
         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_loop_exit_ready_pp0_iter1_reg 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_ready;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__nf_3_reg_3167 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_nf_3;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172 
            = (0x40U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_sig_allocacmp_i_1));
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs2));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    if (vlSelf->finn_design_tb__DOT__ap_rst_n) {
        if (vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo = 0U;
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        if ((1U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_out_V_TDATA;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))) {
        if ((1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                   & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_out_V_TDATA;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                          & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)) 
                    & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                       >> 1U))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U)));
        if ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state))) {
            if ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))) {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ 
                    = ((0U >= (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr))
                        ? vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srl
                       [vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr]
                        : 0U);
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ 
                    = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U);
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 2U;
            }
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__srlo_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr))));
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state5_io 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op56_write_state5));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_block_state6_io 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_predicate_op59_write_state6));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U_apdone_blk 
        = (((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_6__DOT__inst__DOT__impl__DOT__i_b_reg) 
            & (3U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state))) 
           | (1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__regslice_both_out_V_U__DOT__B_V_data_1_state)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter0_fsm 
        = ((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__ap_rst_n))) 
           || (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter0_fsm));
    if (((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[0U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[1U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[2U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[3U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[3U];
    }
    if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr)) 
         & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[0U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[1U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[2U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[3U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[3U];
    }
    if (((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)) 
         & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[0U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[1U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[2U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_B[3U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[3U];
    }
    if (((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr)) 
         & (1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state)))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[0U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[1U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[2U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_payload_A[3U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[3U];
    }
    if (vlSelf->finn_design_tb__DOT__ap_rst_n) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter2_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter3_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter3_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter1_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter2_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter2_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter5_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_NS_iter4_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter1_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter1_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter7_fsm;
        if ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg = 1U;
        } else if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_ready) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg = 0U;
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter7_fsm;
        if ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg = 1U;
        } else if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_ready) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg = 0U;
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U];
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U];
        }
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_NS_fsm;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_NS_fsm;
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter2_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter3_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter1_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter2_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter5_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3__DOT__inst__DOT__ap_CS_iter4_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter1_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter7_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36_ap_start_reg = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[0U] = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[1U] = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[2U] = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo[3U] = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[0U] = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[1U] = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[2U] = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo[3U] = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__ap_CS_fsm = 1U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__ap_CS_fsm = 1U;
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_5__DOT__inst__DOT__impl__DOT__state_)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3207_pp0_iter6_reg;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__icmp_ln249_reg_3172_pp0_iter6_reg;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_sel_wr;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state 
        = vlSelf->__Vdly__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs2));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm 
        = ((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__ap_rst_n))) 
           || (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure 
        = ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_weights_V_U__DOT__B_V_data_1_state) 
               >> 1U)) & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rs2));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_CS_iter0_fsm 
        = ((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__ap_rst_n))) 
           || (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__grp_Matrix_Vector_Activate_Stream_Batch_fu_36__DOT__ap_NS_iter0_fsm));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ 
            = ((4U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))) {
        if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                      >> 2U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                   >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                             >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                       >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                              >> 2U)) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                            >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((IData)(((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                                >> 2U)) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                           >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr))));
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))
                ? ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))
                    ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U) : 2U) : 0U);
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state_)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                     >> 2U));
        if ((4U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[3U];
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
        }
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state))) {
        if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                      >> 2U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                   >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
        } else if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                             >> 2U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                       >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[3U];
        } else if ((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                              >> 2U)) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                            >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
        } else if ((IData)(((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_0__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                                >> 2U)) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                           >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U)));
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
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            }
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_2__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
        }
    }
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ 
            = ((0x40U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))) {
        if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                      >> 6U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                   >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 2U;
        } else if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                             >> 6U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                       >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                              >> 6U)) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                            >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 1U;
        } else if ((IData)(((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                                >> 6U)) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                           >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_ = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))
                          ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr)
                              ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr) 
                                 - (IData)(1U)) : 0U)
                          : (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr))));
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))
                ? ((2U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state))
                    ? ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr)
                        ? 2U : 1U) : 2U) : 0U);
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_full_ 
        = ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__addr_)) 
           & (2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state_)));
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
    if ((0U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))) {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                     >> 6U));
        if ((0x40U & (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[3U];
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
        }
    } else if ((1U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state))) {
        if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                      >> 6U) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                   >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
        } else if ((IData)((((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                             >> 6U) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                       >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ADat[3U];
        } else if ((1U & ((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                              >> 6U)) & (~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                            >> 1U))))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
        } else if ((IData)(((~ ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingDataWidthConverter_rtl_1__DOT__inst__DOT__impl__DOT__core__DOT__genUp__DOT__ACnt) 
                                >> 6U)) & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                                           >> 1U)))) {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__shift_en_o_ 
            = ((2U == (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__state)) 
               && (1U & ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2__DOT__inst__DOT__regslice_both_in0_V_U__DOT__B_V_data_1_state) 
                         >> 1U)));
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
            } else {
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
                vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
            }
        } else {
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[0U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[1U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[2U] = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__StreamingFIFO_rtl_4__DOT__inst__DOT__impl__DOT__srlo_[3U] = 0U;
        }
    }
}

VL_INLINE_OPT void VMVAU_hls_0___024root___nba_sequent__TOP__7(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___nba_sequent__TOP__7\n"); );
    // Init
    VlWide<40>/*1279:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    if (vlSelf->finn_design_tb__DOT__ap_rst_n) {
        if ((0U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
            if ((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
                if ((2U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state = 0U;
                }
            }
        }
        if ((0U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
            if ((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
                if ((2U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state = 0U;
                }
            }
        }
        if ((0U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
            if ((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
                if ((2U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state = 0U;
                }
            }
        }
        if ((0U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
            if ((1U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
                if ((2U != (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state = 0U;
                }
            }
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__bvalid = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__bresp = 0U;
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__bvalid = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__bresp = 0U;
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__bvalid = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__bresp = 0U;
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__bvalid = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__bresp = 0U;
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__rresp = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__rvalid = 1U;
            VL_SHIFTR_WWI(1280,1280,32, __Vtemp_1, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2, 
                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__fold__DOT__internal_rfold), 5U));
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__rdata 
                = __Vtemp_1[0U];
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__rresp = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__rvalid = 1U;
            VL_SHIFTR_WWI(128,128,32, __Vtemp_2, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2, 
                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__fold__DOT__internal_rfold), 5U));
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__rdata 
                = __Vtemp_2[0U];
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__rresp = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__rvalid = 1U;
            VL_SHIFTR_WWI(128,128,32, __Vtemp_3, vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2, 
                          VL_SHIFTL_III(32,32,32, (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__fold__DOT__internal_rfold), 5U));
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__rdata 
                = __Vtemp_3[0U];
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__rresp = 0U;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__rvalid = 1U;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__rdata 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2;
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__state = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__bvalid = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__bresp = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__bvalid = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__bresp = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__bvalid = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__bresp = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__bvalid = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__bresp = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__rresp = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__rvalid = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__rresp = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__rvalid = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__rresp = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__rvalid = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__rresp = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__rvalid = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__rdata = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__rdata = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__rdata = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__rdata = 0U;
    }
}

VL_INLINE_OPT void VMVAU_hls_0___024root___nba_sequent__TOP__8(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__DOT__monitor_find_block 
        = ((~ (IData)(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Ereset)) 
           & (0U != (IData)(vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eaxis_block_sigs)));
    vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eblock 
        = vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__DOT__monitor_find_block;
}

VL_INLINE_OPT void VMVAU_hls_0___024root___nba_sequent__TOP__9(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__monitor_find_block 
        = ((~ (IData)(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Ereset)) 
           & ((IData)(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__MVAU_hls_0_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block) 
              & (IData)(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__MVAU_hls_0_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block)));
    vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Eblock 
        = vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__monitor_find_block;
    vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__MVAU_hls_0_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block 
        = ((~ (IData)(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Ereset)) 
           & (IData)(vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__DOT__MVAU_hls_0_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block));
}

VL_INLINE_OPT void VMVAU_hls_0___024root___nba_sequent__TOP__10(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__monitor_find_block 
        = ((~ (IData)(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Ereset)) 
           & ((IData)(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__MVAU_hls_1_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block) 
              & (IData)(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__MVAU_hls_1_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block)));
    vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Eblock 
        = vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__monitor_find_block;
    vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__MVAU_hls_1_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block 
        = ((~ (IData)(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Ereset)) 
           & (IData)(vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__DOT__MVAU_hls_1_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block));
}

VL_INLINE_OPT void VMVAU_hls_0___024root___nba_sequent__TOP__11(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__monitor_find_block 
        = ((~ (IData)(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Ereset)) 
           & ((IData)(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__MVAU_hls_2_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block) 
              & (IData)(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__MVAU_hls_2_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block)));
    vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Eblock 
        = vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__monitor_find_block;
    vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__MVAU_hls_2_hls_deadlock_idx1_monitor_U__DOT__monitor_find_block 
        = ((~ (IData)(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Ereset)) 
           & (IData)(vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__DOT__MVAU_hls_2_hls_deadlock_idx1_monitor_U__DOT__seq_is_axis_block));
}

extern const VlWide<40>/*1279:0*/ VMVAU_hls_0__ConstPool__CONST_had224c38_0;

VL_INLINE_OPT void VMVAU_hls_0___024root___nba_sequent__TOP__12(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___nba_sequent__TOP__12\n"); );
    // Init
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h72e03f87_0_0;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h72e03f87_0_0 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h30d9c4e7_0_0;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h30d9c4e7_0_0 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h4736d17f_0_0;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h4736d17f_0_0 = 0;
    CData/*0:0*/ finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h27cd7231_0_0;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h27cd7231_0_0 = 0;
    // Body
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_if__DOT__internal_wack = 0U;
    if (vlSelf->finn_design_tb__DOT__ap_rst_n) {
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 0U;
            if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_ce) {
                if ((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_we)))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 1U;
                }
            }
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 0U;
            if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_ce) {
                if ((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_we)))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 1U;
                }
            }
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 0U;
            if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_ce) {
                if ((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_we)))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 1U;
                }
            }
        }
        if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1;
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 0U;
            if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_ce) {
                if ((1U & (~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_we)))) {
                    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 1U;
                }
            }
        }
    } else {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb2 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 0U;
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1 = 0U;
    }
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
            [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
            [1U].__PVT__val];
    }
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en) {
        if ((0x3bU >= vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
             [1U].__PVT__val)) {
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[1U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][1U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[2U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][2U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[3U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][3U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[4U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][4U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[5U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][5U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[6U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][6U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[7U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][7U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[8U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][8U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[9U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][9U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0xaU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0xaU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0xbU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0xbU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0xcU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0xcU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0xdU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0xdU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0xeU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0xeU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0xfU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0xfU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x10U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x10U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x11U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x11U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x12U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x12U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x13U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x13U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x14U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x14U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x15U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x15U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x16U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x16U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x17U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x17U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x18U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x18U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x19U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x19U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x1aU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x1aU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x1bU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x1bU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x1cU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x1cU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x1dU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x1dU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x1eU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x1eU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x1fU] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x1fU];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x20U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x20U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x21U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x21U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x22U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x22U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x23U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x23U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x24U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x24U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x25U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x25U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x26U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x26U];
            vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0x27U] 
                = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
                [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
                [1U].__PVT__val][0x27U];
        } else {
            IData/*31:0*/ __Vilp1;
            __Vilp1 = 0U;
            while ((__Vilp1 <= 0x27U)) {
                vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[__Vilp1] 
                    = VMVAU_hls_0__ConstPool__CONST_had224c38_0[__Vilp1];
                __Vilp1 = ((IData)(1U) + __Vilp1);
            }
        }
    }
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
            [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
            [1U].__PVT__val][0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[1U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
            [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
            [1U].__PVT__val][1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[2U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
            [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
            [1U].__PVT__val][2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[3U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
            [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
            [1U].__PVT__val][3U];
    }
    if (vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[0U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
            [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
            [1U].__PVT__val][0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[1U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
            [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
            [1U].__PVT__val][1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[2U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
            [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
            [1U].__PVT__val][2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Data2[3U] 
            = vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem
            [vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
            [1U].__PVT__val][3U];
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v0) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v0;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v1) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v1;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v2) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v2;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v3) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v3;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v4) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v4;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v5) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v5;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][3U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[3U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][4U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[4U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][5U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[5U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][6U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[6U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][7U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[7U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][8U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[8U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][9U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[9U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0xaU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0xaU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0xbU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0xbU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0xcU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0xcU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0xdU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0xdU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0xeU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0xeU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0xfU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0xfU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x10U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x10U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x11U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x11U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x12U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x12U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x13U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x13U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x14U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x14U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x15U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x15U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x16U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x16U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x17U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x17U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x18U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x18U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x19U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x19U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x1aU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x1aU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x1bU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x1bU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x1cU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x1cU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x1dU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x1dU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x1eU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x1eU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x1fU] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x1fU];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x20U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x20U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x21U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x21U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x22U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x22U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x23U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x23U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x24U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x24U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x25U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x25U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x26U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x26U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0x27U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0x27U];
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v0) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v0;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v1) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v1;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v2) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v2;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v3) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v3;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v4) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v4;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v5) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v5;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][3U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[3U];
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v0) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v0;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v1) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v1;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v2) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v2;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v3) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v3;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v4) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v4;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v5) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v5;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[0U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[1U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[2U];
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem[vlSelf->__VdlyDim0__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0][3U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage2__DOT__Mem__v0[3U];
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v0) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v0;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v1) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[0U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v1;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v2) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v2;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v3) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[1U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v3;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v4) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v4;
    }
    if (vlSelf->__VdlySet__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v5) {
        vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr[2U] 
            = vlSelf->__VdlyVal__finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr__v5;
    }
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_we = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_ce = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_we = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_ce = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_we = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_ce = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_we = 0U;
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_ce = 0U;
    finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h27cd7231_0_0 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__config_ce) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h72e03f87_0_0 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__config_ce) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h30d9c4e7_0_0 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__config_ce) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
    finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h4736d17f_0_0 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__config_ce) 
           | (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Rb1));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__en 
        = (1U & ((~ (IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure)) 
                 | (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h27cd7231_0_0)));
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__backpressure) 
           & (IData)(finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT____VdfgRegularize_h27cd7231_0_0));
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
    vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__blkStage1__DOT__ptr_eff 
        = ((IData)(vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__rollback)
            ? vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
           [2U] : vlSelf->finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__Ptr
           [0U]);
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
}

void VMVAU_hls_0___024root___timing_resume(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___timing_resume\n"); );
    // Body
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VMVAU_hls_0___024root___eval_triggers__act(VMVAU_hls_0___024root* vlSelf);
void VMVAU_hls_0___024root___eval_act(VMVAU_hls_0___024root* vlSelf);

bool VMVAU_hls_0___024root___eval_phase__act(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<11> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMVAU_hls_0___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMVAU_hls_0___024root___timing_resume(vlSelf);
        VMVAU_hls_0___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VMVAU_hls_0___024root___eval_nba(VMVAU_hls_0___024root* vlSelf);

bool VMVAU_hls_0___024root___eval_phase__nba(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMVAU_hls_0___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMVAU_hls_0___024root___dump_triggers__ico(VMVAU_hls_0___024root* vlSelf);
#endif  // VL_DEBUG
bool VMVAU_hls_0___024root___eval_phase__ico(VMVAU_hls_0___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMVAU_hls_0___024root___dump_triggers__nba(VMVAU_hls_0___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMVAU_hls_0___024root___dump_triggers__act(VMVAU_hls_0___024root* vlSelf);
#endif  // VL_DEBUG

void VMVAU_hls_0___024root___eval(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VMVAU_hls_0___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("MVAU_hls_0_regslice_both.v", 122, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMVAU_hls_0___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMVAU_hls_0___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("MVAU_hls_0_regslice_both.v", 122, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMVAU_hls_0___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("MVAU_hls_0_regslice_both.v", 122, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMVAU_hls_0___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMVAU_hls_0___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMVAU_hls_0___024root___eval_debug_assertions(VMVAU_hls_0___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->MVAU_hls_0_regslice_both_w1__02Eap_clk 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_0_regslice_both_w1.ap_clk");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_0_regslice_both_w1__02Eap_rst 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_0_regslice_both_w1.ap_rst");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_0_regslice_both_w1__02Edata_in 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_0_regslice_both_w1.data_in");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_0_regslice_both_w1__02Evld_in 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_0_regslice_both_w1.vld_in");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_0_regslice_both_w1__02Eack_out 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_0_regslice_both_w1.ack_out");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_1_regslice_both_w1__02Eap_clk 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_1_regslice_both_w1.ap_clk");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_1_regslice_both_w1__02Eap_rst 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_1_regslice_both_w1.ap_rst");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_1_regslice_both_w1__02Edata_in 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_1_regslice_both_w1.data_in");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_1_regslice_both_w1__02Evld_in 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_1_regslice_both_w1.vld_in");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_1_regslice_both_w1__02Eack_out 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_1_regslice_both_w1.ack_out");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_2_regslice_both_w1__02Eap_clk 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_2_regslice_both_w1.ap_clk");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_2_regslice_both_w1__02Eap_rst 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_2_regslice_both_w1.ap_rst");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_2_regslice_both_w1__02Edata_in 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_2_regslice_both_w1.data_in");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_2_regslice_both_w1__02Evld_in 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_2_regslice_both_w1.vld_in");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_2_regslice_both_w1__02Eack_out 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_2_regslice_both_w1.ack_out");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_3_hls_deadlock_idx0_monitor.clock");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Ereset 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_3_hls_deadlock_idx0_monitor.reset");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Eaxis_block_sigs 
                     & 0xf8U))) {
        Verilated::overWidthError("MVAU_hls_3_hls_deadlock_idx0_monitor.axis_block_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Einst_idle_sigs 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_3_hls_deadlock_idx0_monitor.inst_idle_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_3_hls_deadlock_idx0_monitor__02Einst_block_sigs 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_3_hls_deadlock_idx0_monitor.inst_block_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_3_regslice_both_w1__02Eap_clk 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_3_regslice_both_w1.ap_clk");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_3_regslice_both_w1__02Eap_rst 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_3_regslice_both_w1.ap_rst");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_3_regslice_both_w1__02Edata_in 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_3_regslice_both_w1.data_in");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_3_regslice_both_w1__02Evld_in 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_3_regslice_both_w1.vld_in");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_3_regslice_both_w1__02Eack_out 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_3_regslice_both_w1.ack_out");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_0_hls_deadlock_idx0_monitor.clock");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Ereset 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_0_hls_deadlock_idx0_monitor.reset");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Eaxis_block_sigs 
                     & 0xf8U))) {
        Verilated::overWidthError("MVAU_hls_0_hls_deadlock_idx0_monitor.axis_block_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Einst_idle_sigs 
                     & 0xfcU))) {
        Verilated::overWidthError("MVAU_hls_0_hls_deadlock_idx0_monitor.inst_idle_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_0_hls_deadlock_idx0_monitor__02Einst_block_sigs 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_0_hls_deadlock_idx0_monitor.inst_block_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_1_hls_deadlock_idx0_monitor.clock");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Ereset 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_1_hls_deadlock_idx0_monitor.reset");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Eaxis_block_sigs 
                     & 0xf8U))) {
        Verilated::overWidthError("MVAU_hls_1_hls_deadlock_idx0_monitor.axis_block_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Einst_idle_sigs 
                     & 0xfcU))) {
        Verilated::overWidthError("MVAU_hls_1_hls_deadlock_idx0_monitor.inst_idle_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_1_hls_deadlock_idx0_monitor__02Einst_block_sigs 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_1_hls_deadlock_idx0_monitor.inst_block_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_2_hls_deadlock_idx0_monitor.clock");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Ereset 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_2_hls_deadlock_idx0_monitor.reset");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Eaxis_block_sigs 
                     & 0xf8U))) {
        Verilated::overWidthError("MVAU_hls_2_hls_deadlock_idx0_monitor.axis_block_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Einst_idle_sigs 
                     & 0xfcU))) {
        Verilated::overWidthError("MVAU_hls_2_hls_deadlock_idx0_monitor.inst_idle_sigs");}
    if (VL_UNLIKELY((vlSelf->MVAU_hls_2_hls_deadlock_idx0_monitor__02Einst_block_sigs 
                     & 0xfeU))) {
        Verilated::overWidthError("MVAU_hls_2_hls_deadlock_idx0_monitor.inst_block_sigs");}
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const VMVAU_hls_0_finn_design_tb__DOT__uut__DOT__MVAU_hls_3__DOT__MVAU_hls_3_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__ptr_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{val:" + VL_TO_STRING(obj.__PVT__val);
        out += ", lst:" + VL_TO_STRING(obj.__PVT__lst);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const VMVAU_hls_0_finn_design_tb__DOT__uut__DOT__MVAU_hls_2__DOT__MVAU_hls_2_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__ptr_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{val:" + VL_TO_STRING(obj.__PVT__val);
        out += ", lst:" + VL_TO_STRING(obj.__PVT__lst);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const VMVAU_hls_0_finn_design_tb__DOT__uut__DOT__MVAU_hls_1__DOT__MVAU_hls_1_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__ptr_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{val:" + VL_TO_STRING(obj.__PVT__val);
        out += ", lst:" + VL_TO_STRING(obj.__PVT__lst);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const VMVAU_hls_0_finn_design_tb__DOT__uut__DOT__MVAU_hls_0__DOT__MVAU_hls_0_wstrm__DOT__inst__DOT__core__DOT__mem__DOT__ptr_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMVAU_hls_0___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{val:" + VL_TO_STRING(obj.__PVT__val);
        out += ", lst:" + VL_TO_STRING(obj.__PVT__lst);
        out += "}";
    return out;
}
