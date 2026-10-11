#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
} S;

void func_ov004_02150640(S *out, int32_t x, int32_t y, ...)
{
    int32_t t = x + y + 1;
    uint32_t s = (uint32_t)t >> 31;
    uint32_t w = ((uint32_t)t << 31) - s;
    w = (w << 1) | (w >> 31);
    uint32_t r4 = s + w;
    out->a = (x - 1) / 2;
    out->b = y - (int32_t)r4;
    out->c = (int32_t)r4;
}
