/* cflags: -nothumb */
#include "ffc/types.h"
void func_02080894(int32_t *v, int32_t *m, int32_t *o) {
    int64_t x = (int64_t)v[1] * m[3];
    int64_t y = (int64_t)v[1] * m[4];
    int64_t z = (int64_t)v[1] * m[5];
    x += (int64_t)v[0] * m[0];
    y += (int64_t)v[0] * m[1];
    z += (int64_t)v[0] * m[2];
    x += (int64_t)v[2] * m[6];
    y += (int64_t)v[2] * m[7];
    z += (int64_t)v[2] * m[8];
    o[0] = (int32_t)(x >> 12) + m[9];
    o[1] = (int32_t)(y >> 12) + m[10];
    o[2] = (int32_t)(z >> 12) + m[11];
}
