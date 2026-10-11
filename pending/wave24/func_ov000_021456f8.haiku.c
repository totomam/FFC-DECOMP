#include "ffc/types.h"

extern uint32_t func_ov000_02145614(uint32_t a, uint32_t b, uint32_t c);

int func_ov000_021456f8(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t r = func_ov000_02145614(a, b, d);
    r = func_ov000_02145614(c + 12, 8, r);
    r += b;
    if (r & 0x10000) {
        r = (uint16_t)(r + 1);
    }
    if (r != 0xffff) {
        return 1;
    }
    return 0;
}
