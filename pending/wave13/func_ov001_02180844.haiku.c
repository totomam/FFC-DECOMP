#include "ffc/types.h"

uint32_t func_ov001_02180844(uint8_t *p, uint32_t i) {
    uint32_t hi = p[i];
    uint32_t m = 0xff;
    uint32_t x;
    i++;
    m = m << 8;
    x = (hi << 8) & m;
    x = (uint16_t)x;
    return x | p[i];
}
