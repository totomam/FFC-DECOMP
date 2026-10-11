#include "ffc/types.h"

extern void func_0202afc0(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_0202bde4(uint32_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint8_t a4)
{
    p[6] = 0;
    p[7] = 0x40000000;
    func_0202afc0(p, a1, a2, 0, 0);
    p[3] &= ~0xffu;
    p[8] = a3;
    *(uint8_t *)((uint8_t *)p + 0x41) = a4;
}
