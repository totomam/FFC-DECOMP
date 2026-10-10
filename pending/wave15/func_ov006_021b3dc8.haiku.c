#include "ffc/types.h"

void func_ov006_021b3dc8(void *p, uint32_t idx, uint32_t *a, uint32_t *b)
{
    uint8_t *base = *(uint8_t **)((uint8_t *)p + 8);
    uint32_t *e = (uint32_t *)(base + (idx << 3));
    *a = (*e & 0x1ff0000) >> 16;
    *b = (uint8_t)*e;
}
