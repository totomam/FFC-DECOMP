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
/* From pokediamond NitroSDK/OS_system.c (OS_SpinWait), matched by tools/xmatch.py. */
#pragma thumb off

asm void func_020889e8(u32 cycles)
{
    subs r0, r0, #0x4
    bhs func_020889e8
    bx lr
}
