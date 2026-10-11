/* cflags: -nothumb */
#include "ffc/types.h"

void func_02004fd4(uint16_t *a, uint16_t *b) {
    uint32_t v = *b;
    uint32_t t = *a;
    do {
        t++;
        *a = t;
    } while (*b == v);
    t++;
    *a = t;
}
