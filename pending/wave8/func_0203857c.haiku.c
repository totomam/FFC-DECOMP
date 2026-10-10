#include "ffc/types.h"

void func_0203857c(uint8_t *base, uint32_t val, uint32_t idx)
{
    uint32_t off = 0x334;
    *(uint32_t *)(base + (idx << 2) + off) = val;
}
