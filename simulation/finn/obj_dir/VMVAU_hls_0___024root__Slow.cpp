// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMVAU_hls_0.h for the primary calling header

#include "VMVAU_hls_0__pch.h"
#include "VMVAU_hls_0__Syms.h"
#include "VMVAU_hls_0___024root.h"

void VMVAU_hls_0___024root___ctor_var_reset(VMVAU_hls_0___024root* vlSelf);

VMVAU_hls_0___024root::VMVAU_hls_0___024root(VMVAU_hls_0__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMVAU_hls_0___024root___ctor_var_reset(this);
}

void VMVAU_hls_0___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMVAU_hls_0___024root::~VMVAU_hls_0___024root() {
}
