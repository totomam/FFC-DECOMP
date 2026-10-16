#include "ffc/types.h"
typedef struct { int32_t x, y; } P;
typedef struct { P a, b; } R;
typedef struct { R t; P s; P b; P a; } L;
typedef void (*Fn)(P*, void*);
void func_020628ec(R *out, void *o) {
    L l;
    int sx, sy;
    void *o2 = o; Fn f = (*(Fn**)o)[4];
    f(&l.a, o);
    (*(Fn**)o2)[6](&l.b, o2);
    sx = l.a.x + l.b.x;
    l.s.x = sx;
    sy = l.a.y + l.b.y;
    l.s.y = sy;
    l.t.a.x = sx; l.t.a.y = sy;
    l.t.b = l.a;
    out->a = l.a; out->b.x = sx; out->b.y = sy;
}
