/* cflags: -nothumb */
#include "ffc/types.h"

unsigned long long func_0209a73c(unsigned long long x, int32_t s)
{
    uint32_t lo = (uint32_t)x;
    uint32_t hi = (uint32_t)(x >> 32);
    int32_t t;
    s &= 63;
    if (s == 0) return x;
    t = s - 32;
    if (t >= 0) {
        return (unsigned long long)(lo << t) << 32;
    }
    hi = (hi << s) | (lo >> (32 - s));
    lo = lo << s;
    return ((unsigned long long)hi << 32) | lo;
}
