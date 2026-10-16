#include "ffc/types.h"
uint32_t func_ov000_02165be0(uint32_t x) {
    uint32_t lo = x & 0xffff;
    uint32_t hi = x >> 16;
    uint32_t a = lo * 16807;
    uint32_t b = hi * 16807;
    uint32_t r = a + ((b << 17) >> 1);
    uint32_t t = b >> 15;
    if (r > 0x7fffffff) r = (r & 0x7fffffff) + 1;
    r += t;
    if (r > 0x7fffffff) r = (r & 0x7fffffff) + 1;
    return r;
}
