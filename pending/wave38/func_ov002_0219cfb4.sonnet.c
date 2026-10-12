#include "ffc/types.h"

extern int data_ov002_021d4c0c[];
extern void *func_ov002_0219b840(void *obj, int b, int c, int d, int x, int y);

typedef struct {
    int x;
    int y;
} V;

struct P {
    int p0[6];
    void *f18;
    int p1;
    void *f20;
    int f24;
    V f28;
};

struct Q {
    int q0[7];
    V pos;
};

struct R {
    int r0[13];
    V n;
};

void func_ov002_0219cfb4(struct P *p, V a, int c)
{
    struct Q *q = (struct Q *)p->f20;
    if (q != 0) {
        V d;
        int *t = &data_ov002_021d4c0c[p->f24 * 2];
        d.x = t[0] - a.x;
        d.y = t[1] - a.y;
        q->pos = d;
    }
    if (p->f18 != 0) {
        V n;
        n.x = -a.x;
        n.y = -a.y;
        struct R *r = (struct R *)func_ov002_0219b840(p->f18, n.y, n.x, c, n.x, n.y);
        r->n = n;
    }
    p->f28 = a;
}
