#include "ffc/types.h"

extern void func_02069694(void *self, void *obj, int n);
extern void func_02069670(void *self, void *obj, uint32_t val, int n);

void func_ov008_0219b628(uint8_t *p)
{
    uint8_t x = p[0x112];
    uint32_t s = (uint32_t)x >> 31;
    uint32_t t = ((uint32_t)x << 30) - s;
    uint8_t r4 = (uint8_t)(s + ((t >> 30) | (t << 2)));
    uint32_t off;
    uint32_t *cc;

    func_02069694(p, *(void **)(p + 0xc4), 4);
    func_02069694(p, *(void **)(p + 0xc4), 2);
    cc = *(uint32_t **)(p + 0xcc);
    off = (uint8_t)(r4 + 4) * 4;
    func_02069670(p, *(void **)(p + 0xc4), *(uint32_t *)((uint8_t *)cc + off), 4);
    func_02069670(p, *(void **)(p + 0xc4), cc[r4], 2);
}
