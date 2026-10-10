/* cflags: -nothumb */
#include "ffc/types.h"

void func_02004a00(uint32_t v, int32_t p, int32_t n) {
    int32_t end = p + n;
    do {
        if (p >= end) return;
        *(uint32_t *)p = v;
        p += 4;
    } while (1);
}
