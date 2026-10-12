#include "ffc/types.h"

extern void func_02062848(void *object);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern uint8_t data_ov005_02199278[];
extern uint8_t data_ov005_02199040[];

typedef struct Node {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
} Node;

void *func_ov005_021959c0(void *a0, uint32_t a1, uint32_t a2)
{
    uint8_t *self = (uint8_t *)a0;
    Node *n;
    void *obj;
    void **vt;

    func_02062848(self);
    n = (Node *)(self + 0x14);
    n->f0 = 0;
    n->f4 = 0;
    n->f8 = 0;
    n->fc = 0;
    n->f8 = n ? (uint32_t)self : 0;
    n->fc = 1;

    self[0x3c] = 1;
    self[0x3d] = 1;
    *(void **)self = data_ov005_02199278;
    self[0x3e] = 0;
    *(uint32_t *)(self + 0x24) = 0;
    *(uint32_t *)(self + 0x28) = 0;
    *(uint32_t *)(self + 0x2c) = 0;
    *(uint32_t *)(self + 0x30) = 0;
    *(uint32_t *)(self + 0x34) = 0;
    *(uint32_t *)(self + 0x38) = 0;
    *(uint32_t *)(self + 0x40) = 0;
    *(uint32_t *)(self + 0x44) = a2;

    obj = func_0203b95c(*(void **)(data_ov005_02199040 + 0x14), a1, 0, 1);
    *(void **)(self + 0x24) = obj;
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, 3, 0);
    obj = *(void **)(self + 0x24);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[0x2c / 4])(obj);

    if (*(uint32_t *)(self + 0x44) != 1) {
        func_0205f2f0((void *)func_02064aa8(*(void **)(self + 0x24)), 1);
    }

    if (*(uint32_t *)(self + 0x44) != 2) {
        obj = func_0203b95c(*(void **)(data_ov005_02199040 + 0x14), a1, 0, 1);
        *(void **)(self + 0x28) = obj;
        vt = *(void ***)obj;
        ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, 3, 0);
        obj = *(void **)(self + 0x28);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[0x2c / 4])(obj);

        if (*(uint32_t *)(self + 0x44) != 1) {
            func_0205f2f0((void *)func_02064aa8(*(void **)(self + 0x28)), 1);
        }
    }

    return self;
}
