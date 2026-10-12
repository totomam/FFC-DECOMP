/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_02084adc(void);

void func_02080aa0(int32_t *src, int32_t *dst, int32_t b, int32_t a, int32_t z)
{
    int64_t t0, t1, t2, t3;
    if (src != dst) {
        func_02084adc();
    }
    t0 = (int64_t)b * src[0] + (int64_t)a * src[4] + (int64_t)z * src[8];
    dst[12] = src[12] + (int32_t)(t0 >> 12);
    t1 = (int64_t)b * src[1] + (int64_t)a * src[5] + (int64_t)z * src[9];
    dst[13] = src[13] + (int32_t)(t1 >> 12);
    t2 = (int64_t)b * src[2] + (int64_t)a * src[6] + (int64_t)z * src[10];
    dst[14] = src[14] + (int32_t)(t2 >> 12);
    t3 = (int64_t)b * src[3] + (int64_t)a * src[7] + (int64_t)z * src[11];
    dst[15] = src[15] + (int32_t)(t3 >> 12);
}
