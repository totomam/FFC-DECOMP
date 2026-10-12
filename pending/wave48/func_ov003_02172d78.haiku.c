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

void func_ov003_02172d78(void *self, void *p1, void *p2) {
    Pair local;
    Obj *o = (Obj *)self;
    Pair *m;
    uint32_t zero = 0;

    func_02056c9c(self, 0);
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
    func_020178fc(&local, data_020b8e44);
    func_020532a4(m, &local);
    if (&local.a != &m->a) {
        if (m->a != 0) {
            if (m->flag) {
                func_02052d3c(m->a, m->b);
            }
            func_02052c04(m->a);
        }
        m->a = local.a;
        m->b = local.b;
        m->flag = local.flag;
        if (m->a != 0) {
            func_02052be0();
            if (m->flag) {
                func_02052d10(m->a, m->b);
            }
        }
    }
    if (local.a != 0) {
        if (local.flag) {
            func_02052d3c(local.a, local.b);
        }
        func_02052c04(local.a);
    }
    func_02053290(&local);
    o->r80 = data_ov003_0217b7c0[0];
    o->r84 = data_ov003_0217b7c0[1];
}
