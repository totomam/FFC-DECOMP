#include "ffc/types.h"

typedef struct Elem { uint32_t a; uint32_t b; uint32_t c; } Elem;
typedef struct Quad { uint32_t w0, w1, w2, w3; } Quad;
typedef struct Obj { void **vt; uint32_t pad[2]; uint32_t flag; } Obj;
typedef struct Self {
    uint32_t pad0[7];
    Obj *obj;
    uint32_t p20;
    uint32_t pad1;
    Elem *arrB;
    uint32_t cnt2c;
    Elem *x30;
    Elem *arrA;
    uint32_t count;
    Elem *y3c;
} Self;

extern uint32_t func_02062898(Obj *o);

void func_02068f54(Self *s) {
    if ((int8_t)s->obj->flag == 0) {
        ((void (*)(Obj *))s->obj->vt[2])(s->obj);
    }
    if (s->count != 0) {
        Elem *e;
        Elem *b = s->arrB;
        for (e = s->arrA; e != s->arrA + s->count; e++) {
            uint32_t key = e->b;
            while (b->c < key) {
                b++;
            }
            if (b->a == e->a && b->b == key && b->c == e->c) {
                b++;
                continue;
            }
            if (e->a != 0) {
                Quad p = { e->a, 0, key, 0 };
                ((void (*)(Obj *, uint32_t, uint32_t, uint32_t, uint32_t))s->obj->vt[14])(s->obj, s->p20, p.w2, p.w3, p.w0);
            } else {
                Quad q;
                uint32_t rv = func_02062898(s->obj);
                q.w0 = e->b;
                q.w1 = 0;
                q.w2 = e->c;
                q.w3 = rv;
                ((void (*)(Obj *, Quad))s->obj->vt[16])(s->obj, q);
            }
        }
        {
            Elem *t = s->x30;
            s->x30 = s->y3c;
            s->y3c = t;
        }
        {
            Elem *t = s->arrB;
            s->arrB = s->arrA;
            s->arrA = t;
        }
        s->cnt2c = s->count;
        s->count = 0;
    }
}
