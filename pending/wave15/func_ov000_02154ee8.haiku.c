#include "ffc/types.h"

extern uint32_t func_ov000_02154e3c(uint32_t a);
extern void func_ov000_02154ed8(uint32_t a, uint32_t b);

void func_ov000_02154ee8(uint32_t a, uint32_t b)
{
    uint32_t t = func_ov000_02154e3c(a);
    t &= ~3u;
    t |= b;
    func_ov000_02154ed8(a, t);
}
