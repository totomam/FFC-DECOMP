#include "ffc/types.h"

typedef struct { int32_t v[4]; } Q4;
typedef struct { int32_t a, b; } L2;

#define VCALL(o, idx) (((void **)*(void **)(o))[idx])

extern void func_ov005_02195db0(void *o, int n);
extern void func_020628ac(void *o, Q4 q);
extern void func_02056c4c(void *o);
extern void *func_ov005_02195e2c(void *o, Q4 s, Q4 q, int a, int b);
extern void func_02056bc0(void *o, void *n);

void func_ov010_021c8bc0(uint8_t *self, void *p)
{
    Q4 s;
    Q4 q;
    void *o;
    uint8_t i;

    if (p == 0) {
        o = *(void **)(self + 0xe4);
        ((void (*)(void *))VCALL(o, 11))(o);
        return;
    }

    ((void (*)(Q4 *, void *))VCALL(p, 4))(&q, p);

    o = *(void **)(self + 0xe4);
    func_ov005_02195db0(o, 1);

    for (i = 0; i < 5; i++) {
        if (p == *(void **)(self + 0xcc + i * 4)) {
            L2 e = ((L2 *)0x021993cc)[i];
            q.v[2] += e.a - q.v[0];
            q.v[3] += e.b - q.v[1];
            q.v[0] = e.a;
            q.v[1] = e.b;
            func_ov005_02195db0(*(void **)(self + 0xe4), 2);
        }
    }

    o = *(void **)(self + 0xe4);
    if (((int (*)(void *))VCALL(o, 12))(o) != 0) {
        func_020628ac(*(void **)(self + 0xe4), q);
    } else {
        void *r;
        func_02056c4c(*(void **)(self + 0xe0));
        o = *(void **)(self + 0xe4);
        ((void (*)(Q4 *, void *))VCALL(o, 7))(&s, o);
        r = func_ov005_02195e2c(*(void **)(self + 0xe4), s, q, 10, -5);
        func_02056bc0(*(void **)(self + 0xe0), r);
    }

    o = *(void **)(self + 0xe4);
    ((void (*)(void *))VCALL(o, 10))(o);
}
