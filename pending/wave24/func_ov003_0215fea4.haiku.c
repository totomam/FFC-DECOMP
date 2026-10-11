#include "ffc/types.h"

extern uint32_t data_020aadd0[];
extern uint32_t data_ov003_0217a368[];

typedef struct Inner {
    uint32_t w0;
    uint32_t w4;
    void *w8;
    uint8_t b12;
} Inner;

typedef struct Obj {
    void * volatile vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t w0c;
    uint32_t w10;
    Inner in;
    uint32_t w24;
    uint32_t w28;
} Obj;

void func_ov003_0215fea4(Obj *p, uint32_t a1, uint8_t a2)
{
    Inner *in = &p->in;
    uint32_t t = p->w0c;
    p->vt = data_020aadd0;
    p->w0c = t & ~0xffu;
    in->w0 = 0;
    in->w4 = 0;
    in->w8 = 0;
    in->b12 = 0;
    in->w8 = in ? (void *)((char *)in - 0x14) : (void *)in;
    p->w28 = a1;
    p->vt = data_ov003_0217a368;
    *(uint8_t *)((char *)p + 0x21) = a2;
    in->b12 = 1;
    p->w24 = 0;
    *(uint8_t *)((char *)p + 0x2c) = 1;
}
