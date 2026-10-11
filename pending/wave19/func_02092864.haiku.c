#include "ffc/types.h"

int32_t func_02092864(uint8_t *s) {
    int32_t n = -1;
    uint8_t c;
    do {
        c = *s;
        n++;
        s++;
    } while (c != 0);
    return n;
}
