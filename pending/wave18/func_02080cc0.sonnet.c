#include "ffc/types.h"

void func_02080cc0(void *p, uint32_t a, uint32_t b) {
    uint32_t *q = (uint32_t *)p;
    uint32_t *r;
    q[0] = b;
    q[10] = b;
    q[8] = a;
    q[2] = -a;
    q[1] = 0;
    r = q + 3;
    r[0] = 0;
    r[1] = 0;
    r[2] = 0x1000;
    r += 3;
    r[0] = 0;
    r[1] = 0;
    r += 2;
    r[1] = 0;
    r += 3;
    r[0] = 0;
    r[1] = 0;
    r += 2;
    r[0] = 0;
    r[1] = 0;
    r[2] = 0x1000;
}
