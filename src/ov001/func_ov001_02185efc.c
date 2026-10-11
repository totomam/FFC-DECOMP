#include "ffc/types.h"

extern uint64_t func_ov001_02185e54(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint64_t func_0209351c(uint64_t x);

uint64_t func_ov001_02185efc(uint32_t a, uint32_t b, uint64_t y)
{
    uint64_t r = func_ov001_02185e54(a, b, 0, (uint32_t)(y >> 32));
    if ((uint32_t)r != 0) {
        return func_0209351c(r);
    }
    return y;
}
