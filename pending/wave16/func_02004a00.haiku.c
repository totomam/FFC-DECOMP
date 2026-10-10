/* cflags: -nothumb */
#include "ffc/types.h"

void func_02004a00(uint32_t v, uint8_t *p, uint32_t n) {
    uint8_t *end = p + n;
    do {
        if ((int32_t)p < (int32_t)end) {
            *(uint32_t *)p = v;
            p += 4;
        }
    } while ((int32_t)p < (int32_t)end);
}
