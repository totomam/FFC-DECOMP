#include "ffc/types.h"

extern void func_ov003_0215c634(uint32_t a, uint32_t b, uint32_t *p, uint32_t *q);
extern uint32_t func_020817c8(int32_t first, int32_t second);

uint32_t func_ov003_0215c66c(uint32_t a, uint32_t b, uint32_t volatile c, uint32_t d, ...)
{
    uint32_t x;
    uint32_t y;
    uint32_t r4;

    func_ov003_0215c634(a, b, &x, &y);
    r4 = func_020817c8(y << 12, (1 << 12) - c);
    return (func_020817c8(x << 12, c) + r4) << 4 >> 16;
}
