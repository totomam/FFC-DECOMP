#include "ffc/types.h"

extern void func_020427f4(void *self, uint32_t flag);
extern void func_020375f4(uint32_t mask);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02145308(void *p, void *base, uint32_t a, uint32_t b);
extern void *func_0201b79c(void *x);
extern void *data_020b93b8;

void func_02042c64(uint8_t *self, uint32_t flag, uint8_t val)
{
    void *node;
    void *obj;

    if (flag != 0) {
        func_020427f4(self, flag);
    }
    func_020375f4(0x10);
    obj = *(void **)(self + 0x154);
    func_02056bc0(self + 0x48, obj);
    node = func_0205681c(0x430);
    if (node != 0) {
        uint32_t f = (*(uint32_t *)(self + 0x16c) != 0) ? 1 : 0;
        node = func_ov003_02145308(node, self + 0x120, 0, f);
    }
    *(void **)(self + 0x8c) = node;
    obj = *(void **)(self + 0x154);
    func_02056bc0(obj, node);
    obj = *(void **)(self + 0x154);
    *(uint32_t *)((uint8_t *)obj + 0xc) &= ~0xffu;
    *(uint8_t *)(*(uint8_t **)(self + 0x8c) + 0x413) = val;
    node = func_0201b79c(data_020b93b8);
    {
        void *o = *(void **)(self + 0x8c);
        void **vt = *(void ***)o;
        void (*fn)(void *, void *) = (void (*)(void *, void *))vt[5];
        fn(o, node);
    }
    *(uint8_t *)(*(uint8_t **)(self + 0x8c) + 0x413) = 0;
}
