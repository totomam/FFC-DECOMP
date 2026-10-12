#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    void *p;
    uint32_t w;
    uint8_t flag;
} Obj;

typedef struct { uint32_t a, b; } P;
extern uint32_t func_0204f7ec(const void *object);
extern void func_02056c9c(void *obj, uint32_t x);
extern void func_02035f58(void *o);
extern void *func_02035e10(void *o);
extern void func_02053234(void *o);
extern void func_02005988(void *o, const void *src);
extern void func_02018c48(void *dst, void *src);
extern void func_020532a4(void *o, void *src);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02052be0(void);
extern void func_02052d10(void *a, uint32_t b);
extern void *func_02053290(void *o);
extern void *func_020059cc(void *o);
extern void *data_0213df18;
extern uint8_t data_020af1c8[];
extern uint8_t data_020af23c[];
extern uint32_t data_020af250[2];

#define W(o) (*(uint32_t *)(self + (o)))
#define B(o) (*(uint8_t *)(self + (o)))

void *func_0203f518(void *a0, uint32_t a1)
{
    uint8_t *self = (uint8_t *)a0;
    uint32_t tmp[3];
    Obj local;
    uint8_t *q;
    Obj *b;
    uint32_t *tp;
    Obj *d;
    uint32_t *c;

    func_02056c9c(self, func_0204f7ec(data_0213df18));
    *(void **)self = data_020af1c8;
    W(0x88) = a1;
    q = self + 0x90;
    func_02035f58(q + 0x14);
    func_02035f58(q + 0x74);
    func_02035e10(q + 0xd4);

    b = (Obj *)(self + 0x18c);
    func_02053234(b);
    b->p = 0;
    c = (uint32_t *)(self + 0x1a8);
    b->flag = 0;
    W(0x1a8) = 0;
    c[1] = 0;
    c[2] = 0;
    W(0x1bc) = 0;
    W(0x1c0) = 0;

    tp = tmp;
    func_02005988(tp, data_020af23c);
    b = &local;
    func_02018c48(b, tp);
    func_020532a4(self + 0x18c, b);

    if (&b->p != &((Obj *)(self + 0x18c))->p) {
        if (W(0x190)) {
            if (B(0x198)) {
                func_02052d3c((void *)W(0x190), W(0x194));
            }
            func_02052c04((void *)W(0x190));
        }
        void *v = b->p;
        W(0x190) = (uint32_t)v;
        W(0x194) = b->w;
        B(0x198) = b->flag;
        if (v) {
            func_02052be0();
            if (B(0x198)) {
                func_02052d10((void *)W(0x190), W(0x194));
            }
        }
    }

    d = &local;
    if (d->p) {
        if (d->flag) {
            func_02052d3c(d->p, d->w);
        }
        func_02052c04(d->p);
    }
    func_02053290(d);
    func_020059cc(tmp);

    *(P *)(self + 0x80) = *(P *)data_020af250;
    return self;
}
