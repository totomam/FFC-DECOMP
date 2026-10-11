#include "ffc/types.h"

extern uint32_t func_02056830(uint32_t arg);
extern void func_ov014_02147e20(void *self);

void func_ov014_02147e08(void *p)
{
    uint32_t *s = (uint32_t *)p;
    s[8] = 0x6000;
    s[5] = func_02056830(0x6000);
    func_ov014_02147e20(p);
}
