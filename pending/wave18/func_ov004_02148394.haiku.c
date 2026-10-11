#include "ffc/types.h"

extern void func_ov004_0214821c(uint32_t arg);

void func_ov004_02148394(uint32_t *p)
{
    int32_t n = (int32_t)p[6] - 1;
    p[6] = (uint32_t)n;
    if (n <= 0) {
        func_ov004_0214821c(p[5]);
        p[3] = (p[3] & ~0xffu) | 2u;
    }
}
