#include "ffc/types.h"
extern void func_0207bcf0(uint32_t x, uint32_t y);
void func_0207b89c(volatile uint32_t *p, uint32_t y)
{
    if (*p != 0) {
        func_0207bcf0(*p, y);
    }
}
