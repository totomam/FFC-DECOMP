#include "ffc/types.h"

void func_ov004_0214f734(uint8_t *base, uint32_t idx, uint32_t val)
{
    uint32_t off = 0x178;
    *(uint32_t *)(base + (idx << 2) + off) = val;
}
