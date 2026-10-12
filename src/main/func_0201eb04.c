#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
} Tmp;

extern uint32_t data_020b8e44;
extern void func_02016630(Tmp *t, uint32_t v);
extern void *func_02052d90(uint32_t a, uint32_t b);
extern void *func_0201ea2c(void *obj, void *p);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);

typedef struct {
    uint8_t pad[0x38];
    uint32_t v38;
} Inner;

typedef struct {
    uint8_t pad[0x3c];
    Inner *p3c;
} Outer;

int func_0201eb04(Outer *self) {
    uint16_t lim; uint32_t n; void *r;
    Tmp t;
    Tmp *p = &t;
    func_02016630(p, data_020b8e44);
    r = func_0201ea2c(self, func_02052d90(p->f4, p->f8));
    lim = *(uint16_t *)((uint8_t *)r + 4);
    n = lim - (self->p3c->v38 & 0xffff);
    if (p->f4 != 0) {
        if (p->fc != 0) func_02052d3c(p->f4, p->f8);
        func_02052c04(p->f4);
    }
    func_02053290(p);
    return n;
}
