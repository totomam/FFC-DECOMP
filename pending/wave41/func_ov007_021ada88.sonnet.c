#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t v);
extern void func_020095b8(void *dst, void *src);
extern void *data_0213df18;
extern uint32_t data_ov007_021c5440[];
typedef struct P{uint32_t a,b;}P;
extern P data_ov007_021c54a8;

typedef struct Obj {
    void *vt;
    uint32_t pad4[31];
    uint32_t f80[2];
    uint32_t f88;
    uint8_t f8c;
    uint8_t pad8d[3];
    uint32_t f90;
    uint32_t f94;
    uint32_t f98[3];
    uint32_t fa4;
    uint8_t fa8;
    uint8_t fa9;
} Obj;

typedef struct Src {
    uint8_t b0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc[3];
    uint32_t w18;
} Src;

void *func_ov007_021ada88(void *a, uint32_t b, Src *s, uint8_t c)
{
    Obj *o = (Obj *)a;
    uint32_t x, y;

    func_02056c9c(a, *(uint32_t *)((uint8_t *)data_0213df18 + 0x24));
    o->vt = data_ov007_021c5440;
    o->f88 = b;
    o->f8c = s->b0;
    o->f90 = s->w4;
    o->f94 = s->w8;
    func_020095b8(o->f98, &s->wc);
    o->fa8 = c;
    o->fa9 = 0;
    if (o->f90 > 99) {
        o->f90 = 99;
    }
    if (o->f94 > 99) {
        o->f94 = 99;
    }
    o->fa4 = s->w18;
    { uint32_t x = data_ov007_021c54a8.a; uint32_t y = data_ov007_021c54a8.b; o->f80[0] = x; o->f80[1] = y; }
    return o;
}
