#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_020b1d38[];

void *func_0206ce28(uint32_t unused, uint32_t arg)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x84);
    if (p != 0) {
        func_02056c9c(p, 0);
        p[0] = (uint32_t)data_020b1d38;
        p[0x20] = arg;
    }
    return p;
}
