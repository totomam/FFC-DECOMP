#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055110(void *a, void *b);
extern char data_020b0e04[];
extern void *data_0213e098;

typedef struct {
    uint32_t a, b, c, d;
} V4;

typedef struct {
    void *vt;
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
    uint16_t flags;
} Obj;

void func_0205a028(uint32_t *p, V4 v, uint32_t s1, uint32_t s2, uint8_t f3, uint8_t f4)
{
    Obj *o = (Obj *)func_0205681c(0x30);
    if (o) {
        V4 t = v;
        o->wc = o->wc & 0xffffff00;
        o->vt = data_020b0e04;
        o->w14 = p[1];
        o->w18 = t.a;
        o->w1c = t.b;
        o->w20 = t.c;
        o->w24 = t.d;
        o->w28 = p[9];
        o->flags = (uint16_t)((f3 ? 0x400 : 0) | ((s2 << 12) | s1) | (f4 ? 0x800 : 0));
    }
    func_02055110(data_0213e098, o);
}
