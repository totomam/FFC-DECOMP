#include "ffc/types.h"

typedef struct Obj {
    uint32_t vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t flags;
    uint8_t b[3];
    uint8_t pad13;
    uint32_t w14;
    uint32_t *p18;
    uint32_t sub;
} Obj;

typedef struct { uint32_t a, b; } P2;
extern void func_02056c9c(void *obj, uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void func_02056bc0(void *object, void *node);
extern char data_020b2728[];
extern char data_020b0b68[];
extern char data_020b0b54[];
extern uint32_t data_020b28dc[];

void *func_020771d8(uint8_t *self, uint32_t a1, uint32_t a2, uint32_t a3,
                    uint32_t a4, uint32_t a5, uint32_t a6)
{
    Obj *o;
    int32_t *p;

    func_02056c9c(self, 0);
    *(uint32_t *)self = (uint32_t)data_020b2728;
    *(uint32_t *)(self + 0x80) = a1;
    *(uint32_t *)(self + 0x84) = 2;
    *(uint32_t *)(self + 0x90) = a2;
    *(uint32_t *)(self + 0x94) = a3;
    *(uint32_t *)(self + 0x98) = a4;
    *(uint32_t *)(self + 0x9c) = a5;
    *(uint32_t *)(self + 0xa0) = a6;

    o = (Obj *)func_0205681c(0x34);
    if (o != 0) {
        o->flags &= ~0xffu;
        o->vt = (uint32_t)data_020b0b68;
        func_02087620(&o->sub);
        { int t = o->b[0]; t &= ~0xff; o->b[0] = (uint8_t)t; }
        { int t = o->b[1]; t &= ~0xff; o->b[1] = (uint8_t)t; }
        { int t = o->b[2]; t &= ~0xff; o->b[2] = (uint8_t)t; }
        o->w14 = 0;
        o->p18 = &o->w14;
        o->vt = (uint32_t)data_020b0b54;
        { int t = o->b[1]; t &= ~0xff; o->b[1] = (uint8_t)t; }
    }
    *(Obj **)(self + 0xa4) = o;
    func_02056bc0(self + 0x48, o);

    o = (Obj *)func_0205681c(0x34);
    if (o != 0) {
        o->flags &= ~0xffu;
        o->vt = (uint32_t)data_020b0b68;
        func_02087620(&o->sub);
        { int t = o->b[0]; t &= ~0xff; o->b[0] = (uint8_t)t; }
        { int t = o->b[1]; t &= ~0xff; o->b[1] = (uint8_t)t; }
        { int t = o->b[2]; t &= ~0xff; o->b[2] = (uint8_t)t; }
        o->w14 = 0;
        o->p18 = &o->w14;
        o->vt = (uint32_t)data_020b0b54;
        { int t = o->b[1]; t &= ~0xff; o->b[1] = (uint8_t)t; }
    }
    *(Obj **)(self + 0xa8) = o;
    func_02056bc0(self + 0x48, o);

    p = *(int32_t **)(self + 0x9c);
    if (p != 0) {
        *p = -1;
    }
    *(P2 *)(self + 0x88) = *(P2 *)data_020b28dc;
    return self;
}
