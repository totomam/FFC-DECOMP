#include "ffc/types.h"

extern uint32_t func_0206c090(uint32_t x);

void func_0206c1a0(uint32_t *p, uint32_t x)
{
    *p = func_0206c090(x) & 0xfff;
}
