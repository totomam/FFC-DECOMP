#include "ffc/types.h"

uint8_t *func_020903f4(uint8_t *s, int c, uint32_t n) {
    uint8_t ch = (uint8_t)c;
    uint8_t *p = s + n;
    while (n != 0) {
        p--;
        if (*p == ch) {
            return p;
        }
        n--;
    }
    return 0;
}
