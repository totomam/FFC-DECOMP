/* cflags: -nothumb */
#include "ffc/types.h"

uint64_t func_0209a400(uint32_t x) {
    uint32_t sign = x & 0x80000000u;
    uint32_t exp = (x >> 23) & 0xffu;
    uint32_t mant = x << 9;
    uint32_t n;
    uint32_t hi, lo;

    if (exp == 0) {
        if (mant == 0) {
            return (uint64_t)sign << 32;
        }
        mant >>= 1;
        n = __cntlzw(mant);
        mant <<= n;
        exp = 1 - n;
        mant += mant;
    } else if (exp == 0xff) {
        if (mant != 0) {
            return 0x7fffffffffffffffULL;
        }
        return ((uint64_t)(sign | 0x7ff00000u)) << 32;
    }

    exp += 0x380;
    hi = sign | (mant >> 12) | (exp << 20);
    lo = mant << 20;
    return ((uint64_t)hi << 32) | lo;
}
