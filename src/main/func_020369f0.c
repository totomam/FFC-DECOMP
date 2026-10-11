#include "ffc/types.h"

extern uint32_t func_020368ac(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02036a10(uint32_t a, uint32_t r, uint32_t b, uint32_t c, uint32_t d);

void func_020369f0(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t r = func_020368ac(a, b, c, d);
    func_02036a10(a, r, b, c, d);
}
