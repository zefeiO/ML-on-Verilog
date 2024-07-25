# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VMVAU_hls_0.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VMVAU_hls_0 \
	VMVAU_hls_0___024root__DepSet_he005e8a4__0 \
	VMVAU_hls_0___024root__DepSet_h019a1f1d__0 \
	VMVAU_hls_0___024root__DepSet_h019a1f1d__1 \
	VMVAU_hls_0__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VMVAU_hls_0__ConstPool_0 \
	VMVAU_hls_0___024root__Slow \
	VMVAU_hls_0___024root__DepSet_he005e8a4__0__Slow \
	VMVAU_hls_0___024root__DepSet_h019a1f1d__0__Slow \
	VMVAU_hls_0___024unit__Slow \
	VMVAU_hls_0___024unit__DepSet_h6a47fcee__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VMVAU_hls_0__Trace__0 \
	VMVAU_hls_0__Trace__1 \
	VMVAU_hls_0__Trace__2 \
	VMVAU_hls_0__Trace__3 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VMVAU_hls_0__Syms \
	VMVAU_hls_0__Trace__0__Slow \
	VMVAU_hls_0__TraceDecls__0__Slow \
	VMVAU_hls_0__Trace__1__Slow \
	VMVAU_hls_0__Trace__2__Slow \
	VMVAU_hls_0__Trace__3__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
