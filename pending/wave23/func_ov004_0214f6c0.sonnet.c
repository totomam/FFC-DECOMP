#include "ffc/types.h"

extern uint32_t func_02081210(int32_t a, int32_t b);
extern uint32_t func_020817c8(int32_t first, int32_t second);

void func_ov004_0214f6c0(uint32_t *out, uint8_t *base, int32_t i, int32_t j)
{
    uint32_t a = *(uint32_t *)(base + i * 4 + 0xac);
    uint32_t b = *(uint32_t *)(base + i * 16 + j * 4 + 0xbc);
    uint32_t r = func_02081210(b << 12, a << 12);
    *out = func_020817c8(r, 0x19 << 14);
}
