#include "ffc/types.h"

extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);

void func_ov005_02196bec(void *obj, uint32_t flag) {
    uint8_t *p = (uint8_t *)obj;
    if (*(uint32_t *)(p + 0xc0) == 1) {
        return;
    }
    if (flag != 0) {
        func_0205f2f0((void *)func_02064aa8(*(void **)(p + 0x9c)), 1);
    } else {
        func_0205f2f0((void *)func_02064aa8(*(void **)(p + 0x9c)), 0);
    }
}
