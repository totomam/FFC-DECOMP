#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern uint8_t data_020b27bc[];

void *func_02076dbc(void *p)
{
    func_02056c9c(p, 0);
    *(void **)p = data_020b27bc;
    *(uint32_t *)((uint8_t *)p + 0x80) = 0;
    *(uint32_t *)((uint8_t *)p + 0x84) = 0;
    return p;
}
