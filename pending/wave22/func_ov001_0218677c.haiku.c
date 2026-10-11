#include "ffc/types.h"

extern uint32_t func_ov001_021882d0(uint32_t p, uint32_t q, uint32_t r, uint32_t s);
extern uint32_t func_ov000_02165588(uint32_t x);

uint32_t func_ov001_0218677c(uint32_t a, uint32_t b, int32_t c, uint32_t d)
{
    uint32_t t = func_ov000_02165588(b);
    uint32_t sw = (uint32_t)((uint8_t)(c >> 8)) | (((uint32_t)c << 8) & 0xff00u);
    return func_ov001_021882d0(a + 0x60, t, (uint16_t)sw, d);
}
