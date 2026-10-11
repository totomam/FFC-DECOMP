#include "ffc/types.h"

void func_ov003_02147654(uint32_t *out, const uint32_t *in, ...) {
    uint32_t *ap = (uint32_t *)&in;
    uint32_t x = ap[1];
    uint32_t y = ap[2];
    uint32_t a = in[0];
    uint32_t b = in[1];
    uint32_t c = in[2];
    uint32_t d = in[3];
    out[0] = a + x;
    out[1] = b + y;
    out[2] = c + x;
    out[3] = d + y;
}
