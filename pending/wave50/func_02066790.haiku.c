#include "ffc/types.h"

typedef struct {
    int32_t x0, y0, x1, y1;
} Rect;

typedef struct {
    Rect r;
    int32_t u0, u1;
    void *p;
} Ent;

typedef struct {
    int32_t x, y;
} Pt;

typedef struct {
    int32_t w, h;
} Vec2;

typedef void (*Fn9)(void *, void *, void *, Vec2);

void func_02066790(uint8_t *self, void *obj, Pt p, int32_t c)
{
    Pt s;
    void **vt = *(void ***)obj;
    ((void (*)(void *, void *, int32_t))vt[3])(&s, obj, c);

    int32_t x2 = p.x + s.x;
    int32_t y2 = p.y + s.y;
    uint32_t n = *(uint32_t *)(self + 0x30);
    Ent *e = *(Ent **)(self + 0x2c);

    for (uint32_t i = 0; i < n; i++) {
        Rect q = e[i].r;
        if (q.x1 > p.x && x2 > q.x0 && q.y1 > p.y && y2 > q.y0) {
            Vec2 v;
            v.w = (q.x1 - q.x0) / 8;
            v.h = (q.y1 - q.y0) / 8;
            vt = *(void ***)obj;
            ((void (*)(void *, void *, void *, Vec2))vt[9])(
                obj, *(void **)(self + 0x48), e[i].p, v);
        }
    }
}
