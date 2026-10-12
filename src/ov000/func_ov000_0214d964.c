#include "ffc/types.h"

extern int func_ov000_0214dac8(uint8_t *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern int func_ov000_0214d9b4(uint8_t *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

int func_ov000_0214d964(uint8_t *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    int8_t s = *(int8_t *)(a + 0xaf);
    int r;

    if (s == 4) {
        return func_ov000_0214dac8(a, b, c, d, e, f);
    }
    r = func_ov000_0214d9b4(a, b, c, d, e);
    if (r == -6 && (f & 1)) {
        return func_ov000_0214dac8(a, b, c, d, e, 1);
    }
    return r;
}
