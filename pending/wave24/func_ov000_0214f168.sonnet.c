#include "ffc/types.h"

extern uint32_t func_ov000_0214e90c(uint32_t a);

int func_ov000_0214f168(uint32_t a, uint32_t *out)
{
    uint32_t v = func_ov000_0214e90c(a);
    uint32_t m;
    if (v == 0) {
        return 0;
    }
    if (out != 0) {
        uint32_t t0, t1, t2, t3;
        m = 0xff000000u;
        t3 = (v << 24) & m;
        t2 = (v << 8) & (m >> 8);
        t1 = (v >> 24) & 0xffu;
        t0 = (v >> 8) & (m >> 16);
        *out = t0 | t1 | t2 | t3;
    }
    return 1;
}
