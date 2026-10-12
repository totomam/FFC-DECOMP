#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_0203bf7c(int);
extern void *func_0203bf90(int);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *);

void func_ov012_021cd898(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *q;
    void *n;
    void *x;
    void *t;

    if (*(uint32_t *)(p + 0xf0) != 1) {
        return;
    }
    ((void (*)(void *))(*(void ***)self)[10])(self);
    *(int16_t *)(p + 0x10e) = -1;
    n = func_0203b6fc();
    x = func_0203bf7c(0x1e);
    func_02056bc0(n, x);
    if (*(uint8_t *)(*(uint8_t **)(p + 0x108) + 4) != 0) {
        x = func_0203bf90(0x1e);
        func_02056bc0(n, x);
    }
    t = func_02056aec(self);
    q = (uint8_t *)self + 0x14;
    func_02056bc0(q, n);
    func_02056bc0(q, t);
}
