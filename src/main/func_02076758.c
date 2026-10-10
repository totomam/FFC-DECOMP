#include "ffc/types.h"

extern void func_02056c9c(void *p, int v);
extern uint8_t data_020b27dc[];

void *func_02076758(void *p)
{
    func_02056c9c(p, 0);
    *(void **)p = data_020b27dc;
    *(uint32_t *)((uint8_t *)p + 0x80) = 0;
    return p;
}
