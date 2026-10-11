#include "ffc/types.h"

extern void func_020849e0(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_02078030(uint32_t *p, uint32_t x, uint32_t y) {
    uint32_t a = p[0];
    uint32_t align = y - 1;
    uint32_t off = (align + a) & ~align;
    uint32_t n = x + off;
    uint32_t hdr;
    uint16_t flag;
    uint32_t d;

    if (n > p[1]) {
        return 0;
    }
    hdr = *(p - 1);
    d = n - a;
    flag = (uint16_t)(uint8_t)(uint16_t)hdr;
    if ((flag & 0xff) & 1) {
        func_020849e0(0, a, d);
    }
    p[0] = n;
    return off;
}
