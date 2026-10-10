#include "ffc/types.h"

typedef void (*fp)(uint32_t, uint32_t);
extern uint32_t data_020b2cf8[];

void func_02090320(uint32_t a, uint32_t b) {
    uint32_t *p = (uint32_t *)data_020b2cf8[2];
    fp f = (fp)p[1];
    f(a, b);
}
