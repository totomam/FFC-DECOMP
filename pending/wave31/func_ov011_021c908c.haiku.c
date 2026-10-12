#include "ffc/types.h"

extern uint32_t func_ov011_021c8e2c(void *object);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(uint32_t object, uint32_t value);
extern uint32_t func_ov005_021979d8(void *object);
extern void func_ov005_021974e4(uint32_t value);
extern void func_ov005_02197514(uint32_t value);

void func_ov011_021c908c(uint8_t *obj)
{
    uint32_t r;
    if (func_ov011_021c8e2c(obj) == 0) {
        r = func_02064aa8(*(void **)(*(uint8_t **)(obj + 0xc0) + 0x98));
        func_0205f2f0(r, 1);
    } else {
        r = func_02064aa8(*(void **)(*(uint8_t **)(obj + 0xc0) + 0x98));
        func_0205f2f0(r, 0);
    }
    if (func_ov005_021979d8(obj + 0x350) != 0) {
        func_ov005_021974e4(*(uint32_t *)(obj + 0x3d8));
    } else {
        func_ov005_02197514(*(uint32_t *)(obj + 0x3d8));
    }
}
