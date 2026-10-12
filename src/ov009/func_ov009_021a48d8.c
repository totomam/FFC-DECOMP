#include "ffc/types.h"

extern void *func_0203b95c(void *data, void *obj, int a, int b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern uint8_t data_ov009_021b0bec[];
extern uint32_t data_ov009_021b08bc[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov009_021a48d8(uint8_t *self)
{
    void *obj;

    obj = func_0203b95c(data_ov009_021b0bec, *(void **)(self + 0xb8), 2, 1);
    *(void **)(self + 0xd4) = obj;

    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)obj)[0x38 / 4])(obj, self[0x280] + 1, 0);

    obj = *(void **)(self + 0xd4);
    ((void (*)(void *, Pair))(*(void ***)obj)[0xc / 4])(obj, *(Pair *)data_ov009_021b08bc);

    obj = *(void **)(self + 0xd4);
    ((void (*)(void *, int))(*(void ***)obj)[0x20 / 4])(obj, 2);

    obj = *(void **)(self + 0xd4);
    ((void (*)(void *))(*(void ***)obj)[0x28 / 4])(obj);

    func_02056bc0(self + 0x48, *(void **)(self + 0xd4));

    func_0205f2f0((void *)func_02064aa8(*(void **)(self + 0xd4)), 1);
}
