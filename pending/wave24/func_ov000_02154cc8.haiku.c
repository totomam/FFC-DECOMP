#include "ffc/types.h"

uint32_t func_ov000_02154cc8(uint8_t *p) {
    uint32_t x = 0;
    uint32_t r;
    x = x | ((uint32_t)p[0] << 24);
    x = x | ((uint32_t)p[1] << 16);
    x = x | ((uint32_t)p[2] << 8);
    x = x | p[3];
    r = (x << 24) & 0xFF000000;
    r = r | ((x << 8) & 0x00FF0000);
    r = r | ((x >> 8) & 0x0000FF00);
    r = r | ((x >> 24) << 24 >> 24);
    return r;
}
