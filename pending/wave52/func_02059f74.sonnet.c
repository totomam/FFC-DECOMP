#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055110(void *a, void *b);
extern void *data_0213e098;
extern uint8_t data_020b0e1c[];
extern uint8_t data_0209f530[];

typedef struct { uint32_t w0, w1, w2, w3; } Vec4;

typedef struct { uint32_t w[16]; uint16_t s0, s1; } Obj;
typedef struct {
    uint32_t a;
    uint32_t b;
    Vec4 c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint32_t g;
    uint8_t h; uint8_t pad[3];
    uint32_t pad2; uint8_t i;
} Params;

void func_02059f74(uint32_t *p, Params P) {
    volatile uint32_t k0,k1,k2,k3;
    Obj *o = func_0205681c(0x44);
    if (o != 0) {
        Vec4 v;
        uint32_t hi;
        uint32_t lo;
        v = P.c;
        o->w[6] = P.a;
        o->w[7] = P.b;
        o->w[3] &= ~0xffu;
        o->w[0] = (uint32_t)data_020b0e1c;
        o->w[5] = (uint32_t)data_0209f530;
        o->w[8] = v.w0;
        o->w[9] = v.w1;
        o->w[10] = v.w2;
        o->w[11] = v.w3;
        o->w[12] = p[1];
        o->w[13] = p[9];
        o->w[14] = P.d;
        o->w[15] = P.e;
        k0 = P.a;
        k1 = P.b;
        k2 = P.d;
        k3 = P.e;
        
        o->s0 = (uint16_t)((P.g << 12) | P.f);
        if (P.i) {
            hi = 0x800;
        } else { hi = 0; }
        if (P.h) {
            lo = 0x400;
        } else { lo = 0; }
        o->s1 = (uint16_t)(hi | lo);
    }
    func_02055110(data_0213e098, o);
}
