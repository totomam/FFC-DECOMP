#include "ffc/types.h"

extern void func_02056c4c(uint32_t x);

void func_ov002_021bc3b8(uint32_t *base, uint32_t idx)
{
    uint32_t v = *(uint32_t *)((uint8_t *)base + (idx << 2) + 0x80);
    func_02056c4c(*(uint32_t *)((uint8_t *)v + 0x80));
}
