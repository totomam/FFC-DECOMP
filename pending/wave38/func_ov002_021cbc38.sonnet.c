#include "ffc/types.h"

typedef struct { void *p; int n; } Out;
typedef struct { int m; int z; void *begin; } Buf;
typedef struct { void *p; Buf *b; } It;
typedef struct { int a; int b; void *c; int d; } P;

extern void func_ov002_021cc934(Out *out, int n);
extern void func_ov002_021cbc9c(int a, int b, It x, It y, void *pc);
extern void func_02056858(void *p);

void func_ov002_021cbc38(P s) {
    int n = (s.b - s.a) / 8;
    Out o;
    It y, x;
    Buf t;
    if (n <= 20) n = 0;
    func_ov002_021cc934(&o, n);
    t.m = o.n;
    t.z = 0;
    t.begin = o.p;
    x.p = o.p; x.b = &t;
    y.p = (char*)o.p + o.n * 8; y.b = &t;
    func_ov002_021cbc9c(s.a, s.b, x, y, &s.c);
    func_02056858(t.begin);
}
