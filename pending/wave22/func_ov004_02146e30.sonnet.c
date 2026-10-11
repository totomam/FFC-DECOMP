#include "ffc/types.h"
void func_ov004_02146e30(uint8_t *p)
{
    uint32_t s = *(uint32_t *)(p + 0xa4);
    uint32_t v = (s != 1) + 3;
    *(uint32_t *)(*(uint8_t **)(*(uint8_t **)(p + 0x88) + 0xa0) + 0x10) = v;
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2u;
}
