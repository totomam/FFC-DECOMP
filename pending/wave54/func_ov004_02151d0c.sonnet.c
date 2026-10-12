#include "ffc/types.h"

typedef struct Vec {
    int32_t x;
    int32_t y;
} Vec;

typedef struct Elem {
    void *obj;
    int32_t f4;
    uint16_t f8;
    uint16_t pad;
    uint32_t cnt;
} Elem;

typedef struct Data {
    uint8_t pad0[0x20];
    int32_t c20;
    int32_t c24;
    uint8_t pad1[0x0c];
    int32_t c34;
    int32_t c38;
} Data;

typedef struct VT {
    void *s0;
    void *s1;
    void *s2;
    void (*f3)(void *self, Vec v);
} VT;

typedef struct Obj {
    const VT *vt;
} Obj;

extern void func_ov004_02151ec8(void *field, Elem *e, uint32_t v);
extern int32_t func_02081210(int32_t a, int32_t b);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern Data data_ov004_02159448;
extern int16_t data_020a1bd0[];

void func_ov004_02151d0c(void *pp)
{
    uint32_t *w = (uint32_t *)pp;
    uint32_t i;

    for (i = 0; i < w[0x52]; i++) {
        Elem *e = (Elem *)(((uint8_t *)w)[0] ? 0 : 0);
        uint32_t c;

        e = &((Elem *)w[0x51])[i];
        c = e->cnt;
        e->cnt = c + 1;
        if (c >= 0x28) {
            func_ov004_02151ec8(&w[0x50], e, 0);
            i--;
        } else {
            int32_t t1 = func_02081210((int32_t)((c + 1) << 12), 0xa << 14);
            int32_t a1 = func_020817c8(t1, data_ov004_02159448.c24);
            int32_t a2 = func_020817c8(0x1000 - t1, data_ov004_02159448.c20);
            Vec pos;
            Vec s;
            int32_t r1v, r2v;
            uint32_t idx;
            int16_t *tp;
            Obj *o;
            Vec *v = (Vec *)w[0x4d];

            e->f4 += a2 + a1;
            e->f8 = (uint16_t)(e->f8 + 0x444);

            s.x = v->x - data_ov004_02159448.c34;
            s.y = v->y - data_ov004_02159448.c38;

            idx = (uint32_t)(e->f8 >> 4) << 2;
            tp = (int16_t *)((uint8_t *)data_020a1bd0 + idx);

            r1v = func_020817c8(tp[0], e->f4);
            r2v = func_020817c8(tp[1], e->f4);

            pos.x = s.x * 8 + ((s.y & 1) * 8) / 2 + 4 + (r2v >> 12);
            pos.y = s.y * 8 + 4 + (r1v >> 12);

            o = (Obj *)e->obj;
            o->vt->f3(o, pos);
        }
    }
}
