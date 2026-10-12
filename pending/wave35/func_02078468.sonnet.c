#include "ffc/types.h"

typedef struct Obj {
    int8_t *data;
    int (*fn)(uint32_t *);
} Obj;
typedef struct { volatile uint32_t a; uint32_t z[2]; uint32_t v; } S;

int func_02078468(Obj *p, int a, int b) {
    S s;
    int count;
    int r;
    int (*fn)(uint32_t *);
    s.a = a;
    volatile uint32_t *q = s.z;
    uint32_t *vp = &s.v;
    { q[0] = 0; fn = p->fn; q[1] = 0; }
    s.v = b;
    count = 1;
    r = fn(vp);
    while (r != 0) {
        if (r == 10) count++;
        r = fn(vp);
    }
    int t = p->data[1];
    t = s.a + t;
    return count * t - s.a;
}
