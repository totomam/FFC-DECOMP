/* cflags: -nothumb -proc arm946e */
#include "ffc/types.h"
uint32_t func_0209a484(int32_t x)
{
    uint32_t sign = (uint32_t)x & 0x80000000;
    uint32_t m, lz, low, r;
    if (x < 0) x = -x;
    if (x == 0) return 0;
    m = (uint32_t)x;
    lz = __clz(m);
    m <<= lz;
    low = m & 0xff;
    r = sign | ((m + m) >> 9) | ((0x9e - lz) << 23);
    if (low == 0) return r;
    if (!(low & 0x80)) return r;
    if ((low & 0x7f) == 0 && (r & 1) == 0) return r;
    return r + 1;
}
