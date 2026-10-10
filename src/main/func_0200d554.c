#include "ffc/types.h"

void func_0200d554(uint32_t *p, uint32_t v) {
    uint32_t *q;
    p[0] = v;
    p[1] = 0;
    q = &p[2];
    p[2] = 0;
    q[1] = 0;
    q[2] = 0;
}
