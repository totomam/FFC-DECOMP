#include "ffc/types.h"

/* BIOS call stub: C cannot emit swi, so asm is allowed for these (see docs/STATUS.md). */
asm void VBlankIntrWait(void)
{
    mov r2, #0
    swi 5
    bx lr
}
