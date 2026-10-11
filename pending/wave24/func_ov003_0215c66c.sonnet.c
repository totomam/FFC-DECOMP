#include "ffc/types.h"

extern void func_ov003_0215c634(uint32_t a, uint32_t b, uint32_t *p, uint32_t *q);
extern uint32_t func_020817c8(int32_t first, int32_t second);

uint32_t func_ov003_0215c66c(uint32_t a, uint32_t b, uint32_t volatile c, ...)
{
    uint32_t buf[16];
    uint32_t r4, r0;

    func_ov003_0215c634(a, b, &buf[15], &buf[14]);
    uint32_t d = (1 << 12) - c;
    r4 = func_020817c8(buf[14] << 12, d);
    r0 = func_020817c8(buf[15] << 12, c);
    return (r0 + r4) << 4 >> 16;
}
