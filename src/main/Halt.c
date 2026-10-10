#include "ffc/types.h"

/* BIOS call stub: C cannot emit swi, so asm is allowed for these (see docs/STATUS.md). */
asm void Halt(void)
{
    swi 6
    bx lr
}
