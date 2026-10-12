#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov008_021a90e0[];

void *func_ov008_021a5e80(uint8_t *p, uint32_t a, uint8_t b)
{
    uint32_t *q;
    func_020694ac(p, 0, 0);
    *(uint8_t **)p = data_ov008_021a90e0;
    q = (uint32_t *)(p + 0xc4);
    *(uint32_t *)(p + 0xc4) = 0;
    *(uint32_t *)(p + 0xf0) = 0;
    *(uint32_t *)(p + 0xf4) = 0;
    q[1] = 0;
    q[2] = 0;
    q = (uint32_t *)(p + 0xf4);
    q[1] = 0;
    q[2] = 0;
    p[0x101] = 0;
    p[0x102] = 0;
    p[0x103] = b;
    *(uint32_t *)(p + 0x108) = a;
    p[0x10c] = 0;
    *(uint32_t *)(p + 0x110) = 0;
    return p;
}
