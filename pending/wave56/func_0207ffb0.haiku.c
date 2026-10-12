#include "ffc/types.h"

extern int64_t func_0209a71c(int64_t first, int64_t second);

void func_0207ffb0(int32_t *a, int32_t *b, int32_t *out)
{
    int32_t tmp[4];
    int32_t *d = (out == b) ? tmp : out;
    int32_t a0 = a[0];
    int32_t a1 = a[1];

    d[0] = (int32_t)((func_0209a71c((int64_t)a0, (int64_t)b[0]) + func_0209a71c((int64_t)a1, (int64_t)b[2])) >> 12);
    d[1] = (int32_t)((func_0209a71c((int64_t)a0, (int64_t)b[1]) + func_0209a71c((int64_t)a1, (int64_t)b[3])) >> 12);
    d[2] = (int32_t)((func_0209a71c((int64_t)a[2], (int64_t)b[0]) + func_0209a71c((int64_t)a[3], (int64_t)b[2])) >> 12);
    d[3] = (int32_t)((func_0209a71c((int64_t)a[2], (int64_t)b[1]) + func_0209a71c((int64_t)a[3], (int64_t)b[3])) >> 12);
    if (d != out) {
        out[0] = d[0];
        out[1] = d[1];
        out[2] = d[2];
        out[3] = d[3];
    }
}
