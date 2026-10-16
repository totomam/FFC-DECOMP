#include "ffc/types.h"
typedef struct { int a; int b; } E;
typedef struct { E *p; } It;
typedef struct { E *p; int v; } S;
extern void func_ov002_021cc8c8(It f, It l, void *c);
extern void func_ov002_021cc408(It f, It l, S b, void *c);
extern void func_ov002_021cc344(void *o, S a, S b, S c);
extern void func_ov002_021cbe14(It f, It m, It l, int n1, int n2, S b, S e, void *c);
void func_ov002_021cbc9c(It f, It l, S b, S e, void *c);
void func_ov002_021cbc9c(It fi, It la, S b, S e, void *c) {
    E *f = fi.p, *l = la.p;
    int n = l - f;
    int h;
    E *m;
    if (n <= 1) return;
    if (n == 2) {
        if (l[-1].b > f->b) { E t = *f; *f = l[-1]; l[-1] = t; }
        return;
    }
    if (n <= 20) { func_ov002_021cc8c8(fi, la, c); return; }
    h = n / 2;
    m = f + (n - h);
    {
    It mi; mi.p = m;
    if (n <= e.p - b.p) {
        S s2; S r;
        func_ov002_021cc408(fi, mi, b, c);
        s2.p = (E*)((char*)b.p + (n - h) * 8); s2.v = b.v;
        func_ov002_021cc408(mi, la, b, c);
        func_ov002_021cc344(&r, b, s2, e);
    } else {
        func_ov002_021cbc9c(fi, mi, b, e, c);
        func_ov002_021cbc9c(mi, la, b, e, c);
        func_ov002_021cbe14(fi, mi, la, m - f, l - m, b, e, c);
    }
    }
}
