#include "ffc/types.h"

void func_02081b5c(uint16_t *p, uint16_t a, int16_t b) {
    if (b < 0) {
        p[0] = a | 0xC0;
        p[2] = -b;
        return;
    }
    p[0] = a | 0x80;
    p[2] = b;
}
