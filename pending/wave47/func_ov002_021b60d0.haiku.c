#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);
extern void *func_0203b95c(void *a, void *b, uint8_t c, int d);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov002_021d5c80[];

typedef struct { uint32_t a, b; } S2;

void func_ov002_021b60d0(uint8_t *self, uint32_t idx)
{
    S2 tmp;
    void *node;
    uint32_t a;

    ((void (*)(void *, void *))(*(void ***)*(void **)(self + 0x80))[4])(&tmp, *(void **)(self + 0x80));

    func_02056bf4(self + 0x48, *(void **)(self + 0x80));

    if (*(void **)(self + 0x80)) {
        ((void (*)(void *))(*(void ***)*(void **)(self + 0x80))[1])(*(void **)(self + 0x80));
    }
    *(void **)(self + 0x80) = 0;

    a = *(uint32_t *)(self + 0x98);
    node = ((void **)((uint8_t *)data_ov002_021d5c80 + (a << 4)))[idx];
    *(void **)(self + 0x80) = func_0203b95c(node, *(void **)(self + 0xa0), *(uint8_t *)(self + 0x9c), 1);

    ((void (*)(void *, S2))(*(void ***)*(void **)(self + 0x80))[3])(*(void **)(self + 0x80), tmp);
    ((void (*)(void *))(*(void ***)*(void **)(self + 0x80))[10])(*(void **)(self + 0x80));
    ((void (*)(void *, uint32_t))(*(void ***)*(void **)(self + 0x80))[15])(*(void **)(self + 0x80), 1);
    func_0205f2f0((void *)func_02064aa8(*(void **)(self + 0x80)), 1);
    func_02056bc0(self + 0x48, *(void **)(self + 0x80));
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)*(void **)(self + 0x80))[14])(*(void **)(self + 0x80), 1, 0);
}
