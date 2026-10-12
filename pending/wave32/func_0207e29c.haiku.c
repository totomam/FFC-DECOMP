#include "ffc/types.h"

int32_t func_0207e29c(int8_t *dst, int32_t n, int8_t *src, int32_t max, int32_t *flag) {
    int8_t c;
    int32_t i;
    int32_t lim = n - 1;

    if (lim >= max) {
        lim = max;
    }
    for (i = 0; i < lim && (c = src[i]) != 0; i++) {
        dst[i] = c;
    }
    if (i < max && src[i] != 0) {
        *flag = 1;
    }
    dst[i] = 0;
    return i;
}
