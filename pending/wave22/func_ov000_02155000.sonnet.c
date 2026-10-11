#include "ffc/types.h"

extern uint64_t func_ov000_02154f90(int32_t a, uint32_t c, uint32_t d);

int func_ov000_02155000(int32_t a, uint32_t b, uint32_t c, uint32_t d) {
    int r = 0;
    int32_t x = (r - 1) & a;
    if (x <= 0) {
        return r;
    }
    {
        uint64_t v = func_ov000_02154f90(x, c, d);
        if ((((uint32_t)(v >> 32) ^ b) | ((uint32_t)v ^ (uint32_t)a)) == 0) {
            r = 1;
        }
    }
    return r;
}
