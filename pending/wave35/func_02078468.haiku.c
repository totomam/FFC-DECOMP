#include "ffc/types.h"

typedef struct Obj {
    int8_t *data;
    int (*fn)(uint32_t *);
} Obj;

int func_02078468(Obj *p, int a, int b) {
    int count;
    uint32_t v;
    volatile uint32_t pair[2];
    volatile uint32_t *q;
    uint32_t *vp;
    int (*fn)(uint32_t *);
    int r;
    uint32_t a0;
    a0 = a;
    fn = p->fn;
    q = pair;
    q[0] = 0;
    q[1] = 0;
    vp = &v;
    v = b;
    count = 1;
    r = fn(vp);
    while (r != 0) {
        if (r == 10) {
            count++;
        }
        r = fn(vp);
    }
    return count * (a0 + p->data[1]) - a0;
}
