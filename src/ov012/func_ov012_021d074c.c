#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint8_t data_ov012_021d3d5c[];

void func_ov012_021d074c(uint32_t a, uint32_t b)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x1c);
    if (p) {
        p[3] = p[3] & ~0xffu;
        p[0] = (uint32_t)data_ov012_021d3d5c;
        p[5] = a;
        p[6] = b;
    }
}
