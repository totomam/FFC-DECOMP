/* cflags: -nothumb */
#include "ffc/types.h"

typedef union {
    unsigned long long v;
    struct {
        uint32_t lo;
        uint32_t hi;
    } w;
} U64;

unsigned long long func_0209a73c(unsigned long long x, uint32_t s)
{
    U64 u;

    u.v = x;
    s &= 63;
    if (s == 0) {
        return x;
    }
    if (s >= 32) {
        u.w.hi = u.w.lo << (s - 32);
        u.w.lo = 0;
    } else {
        u.w.hi = (u.w.hi << s) | (u.w.lo >> (32 - s));
        u.w.lo = u.w.lo << s;
    }
    return u.v;
}
