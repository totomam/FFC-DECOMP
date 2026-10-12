#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055110(void *a, void *b);
extern uint8_t data_020b1264[];
extern void *data_0213e098;

typedef struct Elem {
    int32_t x0, y0, x1, y1;
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

void func_020669a4(Self *self, int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint32_t v)
{
    uint32_t i;
    for (i = 0; i < self->count; i++) {
        Elem *e = &self->base[i];
        if (e->x1 > x1 && e->x0 < x2 && e->y1 > y1 && e->y0 < y2) {
            Obj *o = (Obj *)func_0205681c(0x34);
            if (o != 0) {
                int32_t a, b, c, d;
                int32_t X0, Y0, X1, Y1;
                int32_t w, h;

                X0 = e->x0;
                if (x1 > X0) X0 = x1;
                Y0 = e->y0;
                if (y1 > Y0) Y0 = y1;
                X1 = e->x1;
                if (x2 < X1) X1 = x2;
                Y1 = e->y1;
                if (y2 < Y1) Y1 = y2;

                a = X0 - e->x0;
                b = Y0 - e->y0;
                c = X1 - e->x0;
                d = Y1 - e->y0;

                w = e->x1 - e->x0;
                h = e->y1 - e->y0;

                o->vt = data_020b1264;
                o->flags &= ~0xffu;
                o->f14 = (v << 4) | v;
                o->ptr = self->tbl->p4 + e->a18 * self->tbl->s14;
                o->w8 = w / 8;
                o->h8 = h / 8;
                o->dw = c - a;
                o->dh = d - b;
                o->ox = a;
                o->oy = b;

                func_02055110(data_0213e098, o);
            }
        }
    }
}
