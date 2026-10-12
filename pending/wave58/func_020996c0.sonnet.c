/* cflags: -nothumb */
#include "ffc/types.h"

extern uint64_t func_020993a0(uint64_t a, uint64_t b);

uint64_t func_020996c0(uint64_t a, uint64_t b)
{
    uint64_t t, fa, fb, r;
    uint32_t ea, eb;
    int32_t d;
    uint64_t sign;

    if ((int64_t)(a ^ b) < 0) {
        return func_020993a0(a, b ^ 0x8000000000000000ULL);
    }
    if (a < b) { t = a; a = b; b = t; }
    ea = (uint32_t)(a >> 52);
    eb = (uint32_t)(b >> 52);
    fa = (a << 11) | 0x8000000000000000ULL;
    fb = (b << 11) | 0x8000000000000000ULL;
    sign = a & 0x8000000000000000ULL;
    d = ea - eb;
    if (d > 0) {
        if (d < 64) fb = (fb >> d) | ((fb << (64 - d)) != 0);
        else fb = 1;
    }
    r = fa - fb;
    if (r == 0) return 0;
    return sign | ((uint64_t)ea << 52) | (r >> 11);
}
