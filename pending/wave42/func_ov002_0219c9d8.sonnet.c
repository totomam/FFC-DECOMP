#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov002_021d4bc4[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov002_0219c9d8(uint8_t *self, uint32_t idx, int32_t n, Pair p)
{
    uint32_t *slots = (uint32_t *)(self + 0x84);
    void *node;
    void *r4;
    void **vt;

    node = (void *)slots[idx];
    if (node != 0) {
        uint32_t f = *(uint32_t *)((uint8_t *)node + 0xc);
        *(uint32_t *)((uint8_t *)node + 0xc) = (f & ~0xffu) | 2;
        slots[idx] = 0;
    }

    if (n > 4) {
        func_02021338(0xdd);
        r4 = func_0203b95c((void *)data_ov002_021d4bc4[7], *(uint32_t *)(self + 0x80), 0, 1);
        n -= 4;
    } else {
        func_02021338(0xdd);
        r4 = func_0203b95c((void *)data_ov002_021d4bc4[5], *(uint32_t *)(self + 0x80), 0, 1);
    }

    vt = *(void ***)r4;
    ((void (*)(void *))vt[10])(r4);
    vt = *(void ***)r4;
    ((void (*)(void *, uint32_t, uint32_t))vt[3])(r4, p.a, p.b);
    vt = *(void ***)r4;
    ((void (*)(void *, uint32_t))vt[8])(r4, 0);
    vt = *(void ***)r4;
    ((void (*)(void *, int32_t, uint32_t))vt[14])(r4, n, 0);

    func_02056bc0(self + 0x48, r4);
    slots[idx] = (uint32_t)r4;
}
