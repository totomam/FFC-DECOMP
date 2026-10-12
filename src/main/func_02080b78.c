/* cflags: -nothumb */
#include "ffc/types.h"

#define SCALE(x, k) ((int32_t)(((int64_t)(k) * (int64_t)(x)) >> 12))

void func_02080b78(int32_t *src, int32_t *dst, int32_t a, int32_t b, int32_t c) {
    dst[0] = SCALE(src[0], a);
    dst[1] = SCALE(src[1], a);
    dst[2] = SCALE(src[2], a);
    dst[3] = SCALE(src[3], a);
    dst[4] = SCALE(src[4], b);
    dst[5] = SCALE(src[5], b);
    dst[6] = SCALE(src[6], b);
    dst[7] = SCALE(src[7], b);
    dst[8] = SCALE(src[8], c);
    dst[9] = SCALE(src[9], c);
    dst[10] = SCALE(src[10], c);
    dst[11] = SCALE(src[11], c);
    if (src == dst) {
        return;
    }
    int32_t t13 = src[13];
    int32_t t12 = src[12];
    dst[12] = t12;
    dst[13] = t13;
    int32_t t15 = src[15];
    int32_t t14 = src[14];
    dst[14] = t14;
    dst[15] = t15;
}
