#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    void *p;
    uint32_t w;
    uint8_t flag;
} Obj;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Tmp;

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

void *func_0203f518(void *a0, uint32_t a1)
{
    uint8_t *self = (uint8_t *)a0;
    Obj local;
    Tmp tmp;
    uint32_t idx;
    uint8_t *q;
    Obj *b;
    Tmp *c;

    func_02056c9c(self, func_0204f7ec(data_0213df18));
    *(void **)self = data_020af1c8;
    *(uint32_t *)(self + 0x88) = a1;
    q = self + 0x90;
    func_02035f58(q + 0x14);
    func_02035f58(q + 0x74);
    func_02035e10(q + 0xd4);

    idx = 0x63;
    idx <<= 2;
    b = (Obj *)(self + idx);
    func_02053234(b);
    b->p = 0;
    c = (Tmp *)(self + idx + 0x1c);
    b->flag = 0;
    c->a = 0;
    c->b = 0;
    c->c = 0;
    *(uint32_t *)(self + idx + 0x30) = 0;
    *(uint32_t *)(self + idx + 0x34) = 0;

    func_02005988(&tmp, data_020af23c);
    func_02018c48(&local, &tmp);
    func_020532a4(self + idx, &local);

    b = (Obj *)(self + idx);
    if (b->p) {
        if (b->flag) {
            func_02052d3c(b->p, b->w);
        }
        func_02052c04(b->p);
    }

    b->p = local.p;
    b->w = local.w;
    b->flag = local.flag;
    if (local.p) {
        func_02052be0();
        if (b->flag) {
            func_02052d10(b->p, b->w);
        }
    }

    if (local.p) {
        if (local.flag) {
            func_02052d3c(local.p, local.w);
        }
        func_02052c04(local.p);
    }
    func_02053290(&local);
    func_020059cc(&tmp);

    *(uint32_t *)(self + 0x80) = data_020af250[0];
    *(uint32_t *)(self + 0x84) = data_020af250[1];
    return self;
}
