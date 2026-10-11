#include "ffc/types.h"

extern uint32_t func_ov006_0219ecbc(uint32_t a);

void func_ov006_0219ec90(uint32_t a, uint8_t *dst, const uint8_t *src, uint32_t n)
{
    uint32_t i;
    for (i = 0; i < n; i++) {
        uint8_t k = (uint8_t)func_ov006_0219ecbc(a);
        dst[i] = src[i] ^ k;
    }
}
