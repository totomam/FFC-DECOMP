#include "ffc/types.h"

extern void func_02084b00(void *dst, void *src);
extern void func_02082030(uint32_t v);
extern void func_02081c40(void *p);

void func_02023088(uint8_t *p)
{
    uint32_t s[18];
    uint32_t *w = (uint32_t *)p;
    uint32_t i = 0x5d;
    s[1] = w[i];
    uint32_t b = w[i - 1];
    uint32_t c = w[i + 1];
    s[0] = w[0x21];
    uint32_t d = w[i - 2];

    func_02084b00(p + 0xc0, &s[2]);
    *(volatile uint32_t *)0x4000580 = (b << 8) | s[1] | (c << 16) | (d << 24);
    func_02082030(s[0]);
    *(volatile uint32_t *)0x4000440 = 0;
    func_02081c40(&s[2]);
    func_02084b00(&s[2], p + ((uint32_t)0x4000440 >> 18));
}
