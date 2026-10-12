#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

typedef struct {
    uint8_t pad[0x1c];
    void *sub;
    Vec2 pos;
} Obj;

typedef struct {
    Obj *o;
    int32_t ax;
    int32_t ay;
    int32_t bx;
} Args;

typedef struct {
    Vec2 a;
    Vec2 b;
} Seg;

typedef int32_t (*Meth)(void *self, Seg s, int32_t c);

int32_t func_02065e60(Args s, int32_t by, int32_t c)
{
    Obj *o = s.o;
    Vec2 pos = o->pos;
    Seg seg;
    seg.a.x = s.ax + pos.x;
    seg.a.y = s.ay + pos.y;
    seg.b.x = s.bx + pos.x;
    seg.b.y = by + pos.y;
    Meth m = *(Meth *)((char *)*(void **)o->sub + 0x44);
    return m(o->sub, seg, c);
}
