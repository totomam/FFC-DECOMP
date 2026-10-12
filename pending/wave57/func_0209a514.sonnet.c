/* cflags: -nothumb */
#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t n, uint32_t d);

int64_t func_0209a514(int64_t a, int64_t b) {
    uint64_t n, d, rem = 0, quo = 0;
    int neg_a, i;

    if (b == 0) {
        return a;
    }
    if (((uint64_t)a >> 31) == 0 && ((uint64_t)b >> 31) == 0) {
        uint64_t res = func_0209a76c((uint32_t)a, (uint32_t)b);
        return (int64_t)(uint32_t)(res >> 32);
    }
    neg_a = a < 0;
    n = neg_a ? (uint64_t)(-a) : (uint64_t)a;
    d = b < 0 ? (uint64_t)(-b) : (uint64_t)b;
    for (i = 63; i >= 0; i--) {
        rem = (rem << 1) | ((n >> i) & 1);
        if (rem >= d) {
            rem -= d;
            quo |= (uint64_t)1 << i;
        }
    }
    if (neg_a) {
        return -(int64_t)rem;
    }
    return (int64_t)rem;
}
