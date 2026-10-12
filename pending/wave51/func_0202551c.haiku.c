#include "ffc/types.h"

void func_0202551c(int32_t *out, int32_t *a, int32_t *b, int32_t *c, int32_t *d)
{
    uint32_t k = 0xb9;
    int32_t a0, a1, a2;
    a0 = a[0];
    a1 = a[1];
    a2 = a[2];
    out[k] = a0;
    out[k + 1] = a1;
    out[k + 2] = a2;
    out[k + 3] = 0;
    out[k + 4] = 0;
    out[k + 5] = 0;
    out[k + 6] = b[0] - a0;
    out[k + 7] = b[1] - a1;
    out[k + 8] = b[2] - a2;
    out[k + 9] = c[0] - a0;
    out[k + 10] = c[1] - a1;
    out[k + 11] = c[2] - a2;
    out[k + 12] = d[0] - a0;
    out[k + 13] = d[1] - a1;
    out[k + 14] = d[2] - a2;
}
