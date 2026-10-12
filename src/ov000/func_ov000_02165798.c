#include "ffc/types.h"

int func_ov000_02165798(uint32_t *p) {
    uint32_t w = *p;
    uint32_t m = 0xff000000;
    uint32_t x = w << 24;
    uint32_t y = (w << 8) & (m >> 8);
    uint8_t t = (uint8_t)(w >> 24);
    uint32_t z = ((w >> 8) & (m >> 16)) | t;
    uint32_t s = (x & m) | (y | z);
    uint8_t a = (uint8_t)(s >> 24);
    int b = (uint8_t)(s >> 16);
    if (a == 0x0a) return 1;
    if (a == 0xac && b >= 0x10 && b <= 0x1f) return 1;
    if (a == 0xc0 && b == 0xa8) return 1;
    return 0;
}
