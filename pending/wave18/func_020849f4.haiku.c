/* cflags: -nothumb */
#include "ffc/types.h"

void func_020849f4(uint32_t *src, uint32_t *dst, int n) {
    int end = (int)dst + n;
    do {
        if ((int)dst < end) {
            *dst++ = *src++;
        }
    } while ((int)dst < end);
}
