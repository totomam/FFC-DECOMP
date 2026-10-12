#include "ffc/types.h"

extern void func_0204acc0(void *p, uint32_t n);

void func_0204ca94(uint8_t *p)
{
    uint32_t *w = (uint32_t *)p;
    uint32_t zero = 0;
    uint32_t neg = (uint32_t)-1;
    uint32_t *base;

    w[0] = neg;
    func_0204acc0(p + 4, 256);
    func_0204acc0(p + 4 + 256, 512);
    w[0x314 / 4] = neg;
    w[0x318 / 4] = neg;
    w[0x324 / 4] = zero;
    w[0x338 / 4] = zero;
    w[0x33c / 4] = zero;
    w[0x334 / 4] = zero;
    w[0x32c / 4] = zero;
    w[0x330 / 4] = zero;
}
