/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t data_02144c00;

uint64_t func_0209aca8(uint32_t lo, uint32_t hi)
{
    uint32_t ix, qh, ql, rh, rl, bit, t, t4, mh, ml, tr;
    int32_t ip;

    if (hi < 0x7ff00000) {
        ix = hi >> 20;
        if (ix != 0) {
            hi = (hi & ~0x7ff00000u) | 0x100000u;
            ip = ix >> 1;
            if (!(ix & 1)) {
                ip -= 1;
                hi = (hi << 1) | (lo >> 31);
                lo <<= 1;
            }
            rl = lo << 1;
            rh = (hi << 1) | (lo >> 31);

            qh = 0;
            for (bit = 0x200000; bit != 0; bit >>= 1) {
                t = qh + bit;
                if ((int32_t)t <= (int32_t)rh) {
                    qh = t;
                    rh -= t;
                }
                rh = (rh << 1) | (rl >> 31);
                rl <<= 1;
            }

            t4 = qh;
            ql = 0;
            if (!(rh < t4 || (rh == t4 && rl < 0x80000000))) {
                rl -= 0x80000000;
                rh -= t4;
                t4 += 1;
                ql = 0x80000000;
            }
            rh = (rh << 1) | (rl >> 31);
            rl <<= 1;

            t = 0;
            for (bit = 0x40000000; bit != 0; bit >>= 1) {
                tr = t + bit;
                if (!(t4 > rh || (t4 == rh && tr > rl))) {
                    t = tr;
                    rl -= tr;
                    rh -= t4;
                    ql += bit;
                }
                rh = (rh << 1) | (rl >> 31);
                rl <<= 1;
            }

            if ((rh | rl) == 0) ql &= ~1u;

            mh = qh >> 1;
            ml = (ql >> 1) | ((qh & 1) << 31);
            ml += ql & 1;
            mh += (ml < (ql >> 1)) ? 1 : 0;

            hi = mh + 0x20000000 - 0x100000 + ((uint32_t)ip << 20);
            return ((uint64_t)hi << 32) | ml;
        }
        if (hi == 0 && lo == 0) return ((uint64_t)hi << 32) | lo;
        return ((uint64_t)hi << 32) | lo;
    } else {
        if (hi & 0x80000000) {
            if (((hi & 0x7fffffff) | lo) == 0) return ((uint64_t)hi << 32) | lo;
        } else {
            if ((lo | (hi << 12)) == 0) return ((uint64_t)hi << 32) | lo;
        }
        data_02144c00 = 0x21;
        return ((uint64_t)(hi | 0x7ff80000) << 32) | lo;
    }
}
