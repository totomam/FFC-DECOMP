/* cflags: -nothumb */
#include "ffc/types.h"

int32_t func_0209ab5c(uint32_t x) {
    uint32_t mag = x & 0x7fffffffu;
    int32_t shift = 0x9e - (int32_t)(mag >> 23);
    if (shift <= 0) {
        return (int32_t)(~((int32_t)x >> 31) + 0x80000000u);
    }
    {
        uint32_t m = (mag << 8) | 0x80000000u;
        int32_t r = (int32_t)(m >> shift);
        if ((int32_t)x < 0) {
            r = -r;
        }
        return r;
    }
}
