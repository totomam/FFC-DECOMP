#include "ffc/types.h"

void func_ov003_02147290(uint32_t *p, ...) {
    uint32_t a = ((uint32_t *)&p)[1];
    uint32_t b = ((uint32_t *)&p)[2];
    *p = a + b;
}
