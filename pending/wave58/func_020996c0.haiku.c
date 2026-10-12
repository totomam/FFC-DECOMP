/* cflags: -nothumb */
#include "ffc/types.h"

uint64_t func_020996c0(uint64_t a, uint64_t b)
{
    uint64_t ma = a & 0x7FFFFFFFFFFFFFFFULL;
    uint64_t mb = b & 0x7FFFFFFFFFFFFFFFULL;
    uint64_t sign = a & 0x8000000000000000ULL;
    uint64_t fa, fb, r, mant, sticky, t;
    uint32_t ea, eb;
    int32_t d;

    if (ma < mb) {
        t = a; a = b; b = t;
        t = ma; ma = mb; mb = t;
    }
    ea = (uint32_t)(ma >> 52);
    eb = (uint32_t)(mb >> 52);
    fa = (ma << 11) | 0x8000000000000000ULL;
    fb = (mb << 11) | 0x8000000000000000ULL;
    d = (int32_t)(ea - eb);
    if (d > 0) {
        if (d < 64) {
            sticky = (fb << (64 - d)) != 0;
            fb = (fb >> d) | sticky;
        } else {
            fb = 1;
        }
    }
    r = fa + fb;
    if (r < fa) {
        r = (r >> 1) | (r & 1) | 0x8000000000000000ULL;
        ea++;
    }
    mant = (r >> 11) & 0x000FFFFFFFFFFFFFULL;
    {
        uint64_t guard = r & 0x7FF;
        if (guard > 0x400 || (guard == 0x400 && (mant & 1))) {
            mant++;
        }
    }
    return sign + ((uint64_t)ea << 52) + mant;
}
