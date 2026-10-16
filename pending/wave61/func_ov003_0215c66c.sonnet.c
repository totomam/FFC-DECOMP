#include "ffc/types.h"
extern void func_ov003_0215c634(int32_t a, int32_t b, int32_t *x, int32_t *y);
extern uint32_t func_020817c8(int32_t first, int32_t second);
uint32_t func_ov003_0215c66c(int32_t a, int32_t b, int32_t c, ...)
{
    struct { int32_t pad[14]; int32_t x, y; } l;
    uint32_t r, s;
    int32_t k;
    func_ov003_0215c634(a, b, &l.y, &l.x);
    k = 0x1000 - *(volatile int32_t*)&c;
    r = func_020817c8(l.x << 12, k);
    s = func_020817c8(l.y << 12, *(volatile int32_t*)&c);
    return ((s + r) << 4) >> 16;
}
