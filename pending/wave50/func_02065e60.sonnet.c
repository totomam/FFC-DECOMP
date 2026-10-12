#include "ffc/types.h"
typedef struct { int32_t x, y; } Vec2;
typedef struct { Vec2 a, b; } Seg;
typedef struct { uint8_t pad[0x1c]; void **sub; Vec2 pos; } Obj;
typedef int32_t (*Meth)(void *self, Seg s, int32_t c);
int32_t func_02065e60(Obj *o, Seg s, int32_t c)
{
    Vec2 p = o->pos;
    Vec2 q = o->pos;
    Seg seg;
    seg.a.x = s.a.x + p.x;
    seg.a.y = s.a.y + p.y;
    seg.b.x = s.b.x + q.x;
    seg.b.y = s.b.y + q.y;
    return ((Meth)(*(void ***)o->sub)[0x44/4])(o->sub, seg, c);
}
