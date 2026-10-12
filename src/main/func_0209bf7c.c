#include "ffc/types.h"

int8_t *func_0209bf7c(int8_t *p, int32_t *out) {
    int32_t b = p[0];
    uint32_t b1, b2, b3;
    if (!(b & 1)) {
        *out = b >> 1;
        return p + 1;
    }
    b1 = (uint8_t)p[1];
    if (!(b & 2)) {
        *out = ((b >> 2) << 8) | b1;
        return p + 2;
    }
    b2 = (uint8_t)p[2];
    if (!(b & 4)) {
        *out = ((b >> 3) << 16) | (b1 << 8) | b2;
        return p + 3;
    }
    b3 = (uint8_t)p[3];
    *out = ((b >> 3) << 24) | (b1 << 16) | (b2 << 8) | b3;
    return p + 4;
}
