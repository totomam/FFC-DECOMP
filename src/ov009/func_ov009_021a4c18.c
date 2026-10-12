#include "ffc/types.h"

extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_ov005_021959c0(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);

void func_ov009_021a4c18(void *self)
{
    uint32_t *w = (uint32_t *)self;
    uint32_t k;
    uint32_t v;

    v = func_0203b6f0();
    k = 0x5e;
    w[k] = v;
    func_02056bc0((uint8_t *)self + 0x48, (void *)v);

    v = func_0205681c(0x48);
    if (v != 0) {
        v = func_ov005_021959c0(v, w[0x2e], 0);
    }
    k = 0x5f;
    w[k] = v;

    ((void (*)(void *, uint32_t))(((void **)*(void **)w[k])[8]))((void *)w[k], 0);

    func_0205f2f0((void *)func_02064aa8(*(const void **)(w[k] + 0x24)), 1);
    func_0205f2f0((void *)func_02064aa8(*(const void **)(w[k] + 0x28)), 1);

    ((void (*)(void *))(((void **)*(void **)w[k])[11]))((void *)w[k]);

    func_02056bc0((uint8_t *)self + 0x48, (void *)w[k]);
}
