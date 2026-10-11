/* cflags: -nothumb */
#include "ffc/types.h"

void func_020849ac(uint16_t v, uint8_t *p, int32_t n)
{
    int32_t i = 0;
    do {
        if (i < n) {
            *(uint16_t *)(p + i) = v;
            i += 2;
        }
    } while (i < n);
}
