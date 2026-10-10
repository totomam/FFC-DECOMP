#include "ffc/types.h"

extern uint32_t data_020ad8ac[];
extern void func_02028ae8(uint32_t a, uint32_t b);

void *func_02028dd4(void *p, uint32_t a, uint32_t b)
{
    uint32_t *s = (uint32_t *)p;
    uint32_t v = s[3];
    v &= ~0xffu;
    s[3] = v;
    s[0] = (uint32_t)data_020ad8ac;
    s[5] = 0;
    func_02028ae8(a, b);
    return p;
}
