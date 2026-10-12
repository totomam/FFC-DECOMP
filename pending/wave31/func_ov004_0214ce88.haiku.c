#include "ffc/types.h"

extern uintptr_t func_02069734(const void *object);
extern void func_020697ac(void *object, uint32_t v);
extern void func_02069288(void *object);

void func_ov004_0214ce88(void *obj)
{
    uint8_t *a = (uint8_t *)obj;
    void **it;

    if (func_02069734(obj) == 0) {
        uint32_t *q = *(uint32_t **)(a + 0xc4);
        func_020697ac(obj, *q);
    }
    it = *(void ***)(a + 0xd0);
    while (it != (void **)(*(uint8_t **)(a + 0xd0)) + *(uint32_t *)(a + 0xd4)) {
        func_02069288(*it);
        it++;
    }
}
