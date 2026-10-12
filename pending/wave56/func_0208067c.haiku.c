/* cflags: -nothumb */
#include "ffc/types.h"

void func_0208067c(int32_t *a, int32_t *b, int32_t *dst)
{
    int32_t tmp[12];
    int32_t *d = dst;
    int64_t t;
    int32_t x, y, z;

    if (dst == b) {
        d = tmp;
    }

    x = a[0];
    y = a[1];
    z = a[2];
    t = (int64_t)y * b[3] + (int64_t)x * b[0] + (int64_t)z * b[6];
    d[0] = (int32_t)(t >> 12);
    t = (int64_t)y * b[4] + (int64_t)x * b[1] + (int64_t)z * b[7];
    d[1] = (int32_t)(t >> 12);
    t = (int64_t)y * b[5] + (int64_t)x * b[2] + (int64_t)z * b[8];
    d[2] = (int32_t)(t >> 12);

    x = a[3];
    y = a[4];
    z = a[5];
    t = (int64_t)y * b[3] + (int64_t)x * b[0] + (int64_t)z * b[6];
    d[3] = (int32_t)(t >> 12);
    t = (int64_t)y * b[4] + (int64_t)x * b[1] + (int64_t)z * b[7];
    d[4] = (int32_t)(t >> 12);
    t = (int64_t)y * b[5] + (int64_t)x * b[2] + (int64_t)z * b[8];
    d[5] = (int32_t)(t >> 12);

    x = a[6];
    y = a[7];
    z = a[8];
    t = (int64_t)y * b[3] + (int64_t)x * b[0] + (int64_t)z * b[6];
    d[6] = (int32_t)(t >> 12);
    t = (int64_t)y * b[4] + (int64_t)x * b[1] + (int64_t)z * b[7];
    d[7] = (int32_t)(t >> 12);
    t = (int64_t)y * b[5] + (int64_t)x * b[2] + (int64_t)z * b[8];
    d[8] = (int32_t)(t >> 12);

    x = a[9];
    y = a[10];
    z = a[11];
    t = (int64_t)y * b[3] + (int64_t)x * b[0] + (int64_t)z * b[6];
    d[9] = b[9] + (int32_t)(t >> 12);
    t = (int64_t)y * b[4] + (int64_t)x * b[1] + (int64_t)z * b[7];
    d[10] = b[10] + (int32_t)(t >> 12);
    t = (int64_t)y * b[5] + (int64_t)x * b[2] + (int64_t)z * b[8];
    d[11] = b[11] + (int32_t)(t >> 12);

    if (d != tmp) {
        return;
    }
    *(int32_t (*)[12])dst = *(int32_t (*)[12])tmp;
}
