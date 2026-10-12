#include "ffc/types.h"

int func_ov000_0215e88c(uint32_t x)
{
    uint32_t m = 0xff000000;
    uint32_t a = x << 24;
    uint32_t t = (x << 8) & (m >> 8);
    uint32_t c = (uint8_t)(x >> 24);
    uint32_t d = (x >> 8) & (m >> 16);
    uint32_t y = (a & m) | (c | d | t);
    uint32_t b0 = (uint8_t)((y & m) >> 24);
    uint32_t b1 = (uint8_t)((y & (m >> 8)) >> 16);
    if (b0 == 0x0a) return 1;
    if (b0 == 0xac && b1 >= 0x10 && b1 <= 0x1f) return 1;
    if (b0 == 0xc0 && b1 == 0xa8) return 1;
    return 0;
}
