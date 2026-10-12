#include "ffc/types.h"

extern void func_02035f58(uint8_t *p, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020ab378;

uint8_t *func_ov002_02197634(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t *s, uint32_t d, uint32_t e) {
    uint32_t *w = (uint32_t *)p;
    uint32_t i;
    uint16_t *dst;
    uint16_t *src;

    w[2] = 0;
    w[3] = 0x100d1;
    w[0] = (uint32_t)&data_020ab378;
    func_02035f58(p + 0x1c, a, b, c);
    w[4] = a;
    w[5] = b;
    w[6] = c;
    w[7] = s[0];
    w[9] = s[2];
    w[11] = s[4];
    w[13] = s[6];
    w[15] = s[8];
    w[17] = s[10];
    w[18] = s[11];
    src = (uint16_t *)s + 0x18;
    dst = (uint16_t *)p + 0x26;
    for (i = 0x11; i != 0; i--) {
        uint16_t t = *src;
        src++;
        *dst = t;
        dst++;
    }
    w[28] = s[21];
    w[29] = s[22];
    w[30] = s[23];
    w[31] = d;
    w[32] = e;
    return p;
}
