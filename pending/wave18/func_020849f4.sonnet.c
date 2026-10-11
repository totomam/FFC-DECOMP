/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { uint32_t a; } W;

void func_020849f4(W *src, W *dst, int n) {
    W *end = (W *)((char *)dst + n);
    do {
        if ((int)dst < (int)end) *dst++ = *src++;
    } while ((int)dst < (int)end);
}
