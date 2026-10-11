#include "ffc/types.h"

uint8_t *func_020903d8(uint8_t *s, int c, uint32_t n) {
    uint8_t ch = (uint8_t)c;
    while (n != 0) {
        uint8_t v = *s;
        s++;
        if (v == ch) {
            return s - 1;
        }
        n--;
    }
    return 0;
}
