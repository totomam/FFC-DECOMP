/* cflags: -nothumb */
#include "ffc/types.h"

void func_020800cc(int32_t *in, int32_t *out, int32_t a, int32_t b, int32_t c) {
    int32_t i0 = in[0];
    int32_t i1 = in[1];
    int32_t i2 = in[2];
    int32_t i3 = in[3];
    int32_t i4 = in[4];
    int32_t i5 = in[5];
    int64_t p0 = (int64_t)a * i0;
    int64_t p1 = (int64_t)a * i1;
    int64_t p2 = (int64_t)a * i2;
    int64_t p3 = (int64_t)b * i3;
    int64_t p4 = (int64_t)b * i4;
    int64_t p5 = (int64_t)b * i5;
    out[0] = (int32_t)(p0 >> 12);
    out[1] = (int32_t)(p1 >> 12);
    out[2] = (int32_t)(p2 >> 12);
    out[3] = (int32_t)(p3 >> 12);
    out[4] = (int32_t)(p4 >> 12);
    out[5] = (int32_t)(p5 >> 12);
    {
        int32_t i6 = in[6];
        int32_t i7 = in[7];
        int32_t i8 = in[8];
        int64_t p6 = (int64_t)c * i6;
        int64_t p7 = (int64_t)c * i7;
        int64_t p8 = (int64_t)c * i8;
        out[6] = (int32_t)(p6 >> 12);
        out[7] = (int32_t)(p7 >> 12);
        out[8] = (int32_t)(p8 >> 12);
    }
}
