#include "ffc/types.h"

extern void func_02087620(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_02028dd4(void *p, void *a, void *b);
extern void func_0202f5f8(void);
extern void func_02022a60(void *self, void *x);
extern char data_020ad770[];

typedef struct L { struct L *n; struct L *p; } L;
typedef struct S {
    void *vt; uint32_t w1, w2; uint32_t flags; uint32_t w4; uint32_t f14; uint32_t f18; uint32_t f1c;
    uint8_t f20; uint8_t pad[0x2b]; uint32_t l0; L l;
    uint8_t pad2[0x208-0x58]; void *c; uint8_t pad3[0x14]; uint8_t x[0x34]; uint8_t b0, b1; uint8_t pad4[2]; uint32_t e; uint32_t obj;
} S;

void *func_02022924(S *self, void *a, void *b, void *c)
{
    uint32_t f = self->flags & ~0xffu;
    self->vt = data_020ad770;
    self->f1c = 0x320000;
    self->flags = f;
    self->f14 = 1;
    self->f20 = 1;
    uint32_t *list = (uint32_t *)((uint8_t *)self + 0x4c);
    uint32_t *n = list + 1;
    n[1] = (uint32_t)n;
    list[1] = (uint32_t)n;
    self->f18 = 0;
    list[0] = 0;
    self->c = c;
    func_02087620(self->x);
    self->b0 = 0;
    self->b1 = 0;
    self->e = 0;
    {
        void *r = func_0205681c(0x18);
        if (r) r = func_02028dd4(r, a, b);
        ((uint32_t *)self)[0x87] = (uint32_t)r;
    }
    func_0202f5f8();
    func_02022a60(self, c);
    return self;
}
