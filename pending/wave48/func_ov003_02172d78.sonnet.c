#include "ffc/types.h"

typedef struct Pair {
    uint32_t x0;
    void *a;
    void *b;
    uint8_t flag;
} Pair;

typedef struct Obj {
    void *vt;
    uint8_t pad0[0x80 - 4];
    uint32_t r80;
    uint32_t r84;
    void *p88;
    void *p8c;
    uint32_t f90;
    uint32_t f94;
    uint32_t f98;
    uint32_t f9c;
    uint32_t fa0;
    uint32_t fa4;
    uint32_t fa8;
    Pair m;
} Obj;

extern void func_02056c9c(void *self, int z);
extern void func_02053234(void *object);
extern void func_020178fc(void *out, void *src);
extern void func_020532a4(void *obj, void *src);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02052be0(void);
extern void func_02052d10(void *a, void *b);
extern void *func_02053290(void *object);
extern char data_ov003_0217b7b0[];
extern void *data_020b8e44;
extern uint32_t data_ov003_0217b7c0[];

void *func_ov003_02172d78(void *self, void *p1, void *p2) {
    Pair local;
    Obj *o = (Obj *)self;
    Pair *m;
    uint32_t zero = 0;
    Pair *l;

    func_02056c9c(self, zero);
    o->vt = (void *)data_ov003_0217b7b0;
    o->p88 = p1;
    o->p8c = p2;
    o->f90 = zero;
    o->f94 = zero;
    o->f98 = zero;
    o->f9c = zero;
    o->fa0 = zero;
    o->fa4 = zero;
    o->fa8 = zero;
    m = &o->m;
    func_02053234(m);
    m->a = (void *)zero;
    m->flag = (uint8_t)zero;
    l = &local;
    func_020178fc(l, data_020b8e44);
    func_020532a4(&o->m, l);
    if ((char *)&local.a != (char *)&o->m + 4) {
        if (o->m.a != 0) {
            if (o->m.flag) {
                func_02052d3c(o->m.a, o->m.b);
            }
            func_02052c04(o->m.a);
        }
        o->m.a = local.a;
        o->m.b = local.b;
        o->m.flag = local.flag;
        if (o->m.a != 0) {
            func_02052be0();
            if (o->m.flag) {
                func_02052d10(o->m.a, o->m.b);
            }
        }
    }
    l = &local;
    if (l->a != 0) {
        if (l->flag) {
            func_02052d3c(l->a, l->b);
        }
        func_02052c04(l->a);
    }
    func_02053290(l);
    {
        uint32_t t1 = data_ov003_0217b7c0[1];
        uint32_t t0 = data_ov003_0217b7c0[0];
        o->r80 = t0;
        o->r84 = t1;
    }
    return self;
}
