#include "ffc/types.h"
extern uint32_t func_020817c8(int32_t first, int32_t second);
void func_ov003_02147594(uint32_t *out, uint32_t a, uint32_t b, uint32_t c) {
    uint32_t *q = &a;
    uint32_t x = q[0];
    uint32_t y = q[1];
    *out = func_020817c8(x, y);
}
