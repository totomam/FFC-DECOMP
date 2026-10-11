#include "ffc/types.h"

extern uint32_t func_ov000_0214eaac(uint32_t x);

uint32_t func_ov000_0214d59c(uint32_t a, uint32_t *p, uint32_t b) {
    uint32_t t = b ? a : 0;
    p[1] = t;
    p[0] = b;
    return a + func_ov000_0214eaac(b);
}
