#include "ffc/types.h"

void func_ov000_02165c60(int8_t *src, uint8_t *dst, int32_t n)
{
    if (n >= 2) {
        dst[0] = (uint8_t)((src[0] << 2) | (src[1] >> 4));
    }
    if (n >= 3) {
        uint32_t t = ((uint32_t)((int32_t)src[1] << 28)) >> 24;
        dst[1] = (uint8_t)(t | (src[2] >> 2));
    }
    if (n >= 4) {
        uint32_t t = ((uint32_t)((int32_t)src[2] << 30)) >> 24;
        dst[2] = (uint8_t)(t | src[3]);
    }
}
