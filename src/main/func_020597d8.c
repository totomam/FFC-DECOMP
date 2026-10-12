/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02059c0c(void *p);
extern "C" void func_02058048(void *p, uint32_t a, uint32_t b);
extern "C" void func_02087678(void *p);

struct O { virtual void f0(); virtual void f1(); uint32_t x; };
typedef struct O O;
typedef struct In { uint32_t a[4]; uint32_t base; volatile uint32_t cnt; } In;
typedef struct S { uint32_t a[2]; In *in; uint32_t b; uint32_t c; O *slots[1]; } S;

extern "C" void func_020597d8(S *self, O *obj);
extern "C" void func_020597d8(S *self, O *obj)
{
    struct { uint32_t v; volatile uint8_t f; } g;
    uint32_t i;
    In *inner;
    uint32_t zero;
    uint32_t *base;

    g.v = self->c + 0x20;
    g.f = 1;
    if (g.f != 0) {
        func_0208763c((void *)g.v);
    }

    inner = self->in; (void)0;
    i = 0;
    for (; i < self->in->cnt; i++) {
        if (self->slots[self->in->base + i] == obj) break;
    }

    func_02059c0c(obj);
    zero = 0;
    func_02058048((void *)self->c, obj->x, 0);
    self->slots[i + self->in->base] = (O *)zero;

    if (obj != 0) {
        obj->f1();
    }

    if (g.f != 0) {
        func_02087678((void *)g.v);
    }
}
