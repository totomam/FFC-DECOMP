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
    Tmp t;
    Tmp *p = &t;
    void *r;
    uint32_t n;
    uint16_t lim;
    func_02016630(p, data_020b8e44);
    r = func_02052d90(p->f4, p->f8);
    r = func_0201ea2c(self, r);
    lim = *(uint16_t *)((uint8_t *)r + 4);
    n = self->p3c->v38 & 0xffff;
    n = lim - n;
    if (p->f4 != 0) {
        if (p->fc != 0) {
            func_02052d3c(p->f4, p->f8);
        }
        func_02052c04(p->f4);
    }
    func_02053290(p);
    return n;
}
