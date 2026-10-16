/* cflags: -nothumb */
#include "ffc/types.h"
int32_t func_0209ab5c(int32_t x) {
    int32_t e = (int32_t)(((uint32_t)x & 0x7fffffff) >> 23) - 0x9e;
    uint32_t m;
    if (e < 0) {
        m = (((uint32_t)x << 8) | 0x80000000u) >> -e;
        return x < 0 ? -(int32_t)m : (int32_t)m;
    }
    return (int32_t)(~(x >> 31) + 0x80000000u);
}
