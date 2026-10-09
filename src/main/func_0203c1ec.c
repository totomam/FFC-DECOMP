#include "ffc/types.h"

extern int32_t func_0203c250(uint32_t a, uint32_t b);
extern int32_t func_02061128(int32_t x, uint32_t a, uint32_t b, uint32_t c);

int32_t func_0203c1ec(uint32_t a, uint32_t b)
{
    int32_t r = func_0203c250(a, b);
    return func_02061128(r, a, b, 0);
}
