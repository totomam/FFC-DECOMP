#include "ffc/types.h"

extern int32_t func_0203c22c(uint32_t a, uint32_t b);
extern int32_t func_02061000(int32_t x, uint32_t a, uint32_t b, uint32_t c);

int32_t func_0203c12c(uint32_t a, uint32_t b)
{
    int32_t r = func_0203c22c(a, b);
    return func_02061000(r, a, b, 0);
}
