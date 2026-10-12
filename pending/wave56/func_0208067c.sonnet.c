/* cflags: -nothumb */
#include "ffc/types.h"

void func_0208067c(int32_t *a, int32_t *b, int32_t *dst)
{
    int32_t tmp[12];
    int32_t *d = dst;
    int64_t t;
    int32_t x, y, z, u, v, w, p, q, r;

    if (dst == b) d = tmp;

    x = a[0]; y = a[1]; z = a[2];
    t = (int64_t)z * b[6] + ((int64_t)x * b[0] + (int64_t)y * b[3]);
    d[0] = (int32_t)(t >> 12);
    t = (int64_t)z * b[7] + ((int64_t)x * b[1] + (int64_t)y * b[4]);
    d[1] = (int32_t)(t >> 12);
    p = b[2]; q = b[5]; r = b[8];
    u = a[3]; v = a[4]; w = a[5];
    t = (int64_t)z * r + ((int64_t)x * p + (int64_t)y * q);
    d[2] = (int32_t)(t >> 12);
    t = (int64_t)w * r + ((int64_t)u * p + (int64_t)v * q);
    d[5] = (int32_t)(t >> 12);
    t = (int64_t)w * b[7] + ((int64_t)u * b[1] + (int64_t)v * b[4]);
    d[4] = (int32_t)(t >> 12);
    t = (int64_t)w * b[6] + ((int64_t)u * b[0] + (int64_t)v * b[3]);
    d[3] = (int32_t)(t >> 12);

    x = a[6]; y = a[7]; z = a[8];
    t = (int64_t)z * b[6] + ((int64_t)x * b[0] + (int64_t)y * b[3]);
    d[6] = (int32_t)(t >> 12);
    t = (int64_t)z * b[7] + ((int64_t)x * b[1] + (int64_t)y * b[4]);
    d[7] = (int32_t)(t >> 12);
    p = b[2]; q = b[5]; r = b[8];
    u = a[9]; v = a[10]; w = a[11];
    t = (int64_t)z * r + ((int64_t)x * p + (int64_t)y * q);
    d[8] = (int32_t)(t >> 12);
    t = (int64_t)w * r + ((int64_t)u * p + (int64_t)v * q);
    d[11] = b[11] + (int32_t)(t >> 12);
    t = (int64_t)w * b[7] + ((int64_t)u * b[1] + (int64_t)v * b[4]);
    d[10] = b[10] + (int32_t)(t >> 12);
    t = (int64_t)w * b[6] + ((int64_t)u * b[0] + (int64_t)v * b[3]);
    d[9] = b[9] + (int32_t)(t >> 12);

    if (d != tmp) return;
    *(int32_t (*)[12])dst = *(int32_t (*)[12])tmp;
}
