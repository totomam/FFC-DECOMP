#include "ffc/types.h"
void func_ov002_021c9044(uint8_t *base, uint32_t idx, uint32_t *src)
{
    uint32_t a = src[0];
    uint32_t b = src[1];
    uint32_t *p = (uint32_t *)(base + (idx << 3));
    p[5] = b;
    p[4] = a;
}
