#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020b1dc8;

void func_0206c290(void)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x14);
    if (p != 0) {
        p[3] &= ~0xffu;
        p[0] = (uint32_t)&data_020b1dc8;
    }
}
