#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_ov007_021c5570;

void func_ov007_021ae984(void)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x14);
    if (p != 0) {
        p[3] &= ~0xffu;
        p[0] = (uint32_t)&data_ov007_021c5570;
    }
}
