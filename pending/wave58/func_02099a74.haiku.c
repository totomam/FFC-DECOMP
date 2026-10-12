/* cflags: -nothumb */
#include "ffc/types.h"

typedef unsigned long long u64;

typedef union {
    double d;
    struct {
        uint32_t lo;
        uint32_t hi;
    } w;
} DblU;

double func_02099a74(double a, double b)
{
    DblU x, y, r;
    uint32_t ah, al, bh, bl, sign;
    int32_t ea, eb, e;
    uint32_t a1, a0, b1, b0;
    u64 p00, p01, p10, p11, mid, hi, lo, mant, rem;

    x.d = a;
    y.d = b;
    ah = x.w.hi;
    al = x.w.lo;
    bh = y.w.hi;
    bl = y.w.lo;

    sign = (ah ^ bh) & 0x80000000;
    ea = (ah >> 20) & 0x7ff;
    eb = (bh >> 20) & 0x7ff;

    if (ea == 0x7ff || eb == 0x7ff) {
        r.w.hi = sign | 0x7ff00000;
        r.w.lo = 0;
        return r.d;
    }
    if (ea == 0 || eb == 0) {
        r.w.hi = sign;
        r.w.lo = 0;
        return r.d;
    }

    a1 = ((ah & 0xfffff) | 0x100000) << 11 | (al >> 21);
    a0 = al << 11;
    b1 = ((bh & 0xfffff) | 0x100000) << 11 | (bl >> 21);
    b0 = bl << 11;

    p00 = (u64)a0 * b0;
    p01 = (u64)a0 * b1;
    p10 = (u64)a1 * b0;
    p11 = (u64)a1 * b1;

    mid = (p00 >> 32) + (u64)(uint32_t)p01 + (u64)(uint32_t)p10;
    lo = (p00 & 0xffffffffULL) | (mid << 32);
    hi = p11 + (p01 >> 32) + (p10 >> 32) + (mid >> 32);

    e = ea + eb - 1023;
    if (!(hi >> 63)) {
        hi = (hi << 1) | (lo >> 63);
        lo <<= 1;
        e--;
    }

    mant = hi >> 11;
    rem = hi & 0x7ff;
    if ((rem & 0x400) && ((rem & 0x3ff) || lo != 0 || (mant & 1))) {
        mant++;
    }
    if (mant >> 53) {
        mant >>= 1;
        e++;
    }

    if (e >= 0x7ff) {
        r.w.hi = sign | 0x7ff00000;
        r.w.lo = 0;
        return r.d;
    }
    if (e <= 0) {
        r.w.hi = sign;
        r.w.lo = 0;
        return r.d;
    }

    r.w.hi = sign | ((uint32_t)e << 20) | (uint32_t)((mant >> 32) & 0xfffff);
    r.w.lo = (uint32_t)mant;
    return r.d;
}
