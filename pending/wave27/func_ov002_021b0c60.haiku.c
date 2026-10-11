#include "ffc/types.h"

extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);

void func_ov002_021b0c60(void *a, uint32_t b)
{
    uint8_t *p = (uint8_t *)a;
    uint32_t f = (b != 0) ? 1 : 0;

    func_0205f2f0((void *)func_02064aa8(*(void **)(p + 0x128)), f);
    *(uint8_t *)(p + 0x1a4) = (uint8_t)b;
    if (*(void **)(p + 0x1a0) != 0) {
        uint32_t g = (b != 0) ? 1 : 0;
        func_0205f2f0((void *)func_02064aa8(*(void **)(p + 0x1a0)), g);
    }
}
