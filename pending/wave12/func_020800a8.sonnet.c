/* cflags: -nothumb */
#include "ffc/types.h"

void func_020800a8(uint32_t *p) {
    int i;
    p[8] = 0x1000;
    for (i = 0; i < 2; i++) {
        p[0] = 0x1000; p[1] = 0;
        p[2] = 0; p[3] = 0;
        p += 4;
    }
}
