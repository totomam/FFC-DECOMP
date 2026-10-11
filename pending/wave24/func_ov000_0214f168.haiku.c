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
        m = 0xff000000u;
        *out = ((v << 24) & m)
             | ((v << 8) & (m >> 8))
             | ((v >> 8) & (m >> 16))
             | ((v >> 24) & 0xffu);
    }
    return 1;
}
