// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMVAU_HLS_0__SYMS_H_
#define VERILATED_VMVAU_HLS_0__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMVAU_hls_0.h"

// INCLUDE MODULE CLASSES
#include "VMVAU_hls_0___024root.h"
#include "VMVAU_hls_0___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMVAU_hls_0__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMVAU_hls_0* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMVAU_hls_0___024root          TOP;
    VMVAU_hls_0___024unit          TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_finn_design_tb;

    // CONSTRUCTORS
    VMVAU_hls_0__Syms(VerilatedContext* contextp, const char* namep, VMVAU_hls_0* modelp);
    ~VMVAU_hls_0__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
