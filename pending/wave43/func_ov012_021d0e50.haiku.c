#include "ffc/types.h"

extern void func_02056bf4(void *p);
extern void *func_0203bb94(void *a, int b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov012_021d40d4[];

void func_ov012_021d0e50(void *self, int arg)
{
    uint32_t *w = (uint32_t *)self;
    int r4;
    void **o;
    uint8_t *base;
    void **p;

    if (w[0xB7] < 2) return;
    r4 = 0;
    if (arg != 0) r4 = 1;
    if ((int)w[0xD4] == r4) return;
    if (w[0xAB] != 0) {
        func_02056bf4((uint8_t *)self + 0x48);
        o = (void **)w[0xAB];
        if (o == 0) goto skip;
        if (o == 0) goto store;
        ((void (*)(void *))((void **)o[0])[1])(o);
store:
        w[0xAB] = 0;
skip:;
    }
    base = data_ov012_021d40d4 + w[0xB5] * 20;
    p = (void **)func_0203bb94(*(void **)(base + (w[0xB7] + r4) * 4), 1, 0, 0);
    w[0xAB] = (uint32_t)p;
    ((void (*)(void *))((void **)p[0])[10])(p);
    p = (void **)w[0xAB];
    ((void (*)(void *, int))((void **)p[0])[8])(p, 2);
    func_02056bc0((uint8_t *)self + 0x48, (void *)w[0xAB]);
    w[0xD4] = r4;
}
