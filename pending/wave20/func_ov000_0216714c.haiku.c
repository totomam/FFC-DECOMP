#include "ffc/types.h"

int func_ov000_0216714c(uint16_t *s) {
    uint16_t *p = s;
    uint16_t c;
    do {
        c = *p;
        p++;
    } while (c != 0);
    return (int)(p - s) - 1;
}
