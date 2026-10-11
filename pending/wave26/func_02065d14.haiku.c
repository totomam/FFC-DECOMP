#include "ffc/types.h"

typedef struct T {
    int x;
    int y;
} T;

typedef struct L {
    int a;
    int x;
    int y;
} L;

extern void func_02065f50(void *o, T t);
extern char data_020b1794[];

typedef struct Obj {
    void *vt;
    int pad[6];
    int a;
    int b;
    int c;
    int d;
    int e;
} Obj;

typedef struct S {
    int a;
    int b;
    int c;
    int d;
    int e;
} S;

Obj *func_02065d14(Obj *o, S s) {
    L l;
    l.a = s.a;
    l.x = s.d - s.b;
    l.y = s.e - s.c;
    func_02065f50(o, *(T *)&l.x);
    o->c = s.c;
    o->vt = data_020b1794;
    o->a = l.a;
    o->d = s.d;
    o->b = s.b;
    o->e = s.e;
    return o;
}
