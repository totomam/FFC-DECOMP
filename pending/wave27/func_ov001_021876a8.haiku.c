#include "ffc/types.h"

void func_ov001_021876a8(uint8_t *base, uint8_t *src, int32_t len, uint8_t *dst, uint8_t * volatile out) {
    uint8_t flag;
    uint8_t b;
    if (len < 5) {
        return;
    }
    flag = src[0];
    b = src[1];
    dst[0] = b;
    b = src[2];
    dst[1] = b;
    b = src[3];
    dst[2] = b;
    b = src[4];
    dst[3] = b;
    if (flag & 0x10) {
        if (len - 5 < 2) {
            return;
        }
        b = src[5];
        out[0] = b;
        b = src[6];
        out[1] = b;
    } else {
        *(uint16_t *)out = *(uint16_t *)(base + 0x6ac);
    }
}
