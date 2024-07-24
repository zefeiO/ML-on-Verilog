// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMVAU_hls_0.h for the primary calling header

#include "VMVAU_hls_0__pch.h"
#include "VMVAU_hls_0___024unit.h"

VL_ATTR_COLD void VMVAU_hls_0___024unit___ctor_var_reset(VMVAU_hls_0___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMVAU_hls_0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  VMVAU_hls_0___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
