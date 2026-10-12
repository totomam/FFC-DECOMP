#include "ffc/types.h"

void func_ov003_02149918(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t mode) {
    uint32_t v;
    switch (mode) {
    case 0:
        v = 7;
        break;
    case 1:
        v = 1;
        break;
    case 2:
        v = 6;
        break;
    case 3:
        v = 4;
        break;
    default:
        goto tail;
    }
    p[125] = v;
tail:
    p[126] = a;
    p[127] = b;
    p[128] = c;
    p[129] = 0;
}
