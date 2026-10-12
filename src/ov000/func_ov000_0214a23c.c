#include "ffc/types.h"

extern int func_ov000_0214a230(uint8_t a, uint8_t b);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint16_t func_ov000_0214a1f0(uint8_t *p, uint32_t a, uint32_t b);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_02084ca4(void *src, void *dst, uint32_t n);

void func_ov000_0214a23c(uint8_t *p, uint8_t *d)
{
    uint32_t n;
    uint32_t hi;
    uint32_t t;
    int v;
    uint32_t off;
    int len;
    uint32_t r7;

    if (func_ov000_0214a230(d[0], d[1]) == 0) {
        return;
    }
    hi = (uint32_t)d[2] << 8;
    n = d[3];
    t = func_0209a76c(hi + n, 3);
    v = func_ov000_0214a1f0(d + 8, t, 3);
    if ((uint16_t)v == 0) {
        return;
    }
    *(uint16_t *)(p + 0x32) = (uint16_t)v;
    off = ((uint32_t)d[4] << 8) + d[5];
    len = (int)(((uint32_t)d[6] << 8) + d[7]);
    p[0x30] = 0;
    n = n + hi + 8;
    r7 = n + off;
    if (len >= 0x20) {
        func_02084ca4(d + r7, p + 0x34, 0x20);
    } else {
        func_02084b2c(p + 0x34, 0, 0x20 - len);
        func_02084ca4(d + r7, p + 0x54 - len, len);
    }
    p[0x455] = 1;
}
