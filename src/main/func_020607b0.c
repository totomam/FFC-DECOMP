#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern uint32_t func_02060598(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_020605c0(void *a, uint32_t b);
extern uint32_t func_020605e8(void *a, uint32_t b);
extern void *func_02060684(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern uint32_t data_020b0b68;
extern uint32_t data_020b0b7c;

typedef struct Obj {
    uint32_t vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint8_t b10;
    uint8_t b11;
    uint8_t b12;
    uint8_t pad13;
    uint32_t w14;
    uint32_t p18;
    uint32_t w1c;
} Obj;

void *func_020607b0(void *p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4)
{
    Obj *o;
    uint32_t r;
    uint32_t t;

    o = (Obj *)func_0205681c(0x34);
    if (o != 0) {
        t = o->wc;
        t &= ~0xffu;
        o->wc = t;
        o->vt = (uint32_t)&data_020b0b68;
        func_02087620((uint8_t *)o + 0x1c);
        t = *(volatile uint8_t *)&o->b10;
        t &= ~0xffu;
        *(volatile uint8_t *)&o->b10 = (uint8_t)t;
        t = *(volatile uint8_t *)&o->b11;
        t &= ~0xffu;
        *(volatile uint8_t *)&o->b11 = (uint8_t)t;
        t = *(volatile uint8_t *)&o->b12;
        t &= ~0xffu;
        *(volatile uint8_t *)&o->b12 = (uint8_t)t;
        o->w14 = 0;
        o->p18 = (uint32_t)&o->w14;
        o->vt = (uint32_t)&data_020b0b7c;
        t = *(volatile uint8_t *)&o->b11;
        t &= ~0xffu;
        *(volatile uint8_t *)&o->b11 = (uint8_t)t;
    }
    t = o->b11;
    t &= ~0xffu;
    t |= 1;
    o->b11 = (uint8_t)t;

    r = func_02060598(p0, 1);
    func_02056bc0(o, (void *)r);
    r = func_020605c0(p0, p1);
    func_02056bc0(o, (void *)r);
    r = func_020605e8(p0, 0x3f ^ p1);
    func_02056bc0(o, (void *)r);
    r = (uint32_t)func_02060684(p0, 0x10, 0, 0, 0x10, p2, p3, p4);
    func_02056bc0(o, (void *)r);
    return o;
}
