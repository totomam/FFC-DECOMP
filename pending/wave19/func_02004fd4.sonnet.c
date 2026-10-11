/* cflags: -nothumb */
#include "ffc/types.h"

void func_02004fd4(uint16_t *a, uint16_t *b) {
    uint32_t t = *a;
    uint32_t v = *b;
    do {
        t++;
        *a = t;
    } while (v == *b);
    *a = t + 1;
}
