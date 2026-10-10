#include "ffc/types.h"

extern uint32_t func_0207fc08(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02084ca4(uint32_t a, uint32_t b, uint32_t c);

int func_0207fa00(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t r = func_0207fc08(a, c, c, d);
    func_02084ca4(r, b, d);
    return 0;
}
