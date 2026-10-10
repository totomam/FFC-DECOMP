#include "ffc/types.h"

/* BIOS call stub: C cannot emit swi, so asm is allowed for these (see docs/STATUS.md). */
asm void LZ77UnCompReadByCallbackWrite16bit(void)
{
    swi 18
    bx lr
}
