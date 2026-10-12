/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_0209b338(uint32_t a, uint32_t b) {
    uint32_t ea, eb, ma, mb, sign, r, t;
    int32_t d, e;

    if (((a ^ b) & 0x80000000u) != 0) {
        b ^= 0x80000000u;
        if ((a << 1) == 0) {
            return b;
        }
        if (((b & 0x7fffffffu) << 0) == 0) {
            return a;
        }
        if ((a & 0x7fffffffu) < (b & 0x7fffffffu)) {
            t = a; a = b; b = t;
        }
        ea = (a >> 23) & 0xffu;
        eb = (b >> 23) & 0xffu;
        ma = (a << 8) | 0x80000000u;
        mb = (b << 8) | 0x80000000u;
        d = (int32_t)(ea - eb);
        if (d != 0) {
            if (d >= 32) mb = 0; else mb >>= d;
        }
        r = ma - mb;
        if (r == 0) return 0;
        sign = a & 0x80000000u;
        e = (int32_t)ea;
        while ((r & 0x80000000u) == 0) { r <<= 1; e--; }
        r = (r >> 8) & 0x7fffffffu;
        return sign | ((uint32_t)e << 23) | r;
    }

    sign = a & 0x80000000u;
    ea = (a >> 23) & 0xffu;
    eb = (b >> 23) & 0xffu;
    ma = (a << 8) | 0x80000000u;
    mb = (b << 8) | 0x80000000u;
    d = (int32_t)(ea - eb);
    if (d < 0) {
        uint32_t tmp = ma; ma = mb; mb = tmp;
        tmp = ea; ea = eb; eb = tmp;
        d = -d;
    }
    if (d != 0) {
        if (d >= 32) mb = 0; else mb >>= d;
    }
    r = ma + mb;
    e = (int32_t)ea;
    if (r & 0x80000000u) {
        r = (r >> 1) | (r & 1u);
        e++;
    }
    return sign | ((uint32_t)e << 23) | ((r >> 8) & 0x7fffffffu);
}
