#include "ffc/types.h"
typedef struct { int32_t x, y; } Vec2;
typedef struct { Vec2 a, b; } Rect;
typedef struct { uint8_t pad[0x1c]; void *obj; Vec2 pos; } Self;
int32_t func_02065e10(Self *self, Vec2 p, Vec2 q) {
    Vec2 t1 = self->pos;
    Vec2 t2 = t1;
    Rect r;
    r.a.x = p.x + t1.x; r.a.y = p.y + t1.y; r.b.x = q.x + t2.x; r.b.y = q.y + t2.y;
    void *o = self->obj;
    return ((int32_t (**)(void *, Rect))*(void **)o)[0x10](o, r);
}
