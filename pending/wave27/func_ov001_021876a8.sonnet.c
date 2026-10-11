#include "ffc/types.h"

void func_ov001_021876a8(uint8_t *base, uint8_t *src, int32_t len, uint8_t *dst, uint8_t * volatile out) {
    if (len < 5) return;
    uint8_t flag = src[0];
    dst[0] = src[1];
    dst[1] = src[2];
    dst[2] = src[3];
    dst[3] = src[4];
    if (flag & 0x10) {
        if (len - 5 < 2) return;
        uint8_t b0 = src[5];
        uint8_t *o = out;
        o[0] = b0;
        o[1] = src[6];
    } else {
        uint16_t v = *(uint16_t *)(base + 0x6ac);
        *(uint16_t *)out = v;
    }
}
