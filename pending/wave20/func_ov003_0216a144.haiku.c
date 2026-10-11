#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern uint8_t *func_ov003_02146494(uint32_t x);

void func_ov003_0216a144(uint8_t *p)
{
    uint32_t r = func_020424e0(*(uint32_t *)(p + 0x80));
    uint8_t *q = func_ov003_02146494(r);
    if (q[0xe4] == 0) {
        uint32_t v = *(uint32_t *)(p + 0xc);
        v &= ~0xffu;
        v |= 2;
        *(uint32_t *)(p + 0xc) = v;
    }
}
