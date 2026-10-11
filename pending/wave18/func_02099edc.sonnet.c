/* cflags: -nothumb */
#include "ffc/types.h"

uint64_t func_02099edc(int32_t x) {
    uint32_t sign = (uint32_t)x & 0x80000000u;
    uint32_t mag = (uint32_t)x;
    uint32_t e = 0x41e;
    uint32_t hi, lo;

    if (sign) {
        mag = -mag;
    }
    if (mag == 0) {
        return 0;
    }
    while (mag < 0x80000000u) {
        mag <<= 1;
        e--;
    }
    hi = sign | ((mag << 1) >> 12) | (e << 20);
    lo = mag << 21;
    return ((uint64_t)hi << 32) | lo;
}
