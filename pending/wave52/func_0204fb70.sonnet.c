#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_0204fb64(void *a, uint32_t b, void *c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j, uint32_t k, uint32_t l, uint32_t m, uint32_t n);
extern uint32_t func_02055110(uint32_t x, void *y);
extern char data_020b040c[];
extern uint32_t data_0213e098;

typedef struct {
    void *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
    uint32_t f3c;
    uint16_t f40;
    uint16_t f42;
} Obj;

typedef struct {
    uint32_t p2, p3, a, b; volatile uint32_t c, d;
    uint8_t f1; uint8_t pad1[3];
    uint8_t f2; uint8_t pad2[3];
} S;

uint32_t func_0204fb70(uint32_t *p0, uint32_t p1, S s) {
    Obj *o = (Obj *)func_0205681c(0x44);
    if (o != 0) {
        uint32_t hi;
        uint32_t lo;
        o->fc &= ~0xffu;
        o->vt = data_020b040c;
        o->f14 = p1;
        o->f18 = s.p2;
        o->f1c = s.p3;
        o->f20 = 0;
        o->f24 = 0;
        o->f28 = s.p2;
        o->f2c = s.p3;
        o->f30 = p0[1];
        o->f34 = func_0204fb64(p0, s.p2, data_020b040c, o->fc, s.p2, s.p3, s.a, s.b, s.p2, s.p3, 0, 0, 0, 0);
        o->f38 = s.a;
        o->f3c = s.b;
        o->f40 = (uint16_t)((s.d << 12) | s.c);
        hi = 0;
        if (s.f2) {
            hi = 0x800;
        }
        if (s.f1) {
            lo = 0x400;
        } else {
            lo = 0;
        }
        o->f42 = (uint16_t)(lo | hi);
    }
    return func_02055110(data_0213e098, o);
}
