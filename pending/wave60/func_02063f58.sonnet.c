#include "ffc/types.h"
extern uint8_t data_020b16d8[];
extern void func_02063bcc(void *o);
extern void func_020642e8(void *o, int a);
extern void func_0205847c(void *p);
extern void func_02056858(void *p);
extern void func_02063ba4(void *o, void *p);
extern void func_0205fd04(void *p);
extern void func_02063bbc(void *o, void *p);
extern uint32_t func_02063558(const void *object);
extern void func_0205ffd0(void *p);
extern void func_0205f898(void *p, void *q);
extern void func_02063530(void *o);
extern void func_02062868(void *o);

typedef struct S {
    void *vt; uint8_t p4[0x10]; uint32_t *r14; uint32_t f18[1]; void *f1c; void *f20;
    uint8_t *arr; uint32_t n; uint8_t p2c[0xc]; uint32_t flags; uint8_t p3c[0x24];
    void *f60; uint8_t p64[4]; void *f68; uint32_t **f6c; uint32_t **f70; uint32_t *f74;
} S;

S *func_02063f58(S *self)
{
    uint32_t i;
    self->vt = data_020b16d8;
    func_02063bcc(self);
    func_020642e8(self, 1);
    for (i = 0; i < self->n; i++) {
        uint32_t *e = (uint32_t *)(self->arr + i * 0x28);
        *e = (*e & ~0x300u) | 0x200;
    }
    if (self->flags & 1) {
        for (i = 0; i < self->n; i++) {
            uint32_t *p = self->f6c[i];
            if (p) func_0205847c((void *)p[4]);
        }
        func_02056858(self->f6c);
    } else {
        func_02063ba4(&self->f18, self->r14);
    }
    if (self->flags & 2) {
        for (i = 0; i < self->n; i++) {
            if (self->f70[i])
                func_0205fd04(((uint32_t **)((uint32_t **)self->r14)[6])[2]);
        }
        func_02056858(self->f70);
    } else {
        func_02063bbc(&self->f18, self->r14);
    }
    if (func_02063558(&self->f18)) {
        for (i = 0; i < self->n; i++) {
            if (self->f74[i]) {
                func_0205ffd0(((uint32_t **)((uint32_t **)self->r14)[6])[6]);
                self->f74[i] = i;
            }
        }
        func_02056858(self->f74);
    }
    func_02056858(self->f68);
    func_02056858(self->f60);
    if (self->f1c && self->n)
        func_0205f898(self->f1c, self->f20);
    func_02063530(&self->f18);
    func_02062868(self);
    return self;
}
