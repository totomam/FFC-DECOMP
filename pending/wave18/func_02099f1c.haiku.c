/* cflags: -nothumb */
#include "ffc/types.h"

uint64_t func_02099f1c(int32_t x) {
    uint32_t m;
    int32_t e;
    if (x == 0) {
        return 0;
    }
    e = 0x41e;
    m = (uint32_t)x;
    if (x >= 0) {
        int n = 0;
        while ((int32_t)m >= 0) {
            m <<= 1;
            n++;
        }
        e -= n;
    }
    return ((uint64_t)(((m >> 11) & 0xFFFFFu) | ((uint32_t)e << 20)) << 32) | (uint64_t)(m << 21);
}
