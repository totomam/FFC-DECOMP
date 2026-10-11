#include "ffc/types.h"

void func_ov006_021a3258(uint8_t *dst, const uint8_t *src, uint32_t n)
{
    uint32_t i = 0;
    while (n > i) {
        dst[i] = src[i];
        i++;
    }
}
