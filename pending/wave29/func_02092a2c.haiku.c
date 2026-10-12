#include "ffc/types.h"

uint8_t *func_02092a2c(uint8_t *s, int c) {
    uint8_t *p;
    uint8_t ch;
    c = (uint8_t)c;
    p = s + 1;
    ch = *s;
    while (ch != 0) {
        if (ch == c) {
            return p - 1;
        }
        ch = *p++;
    }
    if (c != 0) {
        return 0;
    }
    return p - 1;
}
