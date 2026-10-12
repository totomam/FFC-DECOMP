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

void func_02059ecc(uint32_t *p, uint32_t x, ...)
{
    uint32_t *w = &x;
    uint32_t L[11];
    Obj *o;
    uint32_t a;
    uint32_t b;

    L[0] = x;
    o = (Obj *)func_0205681c(0x44);
    if (o != 0) {
        L[1] = w[1];
        L[2] = w[2];
        L[3] = w[3];
        L[4] = w[4];
        L[5] = w[1];
        L[6] = w[2];
        L[7] = 0;
        L[8] = 0;
        L[9] = 0;
        L[10] = 0;
        o->wc = o->wc & ~0xff;
        o->vt = (uint32_t)data_020b0e1c;
        o->w14 = L[0];
        o->w18 = L[1];
        o->w1c = L[2];
        o->w20 = L[7];
        o->w24 = L[8];
        o->w28 = L[5];
        o->w2c = L[6];
        o->w30 = p[1];
        o->w34 = p[9];
        o->w38 = L[3];
        o->w3c = L[4];
        o->h40 = (uint16_t)((w[6] << 12) | w[5]);
        a = 0;
        if (((uint8_t *)w)[0x20] != 0) {
            a = 0x800;
        }
        b = 0;
        if (((uint8_t *)w)[0x1c] != 0) {
            b = 0x400;
        }
        o->h42 = (uint16_t)(a | b);
    }
    func_02055110(data_0213e098);
}
