#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x58];
    uint8_t *base;
} Ctx;

void func_0201f36c(Ctx *c, int idx, uint8_t *dst)
{
    uint8_t *src = c->base + idx * 0x60;
    uint32_t *d = (uint32_t *)dst;
    uint32_t *s = (uint32_t *)src;
    uint32_t n;
    uint8_t *dp;
    uint8_t *sp;
    uint16_t v;

    d[0x00 / 4] = s[0x00 / 4];
    d[0x08 / 4] = s[0x08 / 4];
    d[0x10 / 4] = s[0x10 / 4];
    d[0x18 / 4] = s[0x18 / 4];
    d[0x20 / 4] = s[0x20 / 4];
    d[0x28 / 4] = s[0x28 / 4];
    d[0x2c / 4] = s[0x2c / 4];

    sp = src;
    dp = dst;
    sp += 0x30;
    dp += 0x30;
    n = 0x11;
    do {
        v = *(uint16_t *)sp;
        sp += 2;
        *(uint16_t *)dp = v;
        dp += 2;
    } while (--n);

    d[0x54 / 4] = s[0x54 / 4];
    d[0x58 / 4] = s[0x58 / 4];
    d[0x5c / 4] = s[0x5c / 4];
}
