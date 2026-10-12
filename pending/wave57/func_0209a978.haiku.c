/* cflags: -nothumb */
#include "ffc/types.h"

uint64_t func_0209a978(uint32_t n, uint32_t d)
{
    uint32_t q = 0;
    uint32_t r = n;
    int i;

    if (d == 0) {
        return n;
    }
    if (n < d) {
        return ((uint64_t)n) << 32;
    }
    r = 0;
    for (i = 31; i >= 0; i--) {
        r = (r << 1) | ((n >> i) & 1);
        q <<= 1;
        if (r >= d) {
            r -= d;
            q |= 1;
        }
    }
    return ((uint64_t)r << 32) | q;
}
