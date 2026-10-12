#include "ffc/types.h"

uint8_t *func_02092a54(uint8_t *s, uint32_t c) {
    uint8_t *r = 0;
    uint8_t *p = s + 1;
    uint8_t cc = (uint8_t)c;
    if (*s != 0) {
        do {
            if (*s == cc) {
                r = p - 1;
            }
            s = p;
            p++;
        } while (*s != 0);
    }
    if (r != 0) {
        return r;
    }
    if (cc != 0) {
        return 0;
    }
    return p - 1;
}
