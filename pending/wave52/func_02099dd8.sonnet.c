/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_02099dd8(uint32_t lo, uint32_t hi)
{
    uint32_t sign = hi & 0x80000000u;
    uint32_t ip = hi >> 20;
    uint32_t e, r, t, m;

    ip &= ~0x800u;
    if (ip != 0) {
        if (((ip << 21) + 0x200000u) < 0x200000u) {
            if ((lo | (hi << 12)) == 0) return sign | 0x7F800000u;
            return 0x7FFFFFFFu;
        }
        e = ip - 0x380;
        if (ip <= 0x380) {
            if ((int32_t)e == -0x17) {
                r = sign;
                if ((lo | (hi << 12)) != 0) r++;
                return r;
            }
            if ((int32_t)e < -0x17) return sign;
            m = ((hi << 11) | 0x80000000u) >> 8;
            m |= lo >> 29;
            t = lo << 3;
            r = sign | (m >> (1 - e));
            m = m << (32 - (1 - e));
            if (t != 0) m |= 1;
            t = m;
            if (t == 0) return r;
            if ((t & 0x80000000u) == 0) return r;
            if ((t << 1) != 0 || (r & 1)) r++;
            return r;
        }
        if ((int32_t)e >= 0xFF) return sign | 0x7F800000u;
        r = sign | ((hi << 12) >> 9) | (lo >> 29);
        t = lo << 3;
        r |= e << 23;
        if (t == 0) return r;
        if ((t & 0x80000000u) == 0) return r;
        if ((t << 1) != 0 || (r & 1)) r++;
        return r;
    }
    return sign;
}
