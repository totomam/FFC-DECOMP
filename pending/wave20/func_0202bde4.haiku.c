#include "ffc/types.h"

extern void func_0202afc0(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_0202bde4(uint8_t *s, uint32_t a, uint32_t b, uint32_t c, uint8_t d) {
    uint32_t *w = (uint32_t *)s;
    w[6] = 0;
    w[7] = 0x40000000;
    func_0202afc0(s, a, b, 0, 0);
    w[3] = w[3] & ~0xffu;
    w[8] = c;
    s[0x41] = d;
}
