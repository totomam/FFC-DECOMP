#include "ffc/types.h"

void func_ov000_02169548(uint32_t *out, uint8_t *in, uint32_t n) {
    uint32_t i = 0;
    uint32_t off = 0;
    uint32_t *dst = out;
    uint8_t *src = in;
    for (; off < n; off += 4) {
        uint32_t v = (uint32_t)src[off + 3] << 24;
        v |= (uint32_t)src[off] | ((uint32_t)src[off + 1] << 8) | ((uint32_t)src[off + 2] << 16);
        dst[i] = v;
        i++;
    }
}
