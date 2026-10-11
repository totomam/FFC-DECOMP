#include "ffc/types.h"

uint32_t func_02023638(uint32_t *p) {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    if (p == 0) {
        return 0;
    }
    if (p[4] == 0) {
        return 0;
    }
    a = p[1];
    b = p[2];
    c = p[3];
    return (uint32_t)p + (c + (a + b));
}
