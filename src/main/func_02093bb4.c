#include "ffc/types.h"

int func_02093bb4(uint16_t *p) {
    int n = -1;
    uint16_t c;
    do {
        c = *p;
        n++;
        p++;
    } while (c != 0);
    return n;
}
