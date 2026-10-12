#include "ffc/types.h"

extern void func_02059c0c(uint32_t v);

void func_ov009_021a32dc(uint8_t *p, uint32_t a, uint32_t b, uint32_t *c, uint32_t *d)
{
    uint32_t *w = (uint32_t *)p;

    if (w[0x28] == a) {
        if (w[0x2a] == b) {
            return;
        }
    }
    w[0x27] = w[0x28];
    w[0x28] = a;
    w[0x29] = w[0x2a];
    w[0x2a] = b;
    w[0x2b] = c[0];
    w[0x2c] = c[1];
    w[0x2d] = c[2];
    w[0x2e] = 0;
    w[0x2f] = 0;
    w[0x30] = 0;
    if (d != 0) {
        w[0x2e] = d[0];
        w[0x2f] = d[1];
        w[0x30] = d[2];
    }
    func_02059c0c(*(uint32_t *)(*(uint32_t *)(p + 0x80) + 0x8c));
    p[0xc4] = 1;
}
