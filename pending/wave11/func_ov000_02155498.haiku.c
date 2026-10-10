#include "ffc/types.h"

extern uint32_t func_ov000_0215509c(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_ov000_02155498(uint32_t *p, uint32_t a, uint32_t c)
{
    return func_ov000_0215509c(a, p[9], c);
}
