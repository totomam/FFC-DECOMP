#include "ffc/types.h"

extern uint8_t data_ov003_021797e4[];

typedef struct {
    void *vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t flags;
    uint32_t w10;
    uint32_t w14;
    uint16_t h18;
    uint16_t h1a;
    uint16_t h1c;
    uint16_t h1e;
    uint32_t w20;
    uint32_t w24;
} FfcObj;

void func_ov003_021494c0(FfcObj *p, uint32_t a, uint16_t b, uint16_t c,
                         uint32_t d, uint16_t e, uint16_t f, uint32_t g)
{
    uint32_t fl = p->flags & ~0xffu;
    p->vt = data_ov003_021797e4;
    p->w14 = a;
    p->flags = fl;
    p->h1a = c;
    p->h18 = b;
    p->h1c = e;
    p->h1e = f;
    p->w20 = d;
    p->w24 = g;
}
