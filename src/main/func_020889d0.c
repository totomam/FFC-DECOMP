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
/* From pokediamond NitroSDK/OS_system.c (OS_GetCpsrIrq), matched by tools/xmatch.py. */
#pragma thumb off

asm OSIntrMode func_020889d0(void)
{
    mrs r0, cpsr
    and r0, r0, #HW_PSR_DISABLE_IRQ
    bx lr
}
