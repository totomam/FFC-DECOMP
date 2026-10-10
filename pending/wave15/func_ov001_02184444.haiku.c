#include "ffc/types.h"

void func_ov001_02184444(uint8_t *dst, uint8_t v, uint8_t *src) {
    dst[0] = v;
    dst[1] = src[0];
    dst[2] = src[1];
    dst[3] = src[2];
    dst[4] = src[3];
    *(uint32_t *)(dst + 0x578) = 5;
}
