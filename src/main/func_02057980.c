#include "ffc/types.h"

extern void func_02057848(void *a, void *b);
extern uint32_t data_0213e0b8[];

void func_02057980(uint8_t *p, uint32_t *out) {
    uint32_t loc[3];
    volatile uint16_t *h = (volatile uint16_t *)0x2ffffa8;
    uint16_t v;
    uint32_t t;

    if (((int)(*h & 0x8000)) >> 15) {
        *out = 0;
    } else {
        v = (0x2fff ^ (*(volatile uint16_t *)0x4000130 | *h)) & 0x2fff;
        t = v & 0x40;
        *out = (v & ~(t << 1) & ~((v & 0x20) >> 1)) & 0xffff;
        if (p[0x1d]) {
            func_02057848(loc, &loc[1]);
            if (*(uint8_t *)loc) {
                *out = *out | (0x40 << 6);
            }
            out[1] = loc[1];
            out[2] = loc[2];
        }
    }
    data_0213e0b8[1] = *out;
}
