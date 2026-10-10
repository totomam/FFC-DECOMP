/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } T3;

void func_02080a6c(T3 *src, T3 *dst)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}
