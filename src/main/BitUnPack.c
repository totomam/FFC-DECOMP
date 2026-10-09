#include "ffc/types.h"

/* BIOS call stub: C cannot emit swi, so asm is allowed for these (see docs/STATUS.md). */
asm void BitUnPack(const void *src, void *dest, const void *param)
{
    swi 0x10
    bx lr
}
