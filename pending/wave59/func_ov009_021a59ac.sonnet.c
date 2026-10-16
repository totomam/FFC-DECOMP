#include "ffc/types.h"
typedef struct C { int x; int cnt; uint32_t *base; } C;
typedef struct R { uint32_t *a, *e; } R;
typedef struct P { uint32_t *p; C *c; } P;
extern int func_ov009_021a5cdc(void *cmp, uint32_t *a, uint32_t *b);

#define put(T, o, v) do { C *c; uint32_t *d; T.p = (o).p; T.c = (o).c; c = T.c; d = T.p; \
    if ((((int)d - (int)c->base) / 4) < c->cnt) { *d = *(v); } \
    else { if (d != 0) *d = *(v); ((P*)&T)->c->cnt++; } } while (0)

P func_ov009_021a59ac(R ra, R rb, P out, void *cmp) {
    uint32_t *a = ra.a, *ae = ra.e, *b = rb.a, *be = rb.e;
    while (a != ae && b != be) {
        if (func_ov009_021a5cdc(cmp, b, a)) {
            P t1;
            put(t1, out, b);
            b++;
        } else {
            P t2;
            put(t2, out, a);
            a++;
        }
        out.p++;
    }
    if (a == ae) {
        P o = out; P t3;
        if (b != be) do { put(t3, o, b); b++; ((P*)&o)->p++; } while (b != be);
        return o;
    } else {
        P o = out; P t4;
        if (a != ae) do { put(t4, o, a); a++; ((P*)&o)->p++; } while (a != ae);
        return o;
    }
}
