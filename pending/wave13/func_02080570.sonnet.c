/* cflags: -nothumb */
#include "ffc/types.h"

void func_02080570(uint32_t *src, uint32_t *dst)
{
    int i;
    for (i = 0; i < 3; i++) {
        dst[0] = src[0]; dst[1] = src[3]; dst[2] = src[6];
        src++; dst += 3;
    }
    dst[0] = 0; dst[1] = 0; dst[2] = 0;
}
