/* cflags: -nothumb */
#include "ffc/types.h"
uint32_t func_0209a4cc(uint32_t x)
{
    uint32_t e, lo, r;
    if (x == 0) return 0;
    e = 0x9e;
    if ((int32_t)x >= 0) {
        int n = __builtin_clz(x);
        x <<= n;
        e -= n;
    }
    lo = x & 0xff;
    r = ((x + x) >> 9) | (e << 23);
    if (lo == 0) return r;
    if (!(lo & 0x80)) return r;
    if ((lo & 0x7f) != 0 || (r & 1)) r += 1;
    return r;
}
