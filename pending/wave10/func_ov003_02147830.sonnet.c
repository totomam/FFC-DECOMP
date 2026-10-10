#include "ffc/types.h"

extern uint32_t func_020817c8(int32_t first, int32_t second);

void func_ov003_02147830(uint32_t *out, uint32_t *p, int32_t y, ...) {
    uint32_t t = func_020817c8(p[1], y);
    out[0] = func_020817c8(p[0], y);
    out[1] = t;
}
