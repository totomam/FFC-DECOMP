#include "ffc/types.h"

extern uint32_t func_0208fbd8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

uint32_t func_020919e0(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t r = func_0208fbd8(b, 1, c, a);
    if (c != r) {
        a = 0;
    }
    return a;
}
