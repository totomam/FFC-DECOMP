#include "ffc/types.h"

extern void func_0208402c(uint32_t a, uint8_t *out, uint32_t b, uint32_t c);

uint8_t func_02084100(uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t x = 0;
    func_0208402c(a, &x, b, c);
    return x;
}
