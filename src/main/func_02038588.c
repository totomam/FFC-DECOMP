#include "ffc/types.h"

void func_02038588(uint8_t *base, uint32_t val, uint32_t idx)
{
    uint32_t off = 0x33c;
    *(uint32_t *)(base + (idx << 2) + off) = val;
}
