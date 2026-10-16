/* cflags: -nothumb */
#include "ffc/types.h"
void func_02080498(int32_t *v, int32_t *m, int32_t *o)
{
    int32_t b = v[1], a = v[0], c = v[2];
    int64_t y = (int64_t)b * m[4];
    int64_t x = (int64_t)b * m[3];
    int64_t z = (int64_t)b * m[5];
    y += (int64_t)a * m[1];
    x += (int64_t)a * m[0];
    z += (int64_t)a * m[2];
    y += (int64_t)c * m[7];
    x += (int64_t)c * m[6];
    z += (int64_t)c * m[8];
    o[0] = (int32_t)(x >> 12);
    o[1] = (int32_t)(y >> 12);
    o[2] = (int32_t)(z >> 12);
}
