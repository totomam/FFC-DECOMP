#include "ffc/types.h"

extern void func_02021338(int32_t x);

typedef void (*VFn)(void *self, int32_t a, int32_t b);

void func_ov007_021b6fd4(uint8_t *p, int32_t flag)
{
    uint8_t *state = *(uint8_t **)(p + 0x94);
    void *obj;
    VFn fn;

    if (state[0x13c] == 0) {
        func_02021338(0xb9);
    }
    if (flag != 0) {
        obj = *(void **)(p + 0x98);
        fn = *(VFn *)((uint8_t *)(*(void **)obj) + 0x38);
        fn(obj, 3, 0);
    } else {
        obj = *(void **)(p + 0x98);
        fn = *(VFn *)((uint8_t *)(*(void **)obj) + 0x38);
        fn(obj, 2, 0);
    }
}
