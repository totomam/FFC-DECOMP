#include "ffc/types.h"

/* BIOS call stub: C cannot emit swi, so asm is allowed for these (see docs/STATUS.md). */
asm void RLUnCompReadNormalWrite8bit(const void *src, void *dest)
{
    swi 0x14
    bx lr
}
