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
/* From pokediamond NitroSDK/OS_terminate_proc.c (OS_Halt), matched by tools/xmatch.py. */
#pragma thumb off

asm void func_02088f94(void)
{
    mov r0, #0x0
    mcr p15, 0x0, r0, c7, c0, 0x4 //Wait For Interrupt (Halt)
    bx lr
}
