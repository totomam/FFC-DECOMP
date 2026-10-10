#include "ffc/types.h"

extern char data_020b10c4[];
extern void func_0205f654(void *self, uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    void *vtbl;
    uint32_t w4;
    uint32_t w8;
    uint32_t flags;
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
    uint8_t b3c;
    uint8_t pad3d[3];
    uint32_t w40;
    uint32_t w44;
    uint32_t w48;
    uint32_t w4c;
} Obj;

void *func_0205f60c(void *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a5)
{
    Obj *o = (Obj *)p;
    o->flags &= ~0xffu;
    o->vtbl = data_020b10c4;
    o->w14 = a1;
    o->w18 = a2;
    if (a3 == 0) {
        a3 = a2;
    }
    o->b3c = 0;
    o->w48 = 0x100;
    o->w4c = 0xc0;
    o->w20 = 0;
    o->w34 = 0;
    o->w38 = 0;
    o->w40 = 0;
    o->w44 = 0;
    o->w1c = a3;
    func_0205f654(o, a5, a2, a3);
    return o;
}
