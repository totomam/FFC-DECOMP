#include "ffc/types.h"

extern int32_t func_02083720(int32_t x);
extern void func_02078dd0(void *p, uint32_t x, uint32_t a, uint32_t b, uint32_t d, const void *q, uint32_t v);
extern uint8_t data_020a1930[];
extern uint8_t data_020a1924[];

void func_02078eb4(void *p, uint32_t x, uint32_t a, uint32_t b, uint32_t d)
{
    uint32_t c;
    int32_t i6;
    int32_t i4;
    uint32_t j;
    uint8_t *base;
    uint32_t v;

    if (a < 8) {
        i6 = 31 - func_02083720((int32_t)a);
    } else {
        i6 = 3;
    }
    if (b < 8) {
        i4 = 31 - func_02083720((int32_t)b);
    } else {
        i4 = 3;
    }
    base = data_020a1930 + (i4 << 3);
    j = i6 << 1;
    v = c & ~0xffu;
    v |= base[j];
    v &= 0xffff00ffu;
    v |= base[j + 1] << 8;
    func_02078dd0(p, x, a, b, d, data_020a1924, v);
}
