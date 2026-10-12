#include "ffc/types.h"

extern uint8_t data_020ae960[];
extern void func_020396c4(void *p);

void *func_02039e54(uint8_t *p, uint8_t *s, uint8_t v)
{
    uint32_t *q;
    uint32_t *d;
    uint8_t *e;

    func_020396c4(p);
    *(void **)p = (void *)data_020ae960;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint32_t *)(p + 0x8c) = 0;
    q = (uint32_t *)(p + 0x94);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    d = (uint32_t *)(p + 0xa0);
    d[0] = *(uint32_t *)s;
    d[1] = *(uint32_t *)(s + 4);
    *(int16_t *)(d + 2) = *(int16_t *)(s + 8);
    d[3] = *(uint32_t *)(s + 0xc);
    d[4] = *(uint32_t *)(s + 0x10);
    *(uint16_t *)(d + 5) = *(uint16_t *)(s + 0x14);
    *(uint16_t *)((uint8_t *)(d + 5) + 2) = *(uint16_t *)(s + 0x16);
    d[6] = *(uint32_t *)(s + 0x18);
    e = p + 0xbc;
    *e = v;
    return p;
}
