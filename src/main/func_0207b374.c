#include "ffc/types.h"

extern uint32_t func_0208a67c(uint32_t a, uint32_t b);
extern void func_0208a65c(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02089da4(uint32_t a, uint32_t b);

uint32_t func_0207b374(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    if (a == func_0208a67c(c, d)) {
        func_0208a65c(c, d, 0);
    }
    return func_02089da4(a, a + b);
}
