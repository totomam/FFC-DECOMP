#include "ffc/types.h"

uint8_t *func_0209bfdc(uint8_t *p, uint32_t *out) {
    uint32_t b0 = p[0];
    if (!(b0 & 1)) {
        *out = b0 >> 1;
        return p + 1;
    }
    uint32_t b1 = p[1];
    if (!(b0 & 2)) {
        *out = ((b0 >> 2) << 8) | b1;
        return p + 2;
    }
    uint32_t b2 = p[2];
    if (!(b0 & 4)) {
        *out = ((b0 >> 3) << 16) | (b1 << 8) | b2;
        return p + 3;
    }
    uint32_t b3 = p[3];
    *out = ((b0 >> 3) << 24) | (b1 << 16) | (b2 << 8) | b3;
    return p + 4;
}
