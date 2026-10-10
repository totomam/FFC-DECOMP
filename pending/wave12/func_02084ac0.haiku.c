/* cflags: -nothumb */
#include "ffc/types.h"

void func_02084ac0(uint32_t *src, uint32_t *dst) {
    int i;
    for (i = 0; i < 2; i++) {
        uint32_t x = src[0];
        uint32_t y = src[1];
        uint32_t z = src[2];
        dst[0] = x;
        dst[1] = y;
        dst[2] = z;
        src += 3;
        dst += 3;
    }
}
