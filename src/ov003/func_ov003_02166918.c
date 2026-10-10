#include "ffc/types.h"

extern uint32_t data_ov003_0217aaac;

void func_ov003_02166918(uint32_t *p, uint32_t a, uint16_t b, uint16_t c) {
    p[3] &= ~0xffu;
    p[0] = (uint32_t)&data_ov003_0217aaac;
    p[5] = a;
    ((uint16_t *)p)[12] = b;
    ((uint16_t *)p)[13] = c;
}
