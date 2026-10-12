/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t *func_02004f20(uint32_t *d, uint32_t v, uint32_t n) {
    uint32_t *e;
    if (n & ~0x1fu) {
        e = d + ((n & ~0x1fu) >> 2);
        do {
            d[0] = v;
            d[1] = v;
            d[2] = v;
            d[3] = v;
            d[4] = v;
            d[5] = v;
            d[6] = v;
            d[7] = v;
            d += 8;
        } while (e > d);
    }
    if (n & 0x10) {
        d[0] = v; d[1] = v; d[2] = v; d[3] = v;
        d += 4;
    }
    if (n & 8) {
        d[0] = v; d[1] = v;
        d += 2;
    }
    if (n & 4) {
        d[0] = v;
        d += 1;
    }
    return d;
}
