#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Vec2;
typedef struct { Vec2 a; Vec2 b; } Pair;
typedef struct Obj { void **vt; } Obj;

typedef struct Self {
    uint8_t pad[0xc4];
    Obj *c[5];
    void *d8;
    Obj *dc;
} Self;

extern void func_ov005_02195db0(Obj *obj, int32_t v);
extern void func_020628ac(Obj *obj, Pair p);
extern void func_02056c4c(void *o);
extern void *func_ov005_02195e2c(Obj *obj, Pair a, Pair b, int32_t c, int32_t d);
extern void func_02056bc0(void *object, void *node);

void func_ov011_021c3eb0(Self *self, Obj *p)
{
    Pair r;
    Pair a;
    Vec2 g;
    int32_t i;
    Obj *d;

    if (p == 0) {
        d = self->dc;
        ((void (*)(Obj *))(d->vt[11]))(d);
        return;
    }

    ((void (*)(Pair *, Obj *))(p->vt[4]))(&r, p);
    func_ov005_02195db0(self->dc, 1);

    for (i = 0; i < 5; i++) {
        if (p == self->c[i]) {
            int32_t *gp = (int32_t *)0x021993cc;
            g.x = gp[i * 2];
            g.y = gp[i * 2 + 1];
            r.b.x += g.x - r.a.x;
            r.b.y += g.y - r.a.y;
            r.a = g;
            func_ov005_02195db0(self->dc, 2);
        }
    }

    d = self->dc;
    if (((int32_t (*)(Obj *))(d->vt[12]))(d) != 0) {
        func_020628ac(self->dc, r);
    } else {
        func_02056c4c(self->d8);
        ((void (*)(Pair *, Obj *))(self->dc->vt[7]))(&a, self->dc);
        func_02056bc0(self->d8, func_ov005_02195e2c(self->dc, a, r, 10, -5));
    }

    d = self->dc;
    ((void (*)(Obj *))(d->vt[10]))(d);
}
