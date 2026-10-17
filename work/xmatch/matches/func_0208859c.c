#include "ffc/types.h"
/* From pokediamond NitroSDK/OS_alarm.c (OSi_AlarmHandler), matched by tools/xmatch.py. */
#pragma thumb off
extern void func_020885ac(void); /* OSi_ArrangeTimer */

asm void func_0208859c(void *arg)
{
    stmfd sp!, {r0, lr}
    bl func_020885ac
    ldmfd sp!, {r0, lr}
    bx lr
}
