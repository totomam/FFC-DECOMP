#include "ffc/types.h"

extern uint8_t data_ov002_021d7474[];
extern uint32_t data_020b8e44;

extern void func_02053234(void *object);
extern void func_02019b9c(void *out, uint32_t a, uint32_t n);
extern void func_020532a4(void *dst, void *src);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02052be0(void);
extern void func_02052d10(void *a, void *b);
extern void *func_02053290(void *object);

typedef struct Pair {
    void *ptr;
    void *ptr2;
    uint8_t flag;
} Pair;

typedef struct Sub {
    uint32_t w0;
    Pair p;
} Sub;

typedef struct Obj {
    void *vt;
    uint32_t arg;
    uint32_t zero;
    uint8_t fa;
    uint8_t fb;
    uint8_t pad[2];
    Sub sub;
} Obj;

Obj *func_ov002_021c59b4(Obj *self, uint32_t arg)
{
    Sub local;
    uint32_t z;

    {
        Sub *p;
        z = 0;
        self->vt = data_ov002_021d7474;
        p = &self->sub;
        self->arg = arg;
        self->zero = 0;
        func_02053234(p);
        p->p.ptr = (void *)z;
        p->p.flag = (uint8_t)z;
    }

    if (arg != 0) {
        func_02019b9c(&local, data_020b8e44, arg);
        func_020532a4(&self->sub, &local);

        if (&local.p != &((Sub *)((uint8_t *)self + 0x10))->p) {
            if (self->sub.p.ptr != 0) {
                if (self->sub.p.flag != 0) {
                    func_02052d3c(self->sub.p.ptr, self->sub.p.ptr2);
                }
                func_02052c04(self->sub.p.ptr);
            }
            void *t = local.p.ptr;
            self->sub.p.ptr = t;
            self->sub.p.ptr2 = local.p.ptr2;
            self->sub.p.flag = local.p.flag;
            if (t != 0) {
                func_02052be0();
                if (self->sub.p.flag != 0) {
                    func_02052d10(self->sub.p.ptr, self->sub.p.ptr2);
                }
            }
        }

        Sub *lp = &local;
        if (local.p.ptr != 0) {
            if (lp->p.flag != 0) {
                func_02052d3c(lp->p.ptr, lp->p.ptr2);
            }
            func_02052c04(lp->p.ptr);
        }
        func_02053290(lp);

        self->fa = 0;
        self->fb = 1;
    } else {
        self->fa = 1;
        self->fb = (uint8_t)z;
    }
    return self;
}
