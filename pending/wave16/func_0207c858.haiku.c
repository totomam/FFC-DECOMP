#include "ffc/types.h"

extern uint32_t func_0207ab40(uint32_t x);
extern void func_02084ca4(uint32_t a, uint8_t *b, uint32_t c);

int func_0207c858(uint8_t *p, uint32_t x)
{
    uint32_t r = func_0207ab40(x);
    *(uint32_t *)(p + 0xac) = r;
    func_02084ca4(r, p + 0xb0, 0x40);
    return 1;
}
