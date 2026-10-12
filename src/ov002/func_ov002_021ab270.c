#include "ffc/types.h"

extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021d3310(const void *object);
extern int data_ov002_021d5314;

uint32_t *func_ov002_021ab270(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint8_t d)
{
    uint32_t *r4 = func_0205681c(0x34);
    if (r4 != 0) {
        uint8_t r6;
        uint32_t r1, v1, v2;
        if (func_ov002_021d3310(p + 0x13c) != 0) {
            r6 = 0;
        } else {
            r6 = 1;
        }
        r1 = func_ov002_021d3310(p + 0x13c);
        v1 = *(uint32_t *)(p + 0xc4);
        v2 = *(uint32_t *)(p + 0xb8);
        r4[3] &= ~0xffu;
        r4[0] = (uint32_t)&data_ov002_021d5314;
        r4[5] = 0;
        r4[6] = v2;
        r4[7] = a;
        r4[8] = v1;
        r4[9] = r1;
        r4[10] = b;
        r4[11] = c;
        *((uint8_t *)r4 + 0x30) = r6;
        *((uint8_t *)r4 + 0x31) = d;
    }
    return r4;
}
