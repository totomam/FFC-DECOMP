#include "ffc/types.h"

void func_0202d190(uint32_t *a, uint32_t *b) {
    uint32_t t;
    uint32_t *p;
    uint32_t q;
    uint32_t w;

    if (a == b) {
        return;
    }
    t = a[0];
    a[0] = b[0];
    b[0] = t;
    t = a[1];
    a[1] = b[1];
    b[1] = t;
    t = a[2];
    a[2] = b[2];
    b[2] = t;

    p = (uint32_t *)a[1];
    if (p != 0) {
        w = p[2];
        q = (uint32_t)(a + 1);
        p[2] = q | (w & 1);
    } else {
        a[2] = (uint32_t)(a + 1);
    }

    p = (uint32_t *)b[1];
    if (p != 0) {
        q = (uint32_t)(b + 1);
        w = p[2];
        p[2] = q | (w & 1);
    } else {
        b[2] = (uint32_t)(b + 1);
    }
}
