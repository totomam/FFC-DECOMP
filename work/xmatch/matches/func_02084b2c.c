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
/* From pokediamond NitroSDK/MI_memory.c (MI_CpuFill8), matched by tools/xmatch.py. */
#pragma thumb off

asm void func_02084b2c(register void *dstp, register u8 data, register u32 size)
{
    cmp r2, #0
    bxeq lr

    tst r0, #1
    beq _020CE378
    ldrh r12, [r0, #-1]
    and r12, r12, #0x00ff
    orr r3, r12, r1, lsl #8
    strh r3, [r0, #-1]
    add r0, r0, #1
    subs r2, r2, #1
    bxeq lr

_020CE378:
    cmp r2, #2
    bcc _020CE3C0
    orr r1, r1, r1, lsl #8
    tst r0, #2
    beq _020CE398
    strh r1, [r0], #2
    subs r2, r2, #2
    bxeq lr

_020CE398:
    orr r1, r1, r1, lsl #16
    bics r3, r2, #3
    beq _020CE3B8
    sub r2, r2, r3
    add r12, r3, r0

_020CE3AC:
    str r1, [r0], #4
    cmp r0, r12
    bcc _020CE3AC

_020CE3B8:
    tst r2, #2
    strneh r1, [r0], #2

_020CE3C0:
    tst r2, #1
    bxeq lr
    ldrh r3, [r0]
    and r3, r3, #0xff00
    and r1, r1, #0x00ff
    orr r1, r1, r3
    strh r1, [r0]
    bx lr
}
