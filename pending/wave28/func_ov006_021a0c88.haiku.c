#include "ffc/types.h"

uint8_t *func_ov006_021a0c88(uint8_t **pp, uint32_t limit, uint32_t *a, uint32_t *b)
{
    uint8_t *ptr = *pp;
    uint16_t h;
    uint32_t v;
    uint32_t x;

    if ((uint32_t)ptr >= limit) {
        return 0;
    }

    h = *(uint16_t *)ptr;
    v = (uint8_t)(h >> 8);
    v = v | ((h << 8) & 0xff00);
    *a = (uint16_t)v;

    h = *(uint16_t *)(ptr + 2);
    ptr += 4;
    v = (uint8_t)(h >> 8);
    v = v | ((h << 8) & 0xff00);
    *b = (uint16_t)v;

    x = ((uint16_t)v + 11) & ~7u;
    *pp = ptr + (x - 4);
    return ptr;
}
