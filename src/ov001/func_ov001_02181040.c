#include "ffc/types.h"

extern uint32_t func_ov001_021808cc(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov001_02180844(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov001_021808f4(uint32_t a, uint32_t b);

uint32_t func_ov001_02181040(uint32_t p, uint32_t x, uint32_t mode)
{
    if (mode != 2) {
        if (func_ov001_021808cc(p, x, mode) != 0) {
            return 1;
        }
        return 0;
    }
    {
        uint32_t r = 0;
        uint32_t t = func_ov001_02180844(x, r, mode);
        if (func_ov001_021808f4(p, t) != 0) {
            r = 1;
        }
        return r;
    }
}
