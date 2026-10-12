#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

struct Sub {
    uint32_t p0;
    uint32_t a4;
    uint32_t a8;
    uint8_t f0c;
    uint32_t a10;
    uint32_t a14;
    uint8_t f18;
    uint32_t a1c;
    uint32_t a20;
    uint8_t f24;
    uint32_t a28;
    uint32_t a2c;
    uint8_t f30;
    uint32_t a34;
};

struct Obj {
    void *vt;
    uint8_t pad0[0x18];
    uint32_t f1c;
    uint8_t pad1[0x14];
    struct Sub sub;
};

extern uint8_t data_020b0fd8[];
extern void func_02062930(struct Obj *self, Pair p);
extern void func_0205327c(struct Sub *dst, struct Sub *src);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_0205df08(struct Obj *self, uint32_t d, uint8_t e, uint8_t f);

struct Obj *func_0205de20(struct Obj *self, uint32_t b, struct Sub *c, uint32_t d, uint8_t e, uint8_t f)
{
    Pair p;
    struct Sub *s;
    uint32_t v;
    uint32_t w;
    uint8_t fl;

    p.x = 5;
    p.y = 5;
    func_02062930(self, p);
    self->vt = data_020b0fd8;
    self->f1c = b;
    s = &self->sub;
    func_0205327c(s, c);

    v = c->a4;
    w = c->a8;
    s->a4 = v;
    s->a8 = w;
    fl = c->f0c;
    s->f0c = fl;
    if (v != 0) {
        func_02052be0();
        if (s->f0c != 0) {
            func_02052d10(s->a4, s->a8);
        }
    }

    w = c->a14;
    v = c->a10;
    s->a14 = w;
    fl = c->f18;
    s->a10 = v;
    s->f18 = fl;
    if (v != 0) {
        func_02052be0();
        if (s->f18 != 0) {
            func_02052d10(s->a10, s->a14);
        }
    }

    w = c->a20;
    v = c->a1c;
    s->a20 = w;
    fl = c->f24;
    s->a1c = v;
    s->f24 = fl;
    if (v != 0) {
        func_02052be0();
        if (s->f24 != 0) {
            func_02052d10(s->a1c, s->a20);
        }
    }

    w = c->a2c;
    v = c->a28;
    s->a2c = w;
    fl = c->f30;
    s->a28 = v;
    s->f30 = fl;
    if (v != 0) {
        func_02052be0();
        if (s->f30 != 0) {
            func_02052d10(s->a28, s->a2c);
        }
    }

    s->a34 = c->a34;
    func_0205df08(self, d, e, f);
    return self;
}
