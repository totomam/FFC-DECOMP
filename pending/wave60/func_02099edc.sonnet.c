/* cflags: -nothumb */
#include "ffc/types.h"
unsigned long long func_02099edc(int x)
{
    uint32_t s = (uint32_t)x & 0x80000000;
    uint32_t m, e, lo, hi;
    int n;
    if (x < 0) x = -x;
    if (x == 0) return 0;
    n = __builtin_clz(x);
    m = (uint32_t)x << n;
    e = 0x41e - n;
    lo = m << 21;
    hi = s | ((m << 1) >> 12) | (e << 20);
    return ((unsigned long long)hi << 32) | lo;
}
