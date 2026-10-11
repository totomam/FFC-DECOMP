#include "ffc/types.h"

extern uint32_t func_020816d4(uint32_t a, uint32_t b);
extern void func_ov003_02158264(uint8_t *p, int32_t v, uint32_t c, uint32_t d);

void func_ov003_0215abac(uint8_t *p, uint16_t v)
{
    uint32_t a;
    uint32_t b;
    uint32_t c;

    if (*(uint16_t *)(p + 0x314) == 0) {
        *(uint16_t *)(p + 0xbc) = v;
        b = 1 << 12;
        a = func_020816d4(b, 0xfff9c000);
        c = func_020816d4(0xfffff000, 0);
        func_ov003_02158264(p, ((int32_t)((b << 2) - a) * 0x168) >> 4, c, 1);
    }
}
