#include "ffc/types.h"

void func_0206501c(uint8_t *p, uint32_t i)
{
    uint32_t off = i * 28;
    *(uint8_t *)(*(uint8_t **)(p + 0x60) + off) = 0;
    uint32_t *t = (uint32_t *)(*(uint8_t **)(p + 0x24));
    uint32_t k = *(uint32_t *)(*(uint8_t **)(p + 0x60) + off + 0xc);
    uint32_t *w = (uint32_t *)((uint8_t *)t + k * 0x28);
    *w = (*w & 0xfffffcff) | 0x200;
}
