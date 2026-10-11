/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_0209a4cc(int32_t x) {
    uint32_t v = (uint32_t)x;
    uint32_t e = 0x9e;
    uint32_t lo;
    uint32_t r;

    if (x == 0) {
        return 0;
    }
    if (x >= 0) {
        while (!(v & 0x80000000)) {
            v <<= 1;
            e--;
        }
    }
    lo = v & 0xff;
    r = ((v << 1) >> 9) | (e << 23);
    if (lo == 0) {
        return r;
    }
    if (!(lo & 0x80)) {
        return r;
    }
    if ((lo & 0x7f) == 0 && !(r & 1)) {
        return r;
    }
    return r + 1;
}
