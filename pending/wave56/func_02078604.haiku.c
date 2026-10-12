#include "ffc/types.h"

extern void func_02084a0c(uint32_t v, uint32_t *p, uint32_t n);

void func_02078604(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t v, uint32_t f)
{
    if (c == 8 && d == 8) {
        func_02084a0c(v, p, f * 8);
        return;
    }
    if (f == 4) {
        uint32_t sh = 32 - (a * 4 + c * 4);
        uint32_t t = 0xFFFFFFFFu >> (a * 4);
        uint32_t mask = (t << (sh + a * 4)) >> sh;
        uint32_t *q = p + b;
        uint32_t *end = p + b + d;
        uint32_t vm = v & mask;
        uint32_t nm = ~mask;
        while (q < end) {
            *q = (*q & nm) | vm;
            q++;
        }
        return;
    }
    {
        uint32_t sa = a * 8;
        uint32_t n1 = 64 - (a * 8 + c * 8);
        uint32_t t6 = 0xFFFFFFFFu >> sa;
        uint32_t mlo;
        uint32_t mhi;
        if (n1 < 32) {
            mlo = t6 << sa;
        } else {
            uint32_t r7 = n1 - 32;
            mlo = (t6 << (sa + r7)) >> r7;
        }
        mhi = 0xFFFFFFFFu << n1;
        if (sa < 32) {
            mhi = mhi >> n1;
        } else {
            mhi = (mhi >> (sa - 32 + n1)) << (sa - 32);
        }
        {
            uint32_t *q = p + b * 2;
            uint32_t *end = p + (b + d) * 2;
            while (q < end) {
                q[0] = (q[0] & ~mlo) | (v & mlo);
                q[1] = (q[1] & ~mhi) | (v & mhi);
                q += 2;
            }
        }
    }
}
