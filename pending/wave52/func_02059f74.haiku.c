#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055110(void *a, void *b);
extern void *data_0213e098;
extern uint8_t data_020b0e1c[];
extern uint8_t data_0209f530[];

typedef struct { uint32_t w0, w1, w2, w3; } Vec4;

typedef struct {
    uint32_t a;
    uint32_t b;
    Vec4 c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint32_t g;
    uint8_t h;
    uint8_t i;
} Params;

void func_02059f74(uint32_t *p, Params P) {
    uint32_t *o = func_0205681c(0x44);
    if (o != 0) {
        volatile Vec4 k;
        Vec4 v;
        uint16_t *q;
        uint32_t hi = 0;
        uint32_t lo = 0;
        v = P.c;
        o[3] &= ~0xffu;
        o[0] = (uint32_t)data_020b0e1c;
        o[5] = (uint32_t)data_0209f530;
        o[6] = P.a;
        o[7] = P.b;
        o[8] = v.w0;
        o[9] = v.w1;
        o[10] = v.w2;
        o[11] = v.w3;
        o[12] = p[1];
        o[13] = p[9];
        o[14] = P.d;
        o[15] = P.e;
        k.w0 = P.a;
        k.w1 = P.b;
        k.w2 = P.d;
        k.w3 = P.e;
        q = (uint16_t *)((uint8_t *)o + 0x40);
        q[0] = (uint16_t)((P.g << 12) | P.f);
        if (P.i) {
            hi = 0x800;
        }
        if (P.h) {
            lo = 0x400;
        }
        q[1] = (uint16_t)(hi | lo);
    }
    func_02055110(data_0213e098, o);
}
