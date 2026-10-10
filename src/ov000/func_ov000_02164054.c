#include "ffc/types.h"

extern void func_020928f0(void *dst, const void *src, uint32_t n);
extern const uint8_t data_ov000_0216b2bc[];

void func_ov000_02164054(uint8_t *p, uint16_t x, uint32_t y)
{
    func_020928f0(p + 6, data_ov000_0216b2bc, 2);
    *(uint16_t *)(p + 4) = x;
    *(uint32_t *)p = y;
}
