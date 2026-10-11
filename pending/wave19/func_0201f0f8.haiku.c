#include "ffc/types.h"

void func_0201f0f8(uint8_t *p, int idx, uint32_t *out)
{
    uint8_t *base = *(uint8_t **)(p + 0x8c);
    uint32_t *src = (uint32_t *)(base + idx * 0x18);
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
    out[3] = src[3];
    out[4] = src[4];
    out[5] = src[5];
}
