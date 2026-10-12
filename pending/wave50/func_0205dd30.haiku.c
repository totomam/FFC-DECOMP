#include "ffc/types.h"

typedef struct Blk {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint8_t b0c;
    uint32_t w10;
    uint32_t w14;
    uint8_t b18;
    uint32_t w1c;
    uint32_t w20;
    uint8_t b24;
    uint32_t w28;
    uint32_t w2c;
    uint8_t b30;
    uint32_t w34;
} Blk;

typedef struct Obj {
    void *vt;
    uint32_t pad1[6];
    uint32_t w1c;
    uint32_t pad2[5];
    Blk inner;
} Obj;

extern uint8_t data_020b0fd8[];
extern uint32_t data_0213df20;

typedef struct Pair { uint32_t a; uint32_t b; } Pair;
extern void func_02062930(void *p, Pair v);
extern void *func_0205327c(void *destination, const void *source);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_0205df08(void *p, uint32_t a, uint32_t b, uint8_t c);

Obj *func_0205dd30(Obj *p, const Blk *s, uint32_t a, uint32_t b, uint8_t c)
{
    Blk *in;
    struct { uint32_t x; Pair q; } L;

    L.x = b;
    L.q.a = 5;
    L.q.b = 5;
    func_02062930(p, L.q);
    p->vt = data_020b0fd8;
    in = &p->inner;
    func_0205327c(in, s);

    in->w4 = s->w4;
    in->w8 = s->w8;
    in->b0c = s->b0c;
    if (in->w4 != 0) {
        func_02052be0();
        if (in->b0c != 0) {
            func_02052d10(in->w4, in->w8);
        }
    }

    in->w14 = s->w14;
    in->w10 = s->w10;
    in->b18 = s->b18;
    if (in->w10 != 0) {
        func_02052be0();
        if (in->b18 != 0) {
            func_02052d10(in->w10, in->w14);
        }
    }

    in->w20 = s->w20;
    in->w1c = s->w1c;
    in->b24 = s->b24;
    if (in->w1c != 0) {
        func_02052be0();
        if (in->b24 != 0) {
            func_02052d10(in->w1c, in->w20);
        }
    }

    in->w2c = s->w2c;
    in->w28 = s->w28;
    in->b30 = s->b30;
    if (in->w28 != 0) {
        func_02052be0();
        if (in->b30 != 0) {
            func_02052d10(in->w28, in->w2c);
        }
    }

    in->w34 = s->w34;
    p->w1c = data_0213df20;
    func_0205df08(p, a, L.x, c);
    return p;
}
