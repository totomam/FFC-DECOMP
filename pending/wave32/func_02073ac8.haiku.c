#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *p, uint32_t v);
extern uint32_t data_020b24e0[];
extern uint32_t data_0213e1cc[];
extern uint32_t data_020b24c8[];

void *func_02073ac8(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x40);
    if (p) {
        p[3] &= ~0xffu;
        p[0] = (uint32_t)data_020b24e0;
        p[5] = a;
        p[6] = 0;
        *(uint8_t *)&p[7] = 1;
        p[8] = 0;
        p[9] = 0;
        data_0213e1cc[p[6]] = 9;
        p[0] = (uint32_t)data_020b24c8;
        func_02005988(&p[10], b);
        func_02005988(&p[13], c);
    }
    return p;
}
