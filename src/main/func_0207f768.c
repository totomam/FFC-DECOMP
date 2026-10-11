#include "ffc/types.h"

extern int func_0207f4bc(void *p, int a, int b);

int func_0207f768(void *a, uint32_t *b, uint32_t c, uint32_t d, uint32_t *e) {
    uint32_t *q;
    int r;
    b[12] = c;
    q = b + 12;
    q[1] = d;
    q[2] = *e;
    r = func_0207f4bc(b, 7, 1);
    if (r == 0) {
        b[3] = (b[3] | 0x10) & ~0x20u;
        b[2] = (uint32_t)a;
        b[1] = (uint32_t)((uint8_t *)b + 0x20);
    }
    return r;
}
