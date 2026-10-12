#include "ffc/types.h"

struct Obj {
    void *vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint8_t b10;
    uint8_t b11;
    uint8_t b12;
    uint8_t b13;
    uint32_t w14;
    void *p18;
};

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void *func_020732e4(void *ctx, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8);
extern void func_02056bc0(void *object, void *node);
extern void *func_02075540(void *p, void *q);
extern uint32_t data_020b0b68;
extern uint32_t data_020b0b7c;

void *func_0207587c(void *a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8)
{
    struct Obj *o;
    void *r;
    void *m;
    uint32_t mask;

    o = func_0205681c(0x34);
    if (o) {
        mask = 0xff;
        o->wc &= ~mask;
        o->vt = (void *)&data_020b0b68;
        func_02087620((char *)o + 0x1c);
        o->b10 = o->b10 & ~mask;
        o->b11 = o->b11 & ~mask;
        o->b12 = o->b12 & ~mask;
        o->w14 = 0;
        o->p18 = (char *)o + 0x14;
        o->vt = (void *)&data_020b0b7c;
        o->b11 = (o->b11 & ~mask) | 1;
    }
    r = func_020732e4(*(void **)((char *)*(void **)((char *)a0 + 0x40) + 0x2c), a1, a2, a3, a4, a5, a6, a7, a8);
    func_02056bc0(o, r);
    m = func_0205681c(0x8c);
    r = m;
    if (m) {
        r = func_02075540(m, *(void **)((char *)a0 + 0x40));
    }
    func_02056bc0(o, r);
    return o;
}
