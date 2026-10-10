#include "ffc/types.h"

extern uint32_t func_ov002_021a1acc(uint32_t x);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);

void func_ov002_021a13ec(uint32_t *out, uint32_t x)
{
    *out = func_0206c184(func_ov002_021a1acc(x), 0x1001);
}
