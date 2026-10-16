/* cflags: -nothumb */
#include "ffc/types.h"
void func_020849f4(int32_t *src, int32_t *dst, int32_t n) {
    int32_t end = (int32_t)dst + n;
    while ((int32_t)dst < end) {
        *dst++ = *src++;
    }
}
