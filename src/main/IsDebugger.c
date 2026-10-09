#include "ffc/types.h"

/* BIOS call stub: C cannot emit swi, so asm is allowed for these (see docs/STATUS.md). */
asm int IsDebugger(void)
{
    swi 0xf
    bx lr
}
