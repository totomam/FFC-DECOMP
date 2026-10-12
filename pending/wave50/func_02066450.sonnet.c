#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055110(void *a, void *b);
extern uint8_t data_020b1264[];
extern void *data_0213e098;

typedef struct { uint32_t w0, w1, w2, w3; } S16;
typedef struct { uint32_t a; uint32_t b; } Q;
typedef struct {
    uint32_t p[11];
    Q *q;
    uint32_t pad;
    uint32_t f34;
    uint32_t f38;
    uint32_t f3c;
} A;
typedef struct {
    void *vt;
    uint32_t f04, f08, f0c, f10, f14, f18, f1c, f20, f24, f28, f2c, f30;
} Obj;
typedef struct {
    uint32_t x0, x1;
    S16 s;
} L24;

void func_02066450(A *a, S16 s) {
    Obj *o;
    L24 l;
    uint32_t x0, x1, x, qb, d28, w0, w1, w2;
    o = (Obj *)func_0205681c(0x34);
    if (o) {
        qb = a->q->b;
        l.s = s;
        x0 = a->f34;
        x1 = a->f38;
        x = a->f3c;
        o->f0c &= ~0xffu;
        o->vt = data_020b1264;
        o->f14 = x | (x << 4);
        o->f18 = qb;
        o->f1c = x0;
        o->f20 = x1;
        l.x1 = x1;
        w1 = ((S16 *)&l.s)->w1;
        d28 = ((S16 *)&l.s)->w3 - w1;
        w2 = ((S16 *)&l.s)->w2;
        w0 = ((S16 *)&l.s)->w0;
        l.x0 = x0;
        o->f24 = w2 - w0;
        o->f28 = d28;
        o->f2c = ((S16 *)&l.s)->w0;
        o->f30 = w1;
    }
    func_02055110(data_0213e098, o);
}
