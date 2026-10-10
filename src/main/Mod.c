#include "ffc/types.h"

/* BIOS call stub: C cannot emit swi, so asm is allowed for these (see docs/STATUS.md). */
asm void Mod(void)
{
    swi 9
    add r0, r1, #0
    bx lr
}
