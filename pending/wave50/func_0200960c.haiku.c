#include "ffc/types.h"

extern void func_020059e4(uint32_t *a, uint32_t n);
extern uint32_t *func_020096c8(uint32_t *a, uint32_t x, uint32_t y, uint8_t *b, uint32_t c, uint32_t d);

uint32_t *func_0200960c(uint32_t *a, uint8_t *b, uint32_t c, uint32_t d) {
    uint32_t len;
    uint32_t n;
    uint32_t i;
    for (i = 0; i < 3; i++) {
        a[i] = 0;
    }
    if (*(uint32_t *)b & 1) {
        len = *(uint32_t *)(b + 4);
    } else {
        len = ((uint32_t)b[0] >> 1) & 0x7f;
    }
    if (c <= len) {
        uint32_t rem = len - c;
        uint32_t *p = (rem < d) ? &rem : &d;
        n = *p;
    } else {
        n = 0;
    }
    func_020059e4(a, n);
    func_020096c8(a, 0, 0, b, c, d);
    return a;
}
