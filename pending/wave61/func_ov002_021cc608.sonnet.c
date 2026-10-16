#include "ffc/types.h"
typedef struct { int32_t a, b; } E;
typedef struct { int32_t x; int32_t cnt; E *base; } V;
typedef struct { E *p; V *v; } It;
#define PUT(S) { It t; It *q = &t; E *p; t.p = o.p; t.v = o.v; p = t.p; \
    if (((p - t.v->base)) < t.v->cnt) { p->a = (S)->a; p->b = (S)->b; } \
    else { if (p != 0) { p->a = (S)->a; p->b = (S)->b; } q->v->cnt++; } }
static void adv(E **p) { *p += 1; }
It func_ov002_021cc608(E *f1, E *l1, E *f2, E *l2, It o) {
    E **a = &f1; E **b = &f2; E **c = &l1; E **d = &l2;
    while (*a != *c && *b != *d) {
        if ((*b)->b > (*a)->b) { PUT(*b) adv(b); }
        else { PUT(*a) adv(a); }
        o.p++;
    }
    for (; *a != *c; adv(a)) { PUT(*a) o.p++; }
    for (; *b != *d; adv(b)) { PUT(*b) o.p++; }
    return o;
}
