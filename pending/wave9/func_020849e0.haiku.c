/* cflags: -nothumb */
#include "ffc/types.h"

void func_020849e0(uint32_t v, uint32_t *p, int32_t n)
{
    int32_t end = (int32_t)p + n;
    do {
        if ((int32_t)p < end) {
            *p++ = v;
        }
    } while ((int32_t)p < end);
}
