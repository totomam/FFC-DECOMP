#include "ffc/types.h"

extern void func_02069694(uint8_t *self, void *a, int n);
extern void func_02069670(uint8_t *self, void *a, int n, uint32_t v);

void func_ov008_02199dd8(uint8_t *p)
{
    uint32_t b = p[0x144];
    uint32_t t = b >> 31;
    uint32_t x = (b << 30) - t;
    uint8_t r4 = (uint8_t)((x >> 30) | (x << 2)) + (uint8_t)t;
    func_02069694(p, *(void **)(p + 0xc4), 4);
    func_02069694(p, *(void **)(p + 0xc4), 2);
    func_02069670(p, *(void **)(p + 0xc4), 4, ((uint32_t *)*(void **)(p + 0xcc))[(uint8_t)(r4 + 4)]);
    func_02069670(p, *(void **)(p + 0xc4), 2, ((uint32_t *)*(void **)(p + 0xcc))[r4]);
}
