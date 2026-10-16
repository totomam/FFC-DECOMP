#include "ffc/types.h"
extern int64_t func_ov000_02154f90(int32_t a, uint32_t b, uint32_t c);
int32_t func_ov000_02155000(int64_t a, uint32_t c, uint32_t d)
{
    uint32_t r = 0;
    if ((int32_t)(a & (uint64_t)(r - 1)) <= 0) return r;
    if (func_ov000_02154f90((int32_t)a, c, d) == a) r = 1;
    return r;
}
