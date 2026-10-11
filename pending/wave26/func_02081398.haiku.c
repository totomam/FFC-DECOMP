/* cflags: -nothumb */
#include "ffc/types.h"

void func_02081398(int32_t *a, int32_t *b, int32_t *out) {
    int64_t v0 = (int64_t)a[1] * b[2] - (int64_t)a[2] * b[1];
    int64_t v1 = (int64_t)a[2] * b[0] - (int64_t)a[0] * b[2];
    int64_t v2 = (int64_t)a[0] * b[1] - (int64_t)a[1] * b[0];
    out[0] = (int32_t)((v0 + 0x800) >> 12);
    out[1] = (int32_t)((v1 + 0x800) >> 12);
    out[2] = (int32_t)((v2 + 0x800) >> 12);
}
