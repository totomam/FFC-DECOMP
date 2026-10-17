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
/* From pokediamond NitroSDK/MI_memory.c (MIi_CpuCopyFast), matched by tools/xmatch.py. */
#pragma thumb off

asm void func_02084a58(register const void *srcp, register void *destp, register u32 size)
{
    stmfd sp!, {r4-r10}

    add r10, r1, r2
    mov r12, r2, lsr #5
    add r12, r1, r12, lsl #5

_020CE29C:
    cmp r1, r12
    ldmltia r0!, {r2-r9}
    stmltia r1!, {r2-r9}
    blt _020CE29C
_020CE2AC:
    cmp r1, r10
    ldmltia r0!, {r2}
    stmltia r1!, {r2}
    blt _020CE2AC

    ldmfd sp!, {r4-r10}
    bx lr
}
