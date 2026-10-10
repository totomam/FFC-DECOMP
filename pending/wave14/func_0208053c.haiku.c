/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { uint32_t x, y, z; } V3;
typedef struct { V3 v; uint32_t w; } V4;

void func_0208053c(V3 *src, V4 *dst) {
    dst[0].v = src[0]; dst[0].w = 0;
    dst[1].v = src[1]; dst[1].w = 0;
    dst[2].v = src[2]; dst[2].w = 0;
    dst[3].v = src[3]; dst[3].w = 0x1000;
}
