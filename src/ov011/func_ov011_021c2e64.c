#include "ffc/types.h"

extern void func_ov011_021c2eb8(void *object);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02069288(void *object);
extern void func_ov011_021c2fac(void *object);
extern void func_ov011_021c3060(void *object);

void func_ov011_021c2e64(void *object)
{
    uint8_t *p = (uint8_t *)object;

    if (*(uint32_t *)(p + 0x330) == 1) {
        func_ov011_021c2eb8(object);
        return;
    }
    if (p[0x27a] == 0) {
        return;
    }
    func_0205f2f0((void *)func_02064aa8(*(void **)((uint8_t *)(*(void **)(p + 0x290)) + 0x98)), 1);
    func_02069288(*(void **)(p + 0x290));
    if (p[0x27a] == 1) {
        func_ov011_021c2fac(object);
        return;
    }
    func_ov011_021c3060(object);
}
