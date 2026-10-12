/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_02084adc(void);

void func_02080aa0(int32_t *src, int32_t *dst, int32_t b, int32_t a, int32_t z)
{
    int64_t t;
    if (src != dst) {
        func_02084adc();
    }
    t = (int64_t)b * src[0];
    t += (int64_t)a * src[4];
    t += (int64_t)z * src[8];
    dst[12] = src[12] + (int32_t)(t >> 12);
    t = (int64_t)b * src[1];
    t += (int64_t)a * src[5];
    t += (int64_t)z * src[9];
    dst[13] = src[13] + (int32_t)(t >> 12);
    t = (int64_t)b * src[2];
    t += (int64_t)a * src[6];
    t += (int64_t)z * src[10];
    dst[14] = src[14] + (int32_t)(t >> 12);
    t = (int64_t)b * src[3];
    t += (int64_t)a * src[7];
    t += (int64_t)z * src[11];
    dst[15] = src[15] + (int32_t)(t >> 12);
}
