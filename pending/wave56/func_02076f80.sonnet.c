/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" uint32_t func_0207587c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);
extern "C" uint32_t func_020757e0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern "C" void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a, b; } P;
extern "C" P data_020b28d4;

typedef struct { uint32_t pad[0x88/4]; uint32_t f88; uint32_t f8c; } Inner;
typedef struct { uint32_t flag:1; uint32_t rest:31; } W;
typedef struct { uint8_t flag:1; uint8_t len:7; } B;
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual uint32_t v4();
    uint32_t pad[0x7c/4];
    Inner *f80;
    uint32_t f84, f88, f8c, f90, f94;
    uint32_t f98;
    union { W w; B b; uint8_t sbuf[4]; } f9c;
    uint32_t fa0, fa4, fa8, fac, fb0;
    void *fb4, *fb8;
    uint32_t fbc;
};

extern "C" void func_02076f80(Obj *self)
{
    uint32_t r;
    if (self->f98 == 3) {
        r = func_0207587c(self->f80->f88, self->f84, 0, 0, 0, 0, 0, 0, self->fb0);
    } else {
        int sh = !self->f9c.w.flag;
        uint32_t len = sh ? self->f9c.b.len : self->fa0;
        uint32_t s;
        if (len == 0) s = 0;
        else if (sh) s = (uint32_t)((uint8_t *)&self->f9c + 1);
        else s = self->fa4;
        r = func_020757e0(self->f80->f88, self->f84, s, self->fa8, self->fac, self->fb0);
    }
    func_02056bc0(self->fb4, (void *)r);
    self->fbc = self->v4();
    func_02056bc0(self->fb8, (void *)self->fbc);
    P *d = &data_020b28d4;
    uint32_t y = d->b;
    uint32_t x = d->a;
    self->f88 = x;
    self->f8c = y;
}
