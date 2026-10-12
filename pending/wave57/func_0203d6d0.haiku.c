#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} S3;

typedef struct {
    uint32_t a;
    void *p;
    uint32_t n;
    uint8_t f;
} Obj;

extern uint32_t func_0204f7ec(const void *object);
extern void func_02056c9c(void *self, uint32_t x);
extern void func_02053234(void *object);
extern void func_02005988(void *obj, const void *src);
extern void func_02018c48(void *dst, const void *src);
extern void func_020532a4(void *dst, const void *src);
extern void func_02052d3c(void *p, uint32_t n);
extern void func_02052c04(void *p);
extern void func_02052be0(void *p);
extern void func_02052d10(void *p, uint32_t n);
extern void *func_02053290(void *object);
extern void *func_020059cc(void *object);
extern uint32_t data_0213df18;
extern uint8_t data_020aee70[];
extern uint8_t data_020aeeb0[];
extern uint32_t data_020aeec0[];

void *func_0203d6d0(uint8_t *self, uint32_t a1, uint32_t a2, S3 s) {
    uint8_t tmp[12];
    Obj L;
    uint32_t keep1 = a1;
    uint32_t keep2 = a2;
    Obj *o;

    func_02056c9c(self, func_0204f7ec((const void *)data_0213df18));
    *(void **)self = (void *)data_020aee70;
    *(uint32_t *)(self + 0x88) = keep1;
    *(uint32_t *)(self + 0x8c) = s.x;
    *(uint32_t *)(self + 0x90) = s.y;
    *(uint32_t *)(self + 0x94) = keep2;

    o = (Obj *)(self + 0xc0);
    func_02053234(o);
    o->p = 0;
    o->f = 0;

    o = (Obj *)(self + 0xd0);
    func_02053234(o);
    *(uint32_t *)(self + 0xf0) = 0;
    o->p = 0;
    o->f = 0;
    *(uint32_t *)(self + 0xf4) = 0;

    func_02005988(tmp, data_020aeeb0);
    func_02018c48(&L, tmp);
    func_020532a4(self + 0xc0, &L);

    if ((void *)&L.p != (void *)&((Obj *)(self + 0xc0))->p) {
        if (((Obj *)(self + 0xc0))->p) {
            if (((Obj *)(self + 0xc0))->f) {
                func_02052d3c(((Obj *)(self + 0xc0))->p, ((Obj *)(self + 0xc0))->n);
            }
            func_02052c04(((Obj *)(self + 0xc0))->p);
        }
        ((Obj *)(self + 0xc0))->p = L.p;
        ((Obj *)(self + 0xc0))->n = L.n;
        ((Obj *)(self + 0xc0))->f = L.f;
        if (L.p) {
            func_02052be0(L.p);
            if (((Obj *)(self + 0xc0))->f) {
                func_02052d10(((Obj *)(self + 0xc0))->p, ((Obj *)(self + 0xc0))->n);
            }
        }
    }

    if (L.p) {
        if (L.f) {
            func_02052d3c(L.p, L.n);
        }
        func_02052c04(L.p);
    }
    func_02053290(&L);
    func_020059cc(tmp);

    *(uint32_t *)(self + 0x80) = data_020aeec0[0];
    *(uint32_t *)(self + 0x84) = data_020aeec0[1];
    return self;
}
