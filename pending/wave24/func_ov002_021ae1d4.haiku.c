#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;

int func_ov002_021ae1d4(char *p, S s) {
    uint32_t *w = (uint32_t *)p;
    S t;
    void *obj;
    void **vt;
    w[98] = s.a;
    w[99] = s.b;
    t.a = s.a + w[100];
    t.b = s.b + w[101];
    obj = *(void **)(p + 0x128);
    vt = *(void ***)obj;
    return ((int (*)(void *, S))vt[3])(obj, t);
}
