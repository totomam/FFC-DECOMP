#include "ffc/types.h"

int func_ov000_0215e88c(uint32_t x)
{
    uint32_t a = x << 24;
    uint32_t t = x << 8;
    uint32_t c = (uint8_t)(x >> 24);
    uint32_t d = (x >> 8) & 0x0000ff00;
    uint32_t y = ((t & 0x00ff0000) | c | d);
    y = (a & 0xff000000) | y;
    uint8_t b0 = (uint8_t)((y & 0xff000000) >> 24);
    uint8_t b1 = (uint8_t)((y & 0x00ff0000) >> 16);

    if (b0 == 0x0a) {
        return 1;
    }
    if (b0 == 0xac) {
        if (b1 >= 0x10 && b1 <= 0x1f) {
            return 1;
        }
        return 0;
    }
    if (b0 == 0xc0 && b1 == 0xa8) {
        return 1;
    }
    return 0;
}
