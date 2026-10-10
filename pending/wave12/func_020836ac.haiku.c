/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t x, y, z;
} V;

void func_020836ac(V *src, V *dst)
{
    *dst = *src++;
    *dst = *src++;
    *dst = *src++;
    *dst = *src++;
}
