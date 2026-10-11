#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055914(void *p);
extern uint32_t data_020ac318[];

void func_ov002_021ad13c(uint8_t *p)
{
    uint32_t *r1;
    uint8_t b;
    uint32_t w2;
    uint32_t w0;

    r1 = (uint32_t *)func_0205681c(0x1c);
    if (r1 != 0) {
        b = p[0x20];
        w2 = *(uint32_t *)(p + 0x1c);
        w0 = *(uint32_t *)(p + 0x18);
        r1[2] = 0;
        r1[3] = 0x10119;
        r1[0] = (uint32_t)data_020ac318;
        r1[4] = w0;
        r1[5] = w2;
        *((uint8_t *)r1 + 0x18) = b;
    }
    func_02055914(*(void **)(p + 0x14));
    {
        uint32_t v = *(uint32_t *)(p + 0xc);
        v &= ~0xffu;
        v |= 2;
        *(uint32_t *)(p + 0xc) = v;
    }
}
