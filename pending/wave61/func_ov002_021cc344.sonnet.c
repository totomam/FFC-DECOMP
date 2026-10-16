#include "ffc/types.h"
typedef struct { int k; int v; } P;
typedef struct { P *p; int x; } It;
typedef struct { P *o; int pad; } R;
R func_ov002_021cc344(It f1, It l1, It f2, It l2, P *out)
{
    R r;
    It f2c, l2c, f1c, l1c;
    P **po = &out;
    int c;
    goto test;
body:
    if (f2.p->v > f1.p->v) { out->k = f2.p->k; out->v = f2.p->v; f2.p++; }
    else { out->k = f1.p->k; out->v = f1.p->v; f1.p++; }
    out++;
test:
    c = 0;
    if (f1.p != l1.p && f2.p != l2.p) c = 1;
    if (c) goto body;
    if (f1.p == l1.p) {
        l2c = l2; f2c = f2;
        while (f2c.p != l2c.p) { out->k = f2c.p->k; out->v = f2c.p->v; f2c.p++; out++; }
    } else {
        l1c = l1; f1c = f1;
        while (f1c.p != l1c.p) { out->k = f1c.p->k; out->v = f1c.p->v; f1c.p++; out++; }
    }
    r.o = *po;
    return r;
}
