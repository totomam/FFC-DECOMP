#include "ffc/types.h"

uint8_t *func_02092b00(uint8_t *s, uint8_t *t) {
    uint8_t *p;
    uint8_t c;
    uint8_t first;
    uint8_t tc, sc;
    uint8_t *u;
    uint8_t *q;
    if (t == 0) return s;
    first = *t;
    if (first == 0) return s;
    p = s + 1;
    c = *s;
    while (c != 0) {
        if (c == first) {
            q = p;
            u = t + 1;
            do {
                tc = *u;
                sc = *q;
                u++;
                q++;
            } while (sc == tc && sc != 0);
            if (tc == 0) return p - 1;
        }
        c = *p;
        p++;
    }
    return 0;
}
