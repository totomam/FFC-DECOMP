#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov003_0217a8b4[];

void *func_ov003_02164e9c(void *p, uint32_t v)
{
    uint32_t *w = (uint32_t *)p;
    func_02056c9c(p, 0);
    *(uint32_t **)p = data_ov003_0217a8b4;
    w[0x80 / 4] = 0;
    w[0x84 / 4] = v;
    w[0x88 / 4] = 0;
    return p;
}
