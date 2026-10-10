#include "ffc/types.h"

void func_02080ce4(uint32_t *p, uint32_t a, uint32_t b) {
    uint32_t *q;
    p[0] = b;
    p[5] = b;
    p[1] = a;
    p[4] = -a;
    q = p + 2;
    q[0] = 0;
    q[1] = 0;
    q += 2;
    q += 2;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0x1000;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0x1000;
}
