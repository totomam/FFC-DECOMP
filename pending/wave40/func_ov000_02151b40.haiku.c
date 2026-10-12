#include "ffc/types.h"

extern int32_t func_ov000_02151a28(uint8_t *p);
extern int32_t func_02092a04(uint8_t *a, uint8_t *b, uint32_t c);

int32_t func_ov000_02151b40(uint8_t *p, uint8_t *q)
{
    int32_t i;
    int32_t n;
    uint16_t v;
    uint8_t *base;
    int32_t off;

    v = *(uint16_t *)(p + 0xa);
    if (v == 0x20) {
        int32_t r = func_ov000_02151a28(p);
        if (r > 0) {
            return r;
        }
    }

    n = q[0x14c2];
    off = 0xc2a;
    base = q + 0xc2c;
    for (i = 0; i < n; i++) {
        if (*(uint16_t *)(q + i * 0xc0 + off) == v) {
            if (func_02092a04(p + 0xc, base + i * 0xc0, v) == 0) {
                return q[0xbf5 + i * 4];
            }
        }
    }
    return -1;
}
