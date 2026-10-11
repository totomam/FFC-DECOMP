#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t);
extern uint32_t func_ov003_0214dd5c(uint32_t, uint32_t);

void func_ov003_02165008(uint32_t *p)
{
    uint32_t r;
    r = func_020424e0(p[0x20]);
    if (func_ov003_0214dd5c(r, p[0x21])) {
        p[3] = (p[3] & ~0xffu) | 2u;
    }
}
