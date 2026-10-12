#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020b24e0[];
extern uint32_t data_0213e1cc[];
extern uint32_t data_020b2480[];

void func_02073bb0(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x34);
    if (p == 0) {
        return;
    }
    p[3] &= ~0xffu;
    p[0] = (uint32_t)data_020b24e0;
    p[5] = a;
    p[6] = 2;
    ((uint8_t *)p)[0x1c] = 1;
    p[8] = 0;
    p[9] = 0;
    data_0213e1cc[p[6]] = 9;
    p[0] = (uint32_t)data_020b2480;
    p[10] = b;
    p[11] = c;
    p[12] = d;
}
