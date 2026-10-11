#include "ffc/types.h"
typedef struct T { int x; int y; } T;
typedef struct P { int b; int c; } P;
extern void func_02065f50(void *o, T t);
extern char data_020b1794[];
typedef struct Obj { void *vt; int pad[6]; int a; int b; int c; int d; int e; } Obj;
Obj *func_02065d14(Obj *o, int a, P p, P q) {
    T t;
    t.x = q.b - p.b;
    t.y = q.c - p.c;
    func_02065f50(o, t);
    o->c = p.c;
    o->vt = data_020b1794;
    o->d = q.b;
    o->a = a;
    o->e = q.c;
    o->b = p.b;
    return o;
}
