#include "ffc/types.h"

typedef struct {
    void *vt;
    uint32_t u4[2];
    uint32_t flags;
    uint32_t u10;
    uint32_t a14;
    uint16_t h18;
    uint16_t h1a;
    uint16_t h1c;
    uint16_t h1e;
    uint32_t w20;
    uint32_t w24;
    uint32_t w28;
    uint8_t b2c;
} Obj;

extern void *func_0205681c(uint32_t size);
extern char data_ov003_021795cc[];

void *func_ov003_02149478(uint32_t a, uint16_t b, uint16_t c, uint16_t d,
                          uint32_t e, uint16_t f, uint32_t g, uint32_t h, uint8_t i)
{
    Obj *o = (Obj *)func_0205681c(0x30);
    if (o != 0) {
        o->flags &= ~0xffu;
        o->vt = data_ov003_021795cc;
        o->a14 = a;
        o->h18 = b;
        o->h1a = c;
        o->h1c = d;
        o->h1e = f;
        o->w20 = e;
        o->w24 = h;
        o->w28 = g;
        o->b2c = i;
    }
    return o;
}
