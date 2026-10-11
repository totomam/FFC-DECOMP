/* cflags: -nothumb */
#include "ffc/types.h"

void func_020849c4(uint8_t *src, uint8_t *dst, int32_t n)
{
    int32_t i = 0;
loop:
    if (i < n) {
        *(uint16_t *)(dst + i) = *(uint16_t *)(src + i);
        i += 2;
        goto loop;
    }
}
