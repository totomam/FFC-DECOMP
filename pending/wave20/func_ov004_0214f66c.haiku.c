#include "ffc/types.h"

extern void *func_02081210(int32_t first, int32_t second);
extern uint32_t func_020817c8(int32_t first, int32_t second);

void func_ov004_0214f66c(uint32_t *out, uint32_t *base, uint32_t idx)
{
    uint32_t *p = base + idx;
    uint32_t a = p[0x2b] << 12;
    uint32_t b = p[0x2d] << 12;
    *out = func_020817c8((int32_t)func_02081210((int32_t)b, (int32_t)a), 0x64000);
}
