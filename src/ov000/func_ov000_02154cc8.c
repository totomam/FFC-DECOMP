#include "ffc/types.h"

uint32_t func_ov000_02154cc8(uint8_t *p) {
    uint32_t m = 0xFF000000;
    uint32_t x = 0;
    x |= (uint32_t)p[0] << 24;
    x |= (uint32_t)p[1] << 16;
    x |= (uint32_t)p[2] << 8;
    x |= p[3];
    return ((x << 24) & m) | (((x << 8) & (m >> 8)) | (((x >> 8) & (m >> 16)) | (uint8_t)(x >> 24)));
}
