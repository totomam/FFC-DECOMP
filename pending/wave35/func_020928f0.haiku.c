#include "ffc/types.h"

void func_020928f0(uint8_t *d, const uint8_t *s, uint32_t n) {
    uint8_t *p;
    if (n == 0) return;
    do {
        p = d;
        *d = *s++;
        d++;
        if (*p == 0) {
            n--;
            if (n == 0) return;
            do {
                *d = 0;
                d++;
                n--;
            } while (n != 0);
            return;
        }
        n--;
    } while (n != 0);
}
