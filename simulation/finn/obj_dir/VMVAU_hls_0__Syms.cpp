// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMVAU_hls_0__pch.h"
#include "VMVAU_hls_0.h"
#include "VMVAU_hls_0___024root.h"
#include "VMVAU_hls_0___024unit.h"

// FUNCTIONS
VMVAU_hls_0__Syms::~VMVAU_hls_0__Syms()
{
}

VMVAU_hls_0__Syms::VMVAU_hls_0__Syms(VerilatedContext* contextp, const char* namep, VMVAU_hls_0* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(755);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_finn_design_tb.configure(this, name(), "finn_design_tb", "finn_design_tb", -9, VerilatedScope::SCOPE_OTHER);
}
