#include "ffc/types.h"
typedef struct { int32_t x, y; } P;
typedef struct { int32_t a, b, c, d; } R;
typedef struct { int32_t a, b, c, d, e, f, g; } E;
typedef struct Obj { void **vt; } Obj;
typedef struct { uint8_t pad[0x2c]; E *ents; uint32_t n; uint8_t pad2[0x14]; int32_t f48; } T;
typedef P (*F3)(Obj *, int);
typedef void (*F9)(Obj *, int, int, P, P, int);
void func_02066790(T *self, Obj *o, P ap, int c) {
    R r;
    P br3, tl3;
    struct { P sz; P br; } q;
    q.sz = ((F3)o->vt[3])(o, c);
    int tx = ap.x, ty = ap.y;
    q.br.x = tx + q.sz.x;
    q.br.y = ty + q.sz.y;
    P br2 = q.br;
    P tl2 = ap;
    tl3 = tl2;
    br3 = br2;
    uint32_t i = 0;
    for (; i < self->n; i++) {
        E *e = &self->ents[i];
        r = *(R *)e;
        if (r.c > tl2.x && br2.x > r.a && r.d > tl2.y && br2.y > r.b) {
            P pos, s;
            pos.x = tx - e->a;
            pos.y = ty - e->b;
            s.x = (e->c - e->a) / 8;
            s.y = (e->d - e->b) / 8;
            ((F9)o->vt[9])(o, self->f48, e->f, s, pos, c);
        }
    }
}
