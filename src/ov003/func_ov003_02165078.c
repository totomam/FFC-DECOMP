#include "ffc/types.h"

extern uint8_t data_ov003_0217afd4[];

typedef struct {
    void *vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
    uint8_t b18;
    uint8_t b19;
    uint16_t h1a;
    uint16_t h1c;
    uint32_t w20;
    uint32_t w24;
    uint32_t w28;
    uint32_t w2c;
    uint32_t w30;
    uint32_t w34;
    uint32_t w38;
} Obj;

void func_ov003_02165078(Obj *p, uint32_t a, uint16_t b, uint32_t c,
                         uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                         uint32_t s4, uint16_t s5, uint32_t s6, uint8_t s7,
                         uint8_t s8)
{
    p->wc &= ~0xffu;
    p->vt = data_ov003_0217afd4;
    p->w14 = a;
    p->b18 = s7;
    p->b19 = s8;
    p->h1a = b;
    p->h1c = s5;
    p->w20 = s6;
    p->w24 = c;
    p->w28 = s0;
    p->w2c = s1;
    p->w30 = s2;
    p->w34 = s3;
    p->w38 = s4;
}
