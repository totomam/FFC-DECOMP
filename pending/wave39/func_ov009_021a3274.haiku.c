#include "ffc/types.h"

extern void func_0202dfc0(uint8_t *p, uint32_t v);
extern void func_0202df00(uint8_t *p, uint32_t v, uint32_t n);

void func_ov009_021a3274(uint8_t *p, uint32_t a, uint32_t *q, uint32_t c, uint8_t e, uint32_t f)
{
    uint32_t base = 0x13c;
    p[base] = 1;
    p[base + 1] = e;
    *(uint32_t *)(p + base + 4) = q[0];
    *(uint32_t *)(p + (base + 0) + 8) = q[1];
    *(uint32_t *)(p + (base + 0) + 0xc) = q[2];
    *(uint32_t *)(p + (base + 0) + 0x10) = q[3];
    *(uint32_t *)(p + base + 0x14) = a;
    p[base + 0x18] = 0;
    func_0202dfc0(p + (base + 0x2c), c);
    func_0202df00(p + (base + 0x2c), f, 1);
    *(uint32_t *)(p + base + 0x24) = 0;
    *(uint32_t *)(p + base + 0x28) = 0;
}
