/* cflags: -nothumb */
#include "ffc/types.h"

int32_t func_0209abd0(uint32_t lo, int32_t hi) {
    int32_t sh;
    uint32_t m;
    int32_t r;
    sh = 0x41e - ((hi & 0x7fffffff) >> 20);
    if (sh <= 0) {
        return (int32_t)(~(hi >> 31) + 0x80000000u);
    }
    if (sh >= 32) {
        return 0;
    }
    m = ((uint32_t)hi << 11) | 0x80000000u | (lo >> 21);
    r = (int32_t)(m >> sh);
    if (hi < 0) {
        r = -r;
    }
    return r;
}
