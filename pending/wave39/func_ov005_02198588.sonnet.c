#include "ffc/types.h"

extern void func_02069694(void *self, uint32_t a, uint32_t b);
extern void func_02069670(void *self, uint32_t a, uint32_t b, uint32_t c);

void func_ov005_02198588(uint8_t *p)
{
    uint32_t b = p[0x149];
    uint32_t hi = b >> 31;
    uint32_t s = 30;
    uint32_t x = (b << s) - hi;
    uint32_t y = (x >> s) | (x << (32 - s));
    uint8_t v = (uint8_t)(hi + y);
    uint32_t *t;

    func_02069694(p, *(uint32_t *)(p + 0x12c), 4);
    func_02069694(p, *(uint32_t *)(p + 0x12c), 2);
    t = *(uint32_t **)(p + s + 0xf6);
    func_02069670(p, *(uint32_t *)(p + 0x12c), t[(uint8_t)(v + 4)], 4);
    t = *(uint32_t **)(p + s + 0xf6);
    func_02069670(p, *(uint32_t *)(p + 0x12c), t[v], 2);
}
