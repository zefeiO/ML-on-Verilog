// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMVAU_hls_0.h for the primary calling header

#ifndef VERILATED_VMVAU_HLS_0___024UNIT_H_
#define VERILATED_VMVAU_HLS_0___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VMVAU_hls_0__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMVAU_hls_0___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    VMVAU_hls_0__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMVAU_hls_0___024unit(VMVAU_hls_0__Syms* symsp, const char* v__name);
    ~VMVAU_hls_0___024unit();
    VL_UNCOPYABLE(VMVAU_hls_0___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
