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
extern void func_02052be0(uint32_t a);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_0205df08(void *p, uint32_t a, uint32_t b, uint8_t c);

typedef struct E { uint32_t a; uint32_t b; uint8_t c; } E;
static inline void cp(E *d, const E *r) {
    d->a = r->a; d->b = r->b; d->c = r->c;
    if (d->a != 0) {
        func_02052be0(d->a);
        if (d->c != 0) func_02052d10(d->a, d->b);
    }
}
Obj *func_0205dd30(Obj *p, const Blk *s, uint32_t a, uint32_t b, uint8_t c)
{
    Blk *in;
    struct { uint32_t x; Pair q; } L;
    L.x = b; L.q.a = 5; L.q.b = 5;
    func_02062930(p, L.q);
    p->vt = data_020b0fd8;
    in = &p->inner;
    func_0205327c(in, s);
    cp((E*)&in->w4, (const E*)&s->w4);
    cp((E*)&in->w10, (const E*)&s->w10);
    cp((E*)&in->w1c, (const E*)&s->w1c);
    cp((E*)&in->w28, (const E*)&s->w28);
    in->w34 = s->w34;
    p->w1c = data_0213df20;
    func_0205df08(p, a, L.x, c);
    return p;
}
