#include "ffc/types.h"

uint32_t func_ov000_02165be0(uint32_t x)
{
    uint32_t lo = x & 0xffff;
    uint32_t hi = x >> 16;
    uint32_t b = lo * 0x41a7;
    uint32_t a = hi * 0x41a7;
    uint32_t r = b + ((a << 17) >> 1);
    if (r > 0x7fffffff) {
        r = (r & 0x7fffffff) + 1;
    }
    r = r + (a >> 15);
    if (r > 0x7fffffff) {
        r = (r & 0x7fffffff) + 1;
    }
    return r;
}
