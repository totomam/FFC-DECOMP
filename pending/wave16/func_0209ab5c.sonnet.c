/* cflags: -nothumb */
#include "ffc/types.h"

int32_t func_0209ab5c(int32_t x) {
    uint32_t mag = x & 0x7fffffff;
    int32_t shift = 0x9e;
    shift -= mag >> 23;
    if (shift <= 0) {
        return (~(x >> 31)) + 0x80000000;
    }
    {
        int32_t r = (int32_t)(((mag << 8) | 0x80000000u) >> shift);
        if (x < 0) r = -r;
        return r;
    }
}
