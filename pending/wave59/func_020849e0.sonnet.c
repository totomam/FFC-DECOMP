/* cflags: -nothumb */
#include "ffc/types.h"
void func_020849e0(int32_t v, int32_t *p, int32_t n) {
    int32_t *end = (int32_t*)((int32_t)p + n);
    do {
        if ((int32_t)p >= (int32_t)end) return;
        *p++ = v;
    } while (1);
}
