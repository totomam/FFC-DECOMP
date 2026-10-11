#include "ffc/types.h"

extern uint8_t data_020ad8ac[];
extern uint32_t func_02056830(uint32_t x);
extern void func_02028ae8(uint32_t a, uint32_t b);

uint32_t *func_02028df8(uint32_t *p)
{
    uint32_t *r4 = p;
    r4[3] &= ~0xffu;
    r4[0] = (uint32_t)data_020ad8ac;
    r4[5] = func_02056830(0);
    func_02028ae8(r4[5], 0);
    return r4;
}
