/* cflags: -nothumb */
#include "ffc/types.h"

uint64_t func_02099390(uint64_t a, uint64_t b) {
    uint32_t sa = (uint32_t)(a >> 63);
    uint32_t sb = (uint32_t)(b >> 63);
    int32_t ea = (int32_t)((a >> 52) & 0x7ff);
    int32_t eb = (int32_t)((b >> 52) & 0x7ff);
    uint64_t ma = a & 0xfffffffffffffULL;
    uint64_t mb = b & 0xfffffffffffffULL;
    uint64_t r;
    int32_t e;
    uint32_t s;
    int32_t d;

    if (ea == 0x7ff) {
        if (ma != 0 || (eb == 0x7ff && mb != 0)) {
            return 0x7ff00000ULL << 32 | 0x80000000ULL << 32;
        }
        if (eb == 0x7ff && sa != sb) {
            return 0xfff00000ULL << 32;
        }
        return a;
    }
    if (eb == 0x7ff) {
        if (mb != 0) return 0x7ff00000ULL << 32 | 0x80000000ULL << 32;
        return b;
    }
    if (sa != sb) {
        /* magnitude subtraction */
        uint64_t aa = a & 0x7fffffffffffffffULL;
        uint64_t bb = b & 0x7fffffffffffffffULL;
        if (aa == bb) return 0;
        if (aa > bb) {
            s = sa;
            r = aa - bb;
        } else {
            s = sb;
            r = bb - aa;
        }
        return ((uint64_t)s << 63) | r;
    }

    s = sa;
    if (ea == 0) ea = 1; else ma |= 0x10000000000000ULL;
    if (eb == 0) eb = 1; else mb |= 0x10000000000000ULL;
    ma <<= 3;
    mb <<= 3;
    d = ea - eb;
    e = ea;
    if (d > 0) {
        if (d > 60) mb = 1;
        else mb = (mb >> d) | ((mb & ((1ULL << d) - 1)) != 0);
    } else if (d < 0) {
        e = eb;
        if (-d > 60) ma = 1;
        else ma = (ma >> -d) | ((ma & ((1ULL << -d) - 1)) != 0);
    }
    r = ma + mb;
    if (r & (1ULL << 56)) {
        r = (r >> 1) | (r & 1);
        e++;
    }
    if (e >= 0x7ff) {
        return ((uint64_t)s << 63) | (0x7ffULL << 52);
    }
    {
        uint64_t rnd = r & 7;
        r >>= 3;
        if (rnd > 4 || (rnd == 4 && (r & 1))) r++;
        if (r & (1ULL << 53)) { r >>= 1; e++; }
    }
    return ((uint64_t)s << 63) | ((uint64_t)e << 52) | (r & 0xfffffffffffffULL);
}
