/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_0209a484(int32_t x) {
    uint32_t sign = (uint32_t)x & 0x80000000u;
    uint32_t a;
    uint32_t n;
    uint32_t r;
    uint32_t lo;
    if (sign) {
        x = -x;
    }
    a = (uint32_t)x;
    if (a == 0) {
        return 0;
    }
    n = 0;
    if (a < 0x00010000u) { a <<= 16; n += 16; }
    if (a < 0x01000000u) { a <<= 8; n += 8; }
    if (a < 0x10000000u) { a <<= 4; n += 4; }
    if (a < 0x40000000u) { a <<= 2; n += 2; }
    if (a < 0x80000000u) { a <<= 1; n += 1; }
    lo = a & 0xff;
    r = sign | ((a + a) >> 9);
    r = r | ((158 - n) << 23);
    if (!(lo & 0x80)) {
        return r;
    }
    if ((lo & 0x7f) != 0 || (r & 1)) {
        r++;
    }
    return r;
}
