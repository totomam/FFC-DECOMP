#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Vec2;

typedef struct Obj Obj;
typedef struct VT {
    void *f0;
    void *f1;
    void *f2;
    void (*f3)(Obj *, Vec2);
} VT;
struct Obj { const VT *vt; };

typedef struct Self {
    uint32_t pad[5];
    Obj *obj;
    Vec2 pos;
    Vec2 pos2;
} Self;

static inline void vec_add(Vec2 *dst, const Vec2 *a, const Vec2 *b) {
    dst->x = a->x + b->x;
    dst->y = a->y + b->y;
}

void func_02032370(Self *self, Vec2 v) {
    Vec2 t;
    Vec2 *pt = &t;
    vec_add(&self->pos2, &self->pos, &v);
    pt->x = self->pos.x;
    pt->y = self->pos.y;
    {
        Obj *o = self->obj;
        o->vt->f3(o, *pt);
    }
}
