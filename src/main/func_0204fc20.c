#include "ffc/types.h"

typedef struct { uint32_t w0, w1, w2, w3; } S;

typedef struct {
    void *vt;
    uint32_t p4;
    uint32_t p8;
    uint32_t flags;
    uint32_t p10;
    uint32_t p14;
    uint32_t p18;
    uint32_t p1c;
    uint32_t p20;
    uint32_t p24;
    uint32_t p28;
    uint16_t h2c;
} Obj;

extern void *func_0205681c(uint32_t size);
extern uint32_t func_0204fb64(void *p);
extern void func_02055110(void *a, void *b);
extern char data_020b03f4[];
extern void *data_0213e098;

void func_0204fc20(void *p, S s, uint32_t x, uint32_t y, uint8_t f1, uint8_t f2)
{
    Obj *o = (Obj *)func_0205681c(0x30);
    if (o) {
        S t;
        t = s;
        o->flags &= ~0xff;
        o->vt = data_020b03f4;
        o->p14 = ((uint32_t *)p)[1];
        o->p18 = t.w0;
        o->p1c = t.w1;
        o->p20 = t.w2;
        o->p24 = t.w3;
        o->p28 = func_0204fb64(p);
        {
            uint32_t a = f1 ? 0x400 : 0;
            uint32_t b = f2 ? 0x800 : 0;
            o->h2c = (uint16_t)(a | ((y << 12) | x) | b);
        }
    }
    func_02055110(data_0213e098, o);
}
