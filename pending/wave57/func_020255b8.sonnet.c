#include "ffc/types.h"

extern void func_02081c68(uint32_t);

#define H(o) ((uint32_t)(uint16_t)(int16_t)*(int32_t *)(a + (o)))
#define PK(lo, hi) ((H(hi) << 16) | H(lo))

void func_020255b8(uint8_t *a)
{
    volatile uint32_t *p;
    uint32_t r4 = *(uint32_t *)(a + 0x18) & 0x3f;
    if (*(uint32_t *)(a + 0x1c) == 0) {
        return;
    }
    *(volatile uint32_t *)0x04000440 = 2;
    *(volatile uint32_t *)0x04000444 = 0;
    if (*(uint32_t *)(a + 0xd0) != 0) {
        func_02081c68(*(uint32_t *)(a + 0xd0));
    }
    p = (volatile uint32_t *)0x04000470;
    uint32_t v2 = *(uint32_t *)(a + 0x2ec);
    uint32_t v1 = *(uint32_t *)(a + 0x2e8);
    uint32_t v0 = *(uint32_t *)(a + 0x2e4);
    p[0] = v0;
    p[0] = v1;
    p[0] = v2;
    p[0x34 / 4] = 0x30C0 | (r4 << 24) | (*(uint32_t *)(a + 0x1c) << 16);
    p[0x38 / 4] = 0x1600;
    p[0x10 / 4] = *(uint16_t *)(a + 0x188);
    p[0x90 / 4] = 2;
    {
        int16_t s, hi, lo;
        s = *(int32_t *)(a + 0x2f8);
        hi = *(int32_t *)(a + 0x2f4);
        lo = *(int32_t *)(a + 0x2f0);
        p[0x1c / 4] = ((uint32_t)(uint16_t)hi << 16) | (uint16_t)lo;
        p[0x1c / 4] = (uint16_t)s;
        s = *(int32_t *)(a + 0x304);
        hi = *(int32_t *)(a + 0x300);
        lo = *(int32_t *)(a + 0x2fc);
        p[0x1c / 4] = ((uint32_t)(uint16_t)hi << 16) | (uint16_t)lo;
        p[0x1c / 4] = (uint16_t)s;
        s = *(int32_t *)(a + 0x310);
        hi = *(int32_t *)(a + 0x30c);
        lo = *(int32_t *)(a + 0x308);
        p[0x1c / 4] = ((uint32_t)(uint16_t)hi << 16) | (uint16_t)lo;
        p[0x1c / 4] = (uint16_t)s;
        s = *(int32_t *)(a + 0x31c);
        hi = *(int32_t *)(a + 0x318);
        lo = *(int32_t *)(a + 0x314);
        p[0x1c / 4] = ((uint32_t)(uint16_t)hi << 16) | (uint16_t)lo;
        p[0x1c / 4] = (uint16_t)s;
    }
    p[0x94 / 4] = 0;
    *(volatile uint32_t *)0x04000448 = 1;
}
