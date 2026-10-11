#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t v);
extern uint32_t data_020b1d08[];

void *func_0206d774(void)
{
    uint8_t *p = (uint8_t *)func_0205681c(0x84);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(uint32_t *)p = (uint32_t)data_020b1d08;
        *(uint32_t *)(p + 0x80) = 0;
    }
    return p;
}
