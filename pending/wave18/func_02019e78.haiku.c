#include "ffc/types.h"

extern uint32_t func_02019760(uint32_t a);
extern void func_02019e9c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_02019e78(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t r = func_02019760(a);
    func_02019e9c(a, r, b, c, 0);
}
