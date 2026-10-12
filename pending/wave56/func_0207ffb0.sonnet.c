#include "ffc/types.h"

extern int64_t func_0209a71c(int64_t first, int64_t second);
typedef struct { int32_t m[4]; } M;

void func_0207ffb0(M *a, M *b, M *out)
{
    M tmp;
    M *d = &tmp;
    int32_t x0, x1, x2, x3;
    if (out != b) d = out;
    x0 = a->m[0]; x1 = a->m[1];
    d->m[0] = (int32_t)((func_0209a71c(x0, b->m[0]) + func_0209a71c(x1, b->m[2])) >> 12);
    d->m[1] = (int32_t)((func_0209a71c(x0, b->m[1]) + func_0209a71c(x1, b->m[3])) >> 12);
    x3 = a->m[3]; x2 = a->m[2];
    d->m[2] = (int32_t)((func_0209a71c(x2, b->m[0]) + func_0209a71c(x3, b->m[2])) >> 12);
    d->m[3] = (int32_t)((func_0209a71c(x2, b->m[1]) + func_0209a71c(x3, b->m[3])) >> 12);
    if (d == &tmp) *out = tmp;
}
