/* cflags: -nothumb */
#include "ffc/types.h"

int32_t func_0209ab90(uint32_t x) {
    int32_t r1;
    if (!(x & 0x80000000u)) {
        r1 = 0x9e - (int32_t)(x >> 23);
        if (r1 < 0) {
            return -1;
        }
        return (int32_t)(((x << 8) | 0x80000000u) >> r1);
    }
    return (0xff000000u >= (x << 1)) ? 0 : -1;
}
