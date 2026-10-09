#include "ffc/types.h"

/* BIOS call stub: C cannot emit swi, so asm is allowed for these (see docs/STATUS.md). */
asm int HuffUnCompReadByCallback(const void *src, void *dest, void *param, const void *callbacks)
{
    swi 0x13
    bx lr
}
