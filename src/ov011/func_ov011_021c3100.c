#include "ffc/types.h"

extern void *data_020b93b8;
extern uint32_t func_0201f2e0(void *a, void *b);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02069288(void *object);
extern void func_020692a4(void *object);

void func_ov011_021c3100(uint8_t *a)
{
    if (func_0201f2e0(data_020b93b8, a + 0x220) != 0) {
        func_0205f2f0((void *)func_02064aa8(*(void **)((uint8_t *)*(void **)(a + 0x290) + 0x98)), 1);
        func_02069288(*(void **)(a + 0x290));
    } else {
        func_0205f2f0((void *)func_02064aa8(*(void **)((uint8_t *)*(void **)(a + 0x290) + 0x98)), 0);
        func_020692a4(*(void **)(a + 0x290));
    }
}
