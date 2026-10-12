#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055110(uint32_t arg);
extern char data_020b0e1c[];
extern uint32_t data_0213e098;

typedef struct {
    uint32_t vt;
    uint32_t w04;
    uint32_t w08;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
    uint32_t w18;
    uint32_t w1c;
    uint32_t w20;
    uint32_t w24;
    uint32_t w28;
    uint32_t w2c;
    uint32_t w30;
    uint32_t w34;
    uint32_t w38;
    uint32_t w3c;
    uint16_t h40;
    uint16_t h42;
} Obj;

typedef struct { uint32_t a, b; } V;
void func_02059ecc(uint32_t *p, uint32_t x, V s, V t, V u2, uint8_t g, uint8_t h)
{
    volatile uint32_t L[11];
    Obj *o;
    uint32_t u;
    uint32_t v;

    L[0] = x;
    o = (Obj *)func_0205681c(0x44);
    if (o != 0) {
        o->wc = o->wc & ~0xff;
        o->vt = (uint32_t)data_020b0e1c;
        o->w14 = L[0];
        o->w18 = s.a;
        o->w1c = s.b;
        o->w20 = 0;
        o->w24 = 0;
        o->w28 = s.a;
        L[2] = s.b;
        L[6] = s.b;
        o->w2c = s.b;
        o->w30 = p[1];
        L[1] = s.a;
        o->w34 = p[9];
        L[5] = s.a;
        o->w38 = t.a;
        o->h40 = (uint16_t)((u2.b << 12) | u2.a);
        o->w3c = t.b;
        L[3] = t.a;
        L[4] = t.b;
        L[9] = 0; L[10] = 0; L[7] = 0; L[8] = 0;
        u = 0;
        if (h != 0) u = 0x800;
        v = 0;
        if (g != 0) v = 0x400;
        o->h42 = (uint16_t)(u | v);
    }
    func_02055110(data_0213e098);
}
