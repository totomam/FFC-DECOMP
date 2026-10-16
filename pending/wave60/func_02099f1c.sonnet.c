/* cflags: -nothumb */
#include "ffc/types.h"
extern int __clz(uint32_t);
uint64_t func_02099f1c(uint32_t x) {
    uint32_t e, hi;
    if (x == 0) return 0;
    e = 0x41e;
    if ((int32_t)x >= 0) {
        int n = __clz(x);
        x <<= n;
        e -= n;
    }
    hi = ((x + x) >> 12) | (e << 20);
    return ((uint64_t)hi << 32) | (x << 21);
}
