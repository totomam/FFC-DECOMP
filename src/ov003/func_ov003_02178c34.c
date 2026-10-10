#include "ffc/types.h"

void func_ov003_02178c34(uint32_t *dst, uint8_t *src, uint32_t idx)
{
    uint8_t *base = src + 0x9c;
    uint32_t off = idx * 8;
    dst[0] = *(uint32_t *)(base + off);
    dst[1] = *(uint32_t *)(base + off + 4);
}
