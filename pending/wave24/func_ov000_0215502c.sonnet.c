#include "ffc/types.h"

extern uint32_t func_ov000_02155000(uint32_t a, uint32_t b, uint32_t c, int32_t i);

uint32_t func_ov000_0215502c(uint32_t a, uint32_t b, uint32_t c)
{
    int32_t i;
    for (i = 0; i < 2; i++) {
        if (func_ov000_02155000(a, b, c, i) != 0) {
            uint32_t m = 0;
            m = m - 1;
            return a & m;
        }
    }
    return 0;
}
