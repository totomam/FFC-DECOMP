#include "ffc/types.h"

extern uint32_t func_0208a338(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02089e14(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

uint32_t func_02089c9c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t r = func_0208a338(a, d, e);
    return func_02089e14(0x12, a, b, c, r);
}
