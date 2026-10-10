#include "ffc/types.h"

extern void func_0207bcf0(uint32_t x);

void func_0207b89c(volatile uint32_t *p)
{
    if (p[0] != 0) {
        func_0207bcf0(p[0]);
    }
}
