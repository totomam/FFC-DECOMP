/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_02099dd8(uint32_t lo, uint32_t hi)
{
    uint32_t sign = hi & 0x80000000u;
    uint32_t ip = (hi >> 20) & ~0x800u;
    uint32_t ex, r, t, m, sh, s;
    int32_t d;

    if (ip == 0) {
        return sign;
    }
    s = ip << 21;
    if (s + 0x200000u < s) {
        if ((lo | (hi << 12)) != 0) {
            return 0x7FFFFFFFu;
        }
        return sign | 0x7F800000u;
    }

    ex = ip - 0x380u;
    if (ex == 0 || ip < 0x380u) {
        d = (int32_t)ex;
        if (d == -0x17) {
            if ((lo | (hi << 12)) != 0) {
                return sign + 1;
            }
            return sign;
        }
        if (d < -0x17) {
            return sign;
        }
        m = ((hi << 11) | 0x80000000u) >> 8;
        m |= lo >> 29;
        sh = (uint32_t)(1 - d);
        r = sign | (m >> sh);
        t = m << (32 - sh);
        if ((lo << 3) != 0) {
            t |= 1;
        }
        if (t == 0) {
            return r;
        }
        if ((t & 0x80000000u) == 0) {
            return r;
        }
        t <<= 1;
        if (t != 0) {
            r++;
        } else {
            r += r & 1;
        }
        return r;
    }

    if (ex >= 0xFFu) {
        return sign | 0x7F800000u;
    }

    m = ((hi << 12) >> 9) | (lo >> 29);
    r = sign | m | (ex << 23);
    t = lo << 3;
    if (t == 0) {
        return r;
    }
    if ((t & 0x80000000u) == 0) {
        return r;
    }
    t <<= 1;
    if (t != 0) {
        r++;
    } else {
        r += r & 1;
    }
    return r;
}
