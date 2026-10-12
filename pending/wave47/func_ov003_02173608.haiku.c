#include "ffc/types.h"

typedef struct {
    void *a;
    void *b;
    uint8_t flag;
} Pay;

typedef struct {
    uint32_t hdr;
    Pay p;
} Sub;

typedef struct {
    uint32_t hdr;
    Pay p;
} Local;

typedef struct {
    void *vt;
    uint32_t pad4[31];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
    Sub sub;
    uint32_t f9c;
    uint32_t fa0;
    uint32_t fa4;
    uint32_t fa8;
} Obj;

extern void func_02056c9c(void *p, uint32_t v);
extern void func_02053234(void *object);
extern void func_02017208(void *out, uint32_t v);
extern void func_020532a4(void *dst, void *src);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02052be0(void *a);
extern void func_02052d10(void *a, void *b);
extern void *func_02053290(void *object);
extern char data_ov003_0217b8ec[];
extern uint32_t data_020b8e44;
extern uint32_t data_ov003_0217b914[];

Obj *func_ov003_02173608(Obj *self, uint32_t arg)
{
    Local tmp;
    Sub *s;
    void *ta;
    Local *t;

    func_02056c9c(self, 0);
    self->vt = data_ov003_0217b8ec;
    self->f88 = arg;
    s = &self->sub;
    func_02053234(&s->hdr);
    self->f9c = 0;
    self->fa0 = 0;
    self->fa4 = 0;
    s->p.a = 0;
    s->p.flag = 0;
    self->fa8 = 0;
    func_02017208(&tmp, data_020b8e44);
    func_020532a4(&self->sub, &tmp);
    if (&tmp.p != (Pay *)(&self->sub.hdr + 1)) {
        if (self->sub.p.a) {
            if (self->sub.p.flag) {
                func_02052d3c(self->sub.p.a, self->sub.p.b);
            }
            func_02052c04(self->sub.p.a);
        }
        ta = tmp.p.a;
        self->sub.p.a = ta;
        self->sub.p.b = tmp.p.b;
        self->sub.p.flag = tmp.p.flag;
        if (ta) {
            func_02052be0(ta);
            if (self->sub.p.flag) {
                func_02052d10(self->sub.p.a, self->sub.p.b);
            }
        }
    }
    t = &tmp;
    if (t->p.a) {
        if (t->p.flag) {
            func_02052d3c(t->p.a, t->p.b);
        }
        func_02052c04(t->p.a);
    }
    func_02053290(t);
    {
        uint32_t x = data_ov003_0217b914[0];
        uint32_t y = data_ov003_0217b914[1];
        self->f80 = x;
        self->f84 = y;
    }
    return self;
}
