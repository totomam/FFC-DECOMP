#include "ffc/types.h"

extern uint32_t func_ov000_02152ae4(uint32_t x);
extern void func_020849f4(void *dst, uint32_t val, uint32_t n);

void func_ov000_02152990(uint32_t a, void *b)
{
    uint32_t t = func_ov000_02152ae4(0x10);
    func_020849f4(b, t + (a << 8), 0xf0);
}
