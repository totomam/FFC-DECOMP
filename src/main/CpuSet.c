#include "ffc/types.h"

/* BIOS call stub: C cannot emit swi, so asm is allowed for these (see docs/STATUS.md). */
asm void CpuSet(void)
{
    swi 11
    bx lr
}
