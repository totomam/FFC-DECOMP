#include "ffc/types.h"

void func_ov002_021aa278(uint32_t *p, uint32_t bit, uint8_t v, uint32_t w, uint8_t flag)
{
    p[1] |= 1u << bit;
    if (!flag) {
        uint8_t *b = (uint8_t *)p + bit;
        b[8] = v;
    }
    {
        uint32_t *q = (uint32_t *)((uint8_t *)p + (bit << 2));
        q[6] = w;
    }
}
