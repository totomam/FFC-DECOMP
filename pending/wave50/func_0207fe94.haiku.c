#include "ffc/types.h"

extern uint64_t func_0209a71c(uint64_t first, uint64_t second);

void func_0207fe94(int32_t *p, uint32_t *out, int32_t a, int32_t b)
{
    uint64_t r;
    int32_t v;

    r = func_0209a71c((uint64_t)(int64_t)a, (uint64_t)(int64_t)p[0]);
    v = p[1];
    out[0] = (uint32_t)(r >> 12);
    r = func_0209a71c((uint64_t)(int64_t)a, (uint64_t)(int64_t)v);
    v = p[2];
    out[1] = (uint32_t)(r >> 12);
    r = func_0209a71c((uint64_t)(int64_t)b, (uint64_t)(int64_t)v);
    v = p[3];
    out[2] = (uint32_t)(r >> 12);
    r = func_0209a71c((uint64_t)(int64_t)b, (uint64_t)(int64_t)v);
    out[3] = (uint32_t)(r >> 12);
}
