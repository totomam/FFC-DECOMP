#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void *func_02060e9c(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02060f1c(void *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5);
extern char data_020b0b68[];
extern char data_020b0b7c[];
extern char data_020b13cc[];

typedef struct Obj {
    void *vt;
    uint32_t w04;
    uint32_t w08;
    uint32_t w0c;
    uint8_t b10;
    uint8_t b11;
    uint8_t b12;
    uint8_t pad13;
    uint32_t w14;
    void *p18;
    uint8_t sub1c[0x18];
} Obj;

typedef struct Obj2 {
    void *vt;
    uint32_t w04;
    uint32_t w08;
    uint32_t w0c;
    uint32_t w10;
    void *p14;
    void *p18;
    uint8_t b1c;
} Obj2;

void *func_020611bc(void *p, uint32_t a, uint32_t b, uint32_t c)
{
    Obj *o;
    Obj2 *q;
    void *r;

    o = (Obj *)func_0205681c(0x34);
    if (o != 0) {
        o->w0c &= ~0xffu;
        o->vt = data_020b0b68;
        func_02087620(o->sub1c);
        o->b10 = (uint8_t)(o->b10 & ~0xffu);
        o->b11 = (uint8_t)(o->b11 & ~0xffu);
        o->b12 = (uint8_t)(o->b12 & ~0xffu);
        o->w14 = 0;
        o->p18 = &o->w14;
        o->vt = data_020b0b7c;
        o->b11 = (uint8_t)(o->b11 & ~0xffu);
    }
    o->b11 = (o->b11 & ~0xffu) | 1;

    q = (Obj2 *)func_0205681c(0x20);
    if (q != 0) {
        r = func_02060e9c(p);
        q->w0c &= ~0xffu;
        q->vt = data_020b13cc;
        q->p14 = p;
        q->p18 = r;
        q->b1c = 1;
    }
    func_02056bc0(o, q);

    r = func_02060f1c(p, 0x10, 0, a, b, c);
    func_02056bc0(o, r);
    return o;
}
