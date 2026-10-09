#include "ffc/types.h"

/* BIOS call stub: C cannot emit swi, so asm is allowed for these (see docs/STATUS.md). */
asm int Div(int number, int denom)
{
    swi 9
    bx lr
}
