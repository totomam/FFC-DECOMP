#include "ffc/types.h"

int func_ov000_0216714c(uint16_t *s) {
    uint16_t *p = s;
    uint16_t c;
    do {
        c = *p;
        p = p + 1;
    } while (c != 0);
    return ((char *)p - (char *)s) / 2 - 1;
}
