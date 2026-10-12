#include "ffc/types.h"

extern int32_t func_ov000_02151a28(uint8_t *p);
extern int32_t func_02092a04(uint8_t *a, uint8_t *b, uint32_t c);

int32_t func_ov000_02151b40(uint8_t *p, uint8_t *q)
{
    int32_t i;
    int32_t n;
    uint32_t v;
    uint8_t *base;
    int32_t off;

    if (*(uint16_t *)(p + 0xa) == 0x20) {
        int32_t r = func_ov000_02151a28(p);
        if (r > 0) {
            return r;
        }
    }

    v = *(uint16_t *)(p + 0xa);
    base = q + 0xc2c;
    n = q[0x14c2];
    off = 0xc2a;
    p += 0xc;
    for (i = 0; i < n; i++) {
        if (v == *(uint16_t *)(q + i * 0xc0 + off)) {
            if (func_02092a04(p, base + i * 0xc0, v) == 0) {
                return (q + i * 4)[0xbf5];
            }
        }
    }
    return -1;
}
