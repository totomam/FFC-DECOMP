#include "ffc/types.h"

void func_ov000_02169518(uint8_t *dst, uint32_t *src, uint32_t n) {
    uint32_t i = 0;
    uint32_t off = 0;
    while (off < n) {
        dst[off] = (uint8_t)src[i];
        dst[off + 1] = (uint8_t)(src[i] >> 8);
        dst[off + 2] = (uint8_t)(src[i] >> 16);
        dst[off + 3] = (uint8_t)(src[i] >> 24);
        off += 4;
        i++;
    }
}
