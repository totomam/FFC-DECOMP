#include "ffc/types.h"
#ifndef OSIntrMode
typedef unsigned long OSIntrMode;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long OSProcMode;
typedef volatile unsigned long vu32;
#endif
#define HW_PSR_DISABLE_IRQ 0x80
#define HW_PSR_DISABLE_FIQ 0x40
#define HW_PSR_DISABLE_IRQ_FIQ 0xc0
#define HW_PSR_CPU_MODE_MASK 0x1f
/* From pokediamond NitroSDK/MI_memory.c (MIi_CpuClearFast), matched by tools/xmatch.py. */
#pragma thumb off

asm void func_02084a0c(register u32 data, register void *destp, register u32 size)
{
    stmfd sp!, {r4-r9}

    add r9, r1, r2
    mov r12, r2, lsr #5
    add r12, r1, r12, lsl #5

    mov r2, r0
    mov r3, r2
    mov r4, r2
    mov r5, r2
    mov r6, r2
    mov r7, r2
    mov r8, r2

_020CE26C:
    cmp r1, r12
    stmltia r1!, {r0, r2-r8}
    blt _020CE26C
_020CE278:
    cmp r1, r9
    stmltia r1!, {r0}
    blt _020CE278

    ldmfd sp!, {r4-r9}
    bx lr
}
