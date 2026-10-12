/* cflags: -nothumb */
#include "ffc/types.h"

uint64_t func_0209a76c(int32_t a, int32_t b) {
    uint32_t n, d, q, r;
    uint32_t qneg = ((uint32_t)(a ^ b)) >> 31;
    uint32_t rneg = ((uint32_t)a) >> 31;
    int i;

    n = (a < 0) ? -(uint32_t)a : (uint32_t)a;
    d = (b < 0) ? -(uint32_t)b : (uint32_t)b;

    if (d == 0) {
        q = n;
        r = 0;
    } else if (n < d) {
        q = 0;
        r = n;
    } else {
        q = 0;
        r = 0;
        for (i = 31; i >= 0; i--) {
            r = (r << 1) | ((n >> i) & 1);
            q <<= 1;
            if (r >= d) {
                r -= d;
                q |= 1;
            }
        }
    }

    if (qneg) {
        q = -q;
    }
    if (rneg) {
        r = -r;
    }
    return ((uint64_t)r << 32) | (uint64_t)q;
}
