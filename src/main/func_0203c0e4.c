#include "ffc/types.h"

extern int32_t func_0203c21c(uint32_t a, uint32_t b);
extern int32_t func_02060f6c(int32_t x, uint32_t a, uint32_t b, uint32_t c);

int32_t func_0203c0e4(uint32_t a, uint32_t b)
{
    int32_t r = func_0203c21c(a, b);
    return func_02060f6c(r, a, b, 0);
}
