/* cflags: -nothumb */
#include "ffc/types.h"

void func_02080570(uint32_t *src, uint32_t *dst)
{
    uint32_t i = src[8];
    uint32_t h = src[7];
    uint32_t g = src[6];
    uint32_t f = src[5];
    uint32_t e = src[4];
    uint32_t d = src[3];
    uint32_t c = src[2];
    uint32_t b = src[1];
    uint32_t a = src[0];
    dst[0] = a;
    dst[1] = d;
    dst[2] = g;
    dst[3] = b;
    dst[4] = e;
    dst[5] = h;
    dst[6] = c;
    dst[7] = f;
    dst[8] = i;
    dst[9] = 0;
    dst[10] = 0;
    dst[11] = 0;
}
