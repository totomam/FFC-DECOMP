#include "ffc/types.h"

typedef struct { int32_t x0, y0, x1, y1; } Rect;
typedef struct { Rect r; int32_t u0, u1; void *p; } Ent;
typedef struct { int32_t x, y; } Pt;
typedef struct { int32_t w, h; } Vec2;
typedef struct { Pt a; Pt b; } Box;

void func_02066790(uint8_t *self, void *obj, Pt p, int32_t c)
{
    Box s;
    Box t;
    uint32_t i;
    int32_t ax, ay;
    void **vt = *(void ***)obj;
    ((void (*)(void *, void *, int32_t))vt[3])(&s, obj, c);

    s.b.x = p.x + s.a.x;
    s.b.y = p.y + s.a.y;
    t.b = s.b;
    ax = p.x;
    ay = p.y;
    t.a.x = ax;
    t.a.y = ay;
    for (i = 0; i < *(uint32_t *)(self + 0x30); i++) {
        Ent *e = (Ent *)(*(uint8_t **)(self + 0x2c) + i * 0x1c);
        Rect q = e->r;
        if (q.x1 > ax && t.b.x > q.x0 && q.y1 > ay && t.b.y > q.y0) {
            Vec2 v;
            Pt off;
            off.x = p.x - e->r.x0;
            off.y = p.y - e->r.y0;
            v.w = (e->r.x1 - e->r.x0) / 8;
            v.h = (e->r.y1 - e->r.y0) / 8;
            vt = *(void ***)obj;
            ((void (*)(void *, void *, void *, Vec2, Pt, int32_t))vt[9])(
                obj, *(void **)(self + 0x48), e->p, v, off, c);
        }
    }
}
