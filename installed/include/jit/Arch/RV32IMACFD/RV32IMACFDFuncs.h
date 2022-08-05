/**
 * Generated on Fri, 15 Jul 2022 16:36:47 +0200.
 *
 * This file contains the function macros for the RV32IMACFD core architecture.
 */

#ifndef __RV32IMACFD_FUNCS_H
#define __RV32IMACFD_FUNCS_H

#ifndef ETISS_ARCH_STATIC_FN_ONLY
#include "Arch/RV32IMACFD/RV32IMACFD.h"
#include "etiss/jit/CPU.h"
#include "etiss/jit/System.h"
#include "etiss/jit/ReturnCode.h"
#endif



#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_int32 raise(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 irq, etiss_int32 mcause)
{
cpu->return_pending = 1;
((RV32IMACFD*)cpu)->CSR_MCAUSE = mcause;
((RV32IMACFD*)cpu)->CSR_MEPC = cpu->instructionPointer + 4U;
((RV32IMACFD*)cpu)->CSR_MSTATUS = (((RV32IMACFD*)cpu)->CSR_MSTATUS & -129) | (((((RV32IMACFD*)cpu)->CSR_MSTATUS & 8U) >> 8U) << 128U);
((RV32IMACFD*)cpu)->CSR_MSTATUS = ((RV32IMACFD*)cpu)->CSR_MSTATUS & -9;
((RV32IMACFD*)cpu)->CSR_MSTATUS = ((RV32IMACFD*)cpu)->CSR_MSTATUS ^ (((RV32IMACFD*)cpu)->CSR_CPM << 11U) ^ (((RV32IMACFD*)cpu)->CSR_MSTATUS & 6144U);
((RV32IMACFD*)cpu)->CSR_CPM = 3U;
cpu->nextPc = ((RV32IMACFD*)cpu)->CSR_MTVEC & -4;
return 0U;
}
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline void leave(etiss_int32 priv_lvl);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline void wait(etiss_int32 flag);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fadd_s(etiss_uint32, etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fsub_s(etiss_uint32, etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fmul_s(etiss_uint32, etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fdiv_s(etiss_uint32, etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fmadd_s(etiss_uint32, etiss_uint32, etiss_uint32, etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fsel_s(etiss_uint32, etiss_uint32, etiss_uint32);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fsqrt_s(etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fcmp_s(etiss_uint32, etiss_uint32, etiss_uint32);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fcvt_s(etiss_uint32, etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fcvt_32_64(etiss_uint32, etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fcvt_64_32(etiss_uint64, etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 unbox_s(etiss_uint64);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fclass_s(etiss_uint32);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fget_flags();
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fadd_d(etiss_uint64, etiss_uint64, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fsub_d(etiss_uint64, etiss_uint64, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fmul_d(etiss_uint64, etiss_uint64, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fdiv_d(etiss_uint64, etiss_uint64, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fmadd_d(etiss_uint64, etiss_uint64, etiss_uint64, etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fsel_d(etiss_uint64, etiss_uint64, etiss_uint32);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fsqrt_d(etiss_uint64, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fcmp_d(etiss_uint64, etiss_uint64, etiss_uint32);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fcvt_d(etiss_uint64, etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 fconv_d2f(etiss_uint64, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fconv_f2d(etiss_uint32, etiss_uint8);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 unbox_d(etiss_uint64);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 fclass_d(etiss_uint64);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 etiss_get_cycles(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 etiss_get_time();
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 etiss_get_instret(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 csr_read(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr)
{
if (csr == 1) {
return *((RV32IMACFD*)cpu)->CSR[3] & 31U;
}
if (csr == 2) {
return (*((RV32IMACFD*)cpu)->CSR[3] >> 5U) & 7U;
}
if (csr == 3072) {
return etiss_get_cycles(cpu, system, plugin_pointers);
}
if (csr == 3200) {
return etiss_get_cycles(cpu, system, plugin_pointers) >> 32U;
}
if (csr == 3073) {
return etiss_get_time();
}
if (csr == 3201) {
return etiss_get_time() >> 32U;
}
if (csr == 3074) {
return etiss_get_instret(cpu, system, plugin_pointers);
}
if (csr == 3202) {
return etiss_get_instret(cpu, system, plugin_pointers) >> 32U;
}
return *((RV32IMACFD*)cpu)->CSR[csr];
}
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline void csr_write(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr, etiss_uint32 val)
{
if (csr == 1) {
*((RV32IMACFD*)cpu)->CSR[3] = (*((RV32IMACFD*)cpu)->CSR[3] & 224U) | (val & 31U);
} else if (csr == 2) {
*((RV32IMACFD*)cpu)->CSR[3] = ((val & 7U) << 5U) | (*((RV32IMACFD*)cpu)->CSR[3] & 31U);
} else if (csr == 3) {
*((RV32IMACFD*)cpu)->CSR[3] = val & 255U;
} else if (csr == 768) {
*((RV32IMACFD*)cpu)->CSR[768] = val & 136U;
} else {
*((RV32IMACFD*)cpu)->CSR[csr] = val;
}
}
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline void ExceptionEntry_Machine(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 cause)
{
((RV32IMACFD*)cpu)->CSR_MCAUSE = cause;
((RV32IMACFD*)cpu)->CSR_MEPC = cpu->instructionPointer + 4U;
((RV32IMACFD*)cpu)->CSR_MSTATUS = (((RV32IMACFD*)cpu)->CSR_MSTATUS & -129) | (((((RV32IMACFD*)cpu)->CSR_MSTATUS & 8U) >> 8U) << 128U);
((RV32IMACFD*)cpu)->CSR_MSTATUS = ((RV32IMACFD*)cpu)->CSR_MSTATUS & -9;
((RV32IMACFD*)cpu)->CSR_MSTATUS = ((RV32IMACFD*)cpu)->CSR_MSTATUS ^ (((RV32IMACFD*)cpu)->CSR_CPM << 11U) ^ (((RV32IMACFD*)cpu)->CSR_MSTATUS & 6144U);
((RV32IMACFD*)cpu)->CSR_CPM = 3U;
cpu->nextPc = ((RV32IMACFD*)cpu)->CSR_MTVEC & -4;
}
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline void ExceptionReturn_Machine(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
((RV32IMACFD*)cpu)->CSR_MCAUSE = 0U;
((RV32IMACFD*)cpu)->CSR_MSTATUS = (((RV32IMACFD*)cpu)->CSR_MSTATUS & -9) | ((((RV32IMACFD*)cpu)->CSR_MSTATUS & 0U) << 8U);
((RV32IMACFD*)cpu)->CSR_MSTATUS = (((RV32IMACFD*)cpu)->CSR_MSTATUS & -129) ^ 128U;
((RV32IMACFD*)cpu)->CSR_MSTATUS = (((RV32IMACFD*)cpu)->CSR_MSTATUS & -6145) | 6144U;
((RV32IMACFD*)cpu)->CSR_CPM = (((RV32IMACFD*)cpu)->CSR_MSTATUS & 6144U) >> 11U;
cpu->nextPc = ((RV32IMACFD*)cpu)->CSR_MEPC;
}
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline void translate_exc_code(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 cause)
{
etiss_int32 code = 0U;
if (cause == -5) {
code = 5;
} else if (cause == -14) {
code = 13;
} else if (cause == -6) {
code = 7;
} else if (cause == -15) {
code = 15;
} else {
code = 2;
}
cpu->exception = raise(cpu, system, plugin_pointers, 0U, code);
}
#endif
#endif
