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
/* From pokediamond NitroSDK/MI_memory.c (MI_CpuCopy8), matched by tools/xmatch.py. */
#pragma thumb off

asm void func_02084ca4(register const void *srcp, register void *dstp, register u32 size)
{
    cmp r2, #0
    bxeq lr

    tst r1, #1
    beq _020CE420
    ldrh r12, [r1, #-1]
    and r12, r12, #0x00ff
    tst r0, #1
    ldrneh r3, [r0, #-1]
    movne r3, r3, lsr #8
    ldreqh r3, [r0]
    orr r3, r12, r3, lsl #8
    strh r3, [r1, #-1]
    add r0, r0, #1
    add r1, r1, #1
    subs r2, r2, #1
    bxeq lr

_020CE420:
    eor r12, r1, r0
    tst r12, #1
    beq _020CE474

    bic r0, r0, #1
    ldrh r12, [r0], #2
    mov r3, r12, lsr #8
    subs r2, r2, #2
    bcc _020CE458

_020CE440:
    ldrh r12, [r0], #2
    orr r12, r3, r12, lsl #8
    strh r12, [r1], #2
    mov r3, r12, lsr #16
    subs r2, r2, #2
    bcs _020CE440

_020CE458:
    tst r2, #1
    bxeq lr
    ldrh r12, [r1]
    and r12, r12, #0xff00
    orr r12, r12, r3
    strh r12, [r1]
    bx lr

_020CE474:
    tst r12, #2
    beq _020CE4A0

    bics r3, r2, #1
    beq _020CE4EC
    sub r2, r2, r3
    add r12, r3, r1

_020CE48C:
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    cmp r1, r12
    bcc _020CE48C
    b _020CE4EC

_020CE4A0:
    cmp r2, #2
    bcc _020CE4EC
    tst r1, #2
    beq _020CE4C0
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    subs r2, r2, #2
    bxeq lr

_020CE4C0:
    bics r3, r2, #3
    beq _020CE4E0
    sub r2, r2, r3
    add r12, r3, r1

_020CE4D0:
    ldr r3, [r0], #4
    str r3, [r1], #4
    cmp r1, r12
    bcc _020CE4D0

_020CE4E0:
    tst r2, #2
    ldrneh r3, [r0], #2
    strneh r3, [r1], #2

_020CE4EC:
    tst r2, #1
    bxeq lr
    ldrh r2, [r1]
    ldrh r0, [r0]
    and r2, r2, #0xff00
    and r0, r0, #0x00ff
    orr r0, r2, r0
    strh r0, [r1]

    bx lr
}
