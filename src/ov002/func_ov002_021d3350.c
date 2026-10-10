#include "ffc/types.h"

void func_ov002_021d3350(uint8_t *base, uint16_t *src, uint32_t idx)
{
    uint16_t *dst = (uint16_t *)(base + (idx << 3));
    dst[0xe] = src[0];
    dst[0xf] = src[1];
    dst[0x10] = src[2];
    dst[0x11] = src[3];
}
