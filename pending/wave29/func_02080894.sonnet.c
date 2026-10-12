/* cflags: -nothumb */
#include "ffc/types.h"
void func_02080894(int32_t *a, int32_t *b, int32_t *out) {
    int64_t t0 = (int64_t)a[2] * b[6] + (int64_t)a[1] * b[3] + (int64_t)a[0] * b[0];
    int64_t t1 = (int64_t)a[2] * b[7] + (int64_t)a[1] * b[4] + (int64_t)a[0] * b[1];
    int64_t t2 = (int64_t)a[2] * b[8] + (int64_t)a[1] * b[5] + (int64_t)a[0] * b[2];
    out[0] = (int32_t)(t0 >> 12) + b[9];
    out[1] = (int32_t)(t1 >> 12) + b[10];
    out[2] = (int32_t)(t2 >> 12) + b[11];
}
