#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t x);

uint32_t func_0207c92c(uint32_t *s)
{
    int32_t m = (int32_t)s[3];
    if ((int32_t)s[2] >= m) {
        return s[1];
    }
    {
        uint32_t p = s[0];
        return p + func_0209a76c((s[1] - p) * s[2]);
    }
}
