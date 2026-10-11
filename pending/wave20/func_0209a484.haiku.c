/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_0209a484(int32_t x) {
    uint32_t sign = (uint32_t)x & 0x80000000u;
    uint32_t m = (uint32_t)x;
    uint32_t e = 158;
    uint32_t low;
    if ((int32_t)sign < 0) {
        m = -m;
    }
    if (m == 0) {
        return 0;
    }
    while (!(m & 0x80000000u)) {
        m <<= 1;
        e--;
    }
    low = m & 0xff;
    m = sign | ((m << 1) >> 9);
    m |= e << 23;
    if (low == 0) {
        return m;
    }
    if (!(low & 0x80)) {
        return m;
    }
    if ((low & 0x7f) != 0 || (m & 1)) {
        m += 1;
    }
    return m;
}
