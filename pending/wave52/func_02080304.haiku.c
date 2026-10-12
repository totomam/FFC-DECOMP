/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    int32_t m[9];
} Mat3;

void func_02080304(int32_t *a, int32_t *b, int32_t *out)
{
    Mat3 tmp;
    int32_t *orig = out;

    if (out == b) {
        out = tmp.m;
    }

    {
        int32_t a1 = a[1], a0 = a[0], a2 = a[2];
        out[0] = (int32_t)(((int64_t)a1 * b[3] + (int64_t)a0 * b[0] + (int64_t)a2 * b[6]) >> 12);
        out[1] = (int32_t)(((int64_t)a1 * b[4] + (int64_t)a0 * b[1] + (int64_t)a2 * b[7]) >> 12);
        out[2] = (int32_t)(((int64_t)a1 * b[5] + (int64_t)a0 * b[2] + (int64_t)a2 * b[8]) >> 12);
    }
    {
        int32_t a4 = a[4], a3 = a[3], a5 = a[5];
        out[5] = (int32_t)(((int64_t)a4 * b[5] + (int64_t)a3 * b[2] + (int64_t)a5 * b[8]) >> 12);
        out[4] = (int32_t)(((int64_t)a4 * b[4] + (int64_t)a3 * b[1] + (int64_t)a5 * b[7]) >> 12);
        out[3] = (int32_t)(((int64_t)a4 * b[3] + (int64_t)a3 * b[0] + (int64_t)a5 * b[6]) >> 12);
    }
    {
        int32_t a7 = a[7], a6 = a[6], a8 = a[8];
        out[6] = (int32_t)(((int64_t)a7 * b[3] + (int64_t)a6 * b[0] + (int64_t)a8 * b[6]) >> 12);
        out[7] = (int32_t)(((int64_t)a7 * b[4] + (int64_t)a6 * b[1] + (int64_t)a8 * b[7]) >> 12);
        out[8] = (int32_t)(((int64_t)a7 * b[5] + (int64_t)a6 * b[2] + (int64_t)a8 * b[8]) >> 12);
    }

    if (out == tmp.m) {
        *(Mat3 *)orig = tmp;
    }
}
