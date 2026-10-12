#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055110(void *a, void *b);
extern uint8_t data_020b1264[];
extern void *data_0213e098;

typedef struct Rect { int32_t x0, y0, x1, y1; } Rect;
typedef struct Elem {
    Rect r;
    int32_t a10, a14, a18;
} Elem;

typedef struct Tbl {
    int32_t a0;
    uint8_t *p4;
    int32_t a8, ac, a10;
    int32_t s14;
} Tbl;

typedef struct Self {
    uint8_t pad[0x2c];
    Elem *base;
    uint32_t count;
    uint8_t pad2[0x14];
    Tbl *tbl;
} Self;

typedef struct Obj {
    void *vt;
    uint32_t f4, f8;
    uint32_t flags;
    uint32_t f10;
    uint32_t f14;
    uint8_t *ptr;
    int32_t w8;
    int32_t h8;
    int32_t dw;
    int32_t dh;
    int32_t ox;
    int32_t oy;
} Obj;

typedef struct P { int32_t x, y; } P;
void func_020669a4(Self *self, Rect w, uint32_t v)
{
    uint32_t i;
    Rect c, e, er, d;
    P neg, sz, neg2, sz2;
    for (i = 0; i < self->count; i++) {
        e = self->base[i].r;
        if (e.x1 > w.x0 && w.x1 > e.x0 && e.y1 > w.y0 && w.y1 > e.y0) {
            Obj *o = (Obj *)func_0205681c(0x34);
            if (o != 0) {
                Elem *pe = &self->base[i];
                er = pe->r;
                sz.x = (er.x1 - er.x0) / 8;
                sz.y = (er.y1 - er.y0) / 8;
                neg.x = -er.x0;
                neg.y = -er.y0;
                neg2 = neg;
                c.x0 = (w.x0 > er.x0 ? w.x0 : er.x0) + neg2.x;
                c.y0 = (w.y0 > er.y0 ? w.y0 : er.y0) + neg2.y;
                c.x1 = (w.x1 < er.x1 ? w.x1 : er.x1) + neg2.x;
                c.y1 = (w.y1 < er.y1 ? w.y1 : er.y1) + neg2.y;
                d = c;
                sz2 = sz;
                o->flags &= ~0xffu;
                o->vt = data_020b1264;
                o->f14 = (v << 4) | v;
                o->ptr = self->tbl->p4 + pe->a18 * self->tbl->s14;
                o->w8 = sz2.x;
                o->h8 = sz2.y;
                o->dw = d.x1 - d.x0;
                o->dh = d.y1 - d.y0;
                o->ox = d.x0;
                o->oy = d.y0;
            }
            func_02055110(data_0213e098, o);
        }
    }
}
