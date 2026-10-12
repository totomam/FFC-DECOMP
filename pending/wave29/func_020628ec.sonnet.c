#include "ffc/types.h"

typedef struct { int32_t x, y; } Vec2;
typedef struct { Vec2 p, q; } Rect;
typedef void (*GetFn)(Vec2 *out, void *self);

void func_020628ec(Rect *out, void *obj)
{
    Rect t;
    Vec2 sum;
    Vec2 b;
    Vec2 a;
    GetFn f;

    f = (GetFn)(((void **)*(void **)obj)[4]);
    f(&a, obj);
    f = (GetFn)(((void **)*(void **)obj)[6]);
    f(&b, obj);

    sum.x = a.x + b.x;
    sum.y = a.y + b.y;
    t.p = sum;
    t.q = a;
    out->p = t.q;
    out->q = t.p;
}
