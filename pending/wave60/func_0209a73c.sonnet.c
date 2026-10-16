/* cflags: -nothumb */
#include "ffc/types.h"
uint64_t func_0209a73c(uint64_t v, uint32_t n) {
    int32_t m;
    n &= 0x3f;
    if (n == 0) return v;
    m = n - 0x20;
    if (m >= 0) {
        return (uint64_t)((uint32_t)v << m) << 32;
    }
    return v << n;
}
