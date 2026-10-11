#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint8_t data_020ac938[];

void *func_ov002_021c92ec(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x28);
    if (p != 0) {
        p[2] = 0;
        p[3] = 0x100c9;
        p[0] = (uint32_t)data_020ac938;
        p[4] = a;
        p[5] = b;
        p[6] = c;
        p[7] = d;
        p[8] = e;
        p[9] = f;
    }
    return p;
}
