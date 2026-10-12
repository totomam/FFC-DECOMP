#include "ffc/types.h"

typedef struct Obj {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    int32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    void *f1c;
    uint32_t f20;
    uint32_t f24;
} Obj;

extern void *func_0204de70(void *p);
extern uint32_t func_0204de74(void *p);
extern uint32_t func_0204de78(void *p);
extern uint32_t func_0204de80(void *p);
extern uint32_t func_0204de7c(void *p);
extern void func_0204b394(uint32_t x);
extern void func_0204b7f4(uint32_t x);
extern void func_0204deb0(uint32_t x);
extern void func_0204de8c(void);
extern void *func_0204b07c(uint32_t size, uint32_t align);
extern void func_0204b0ac(void *o, uint32_t v);
extern void func_0204dec4(void);
extern int func_0204a8a4(uint32_t h, uint32_t c);
extern void func_0204b098(void *p);

int func_0204b0b8(void *p, uint32_t a, uint32_t b, uint32_t c)
{
    Obj *o;
    uint32_t h1, h2, h3, h4;
    void *q;

    o = (Obj *)func_0204de70(p);
    h1 = func_0204de74(p);
    h2 = func_0204de78(p);
    h3 = func_0204de80(p);
    h4 = func_0204de7c(p);
    o->f00 = a;
    o->f04 = b;
    o->f14 = 0;
    o->f10 = 0;
    o->f18 = 0;
    o->f24 = 0;
    func_0204b394(h1);
    func_0204b7f4(h2);
    func_0204deb0(h3);
    func_0204de8c();
    o->f0c = -1;
    q = func_0204b07c(0x2000, 8);
    o->f1c = q;
    if (q == 0) {
        func_0204b0ac(o, 1);
        func_0204dec4();
        return 0;
    }
    if (func_0204a8a4(h4, c) == 0) {
        func_0204b0ac(o, 9);
        func_0204b098(o->f1c);
        o->f1c = 0;
        func_0204dec4();
        return 0;
    }
    o->f08 = 1;
    return 1;
}
