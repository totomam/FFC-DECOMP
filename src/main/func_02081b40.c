#include "ffc/types.h"

void func_02081b40(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    uint32_t t = a | 0x40;
    t |= b << 8;
    uint32_t u = (d << 8) | c;
    *p = (u << 16) | t;
}
