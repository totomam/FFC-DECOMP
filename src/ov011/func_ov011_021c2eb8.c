#include "ffc/types.h"

extern uint32_t func_02036994(void *object, uint32_t index);
extern void *func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_020692a4(void *object);
extern uint32_t func_ov009_021ad700(void *object, uint32_t index);
extern void func_02069288(void *object);
extern void func_0205f470(void *object);

#define SLOT(base, i, off) (*(void **)((uint8_t *)((uint32_t *)(base) + (i)) + (off)))
#define DEREF94(x) (*(void **)((uint8_t *)(x) + 0x94))

void func_ov011_021c2eb8(void *param_1)
{
    uint8_t *p = (uint8_t *)param_1;
    uint8_t i;
    uint8_t j;

    for (i = 0; i < 5; i++) {
        if (func_02036994(p + 0x220, i) != 0) {
            func_0205f2f0(func_02064aa8(DEREF94(SLOT(p, i, 0xd8))), 0);
        }
        func_020692a4(SLOT(p, i, 0xd8));
    }

    for (j = 0; j < *(uint8_t *)(p + 0x27f); j++) {
        if (func_ov009_021ad700(p, j) == 0) {
            func_0205f2f0(func_02064aa8(DEREF94(SLOT(p, j, 0xec))), 0);
            func_020692a4(SLOT(p, j, 0xec));
        } else {
            func_0205f2f0(func_02064aa8(DEREF94(SLOT(p, j, 0xec))), 1);
            func_02069288(SLOT(p, j, 0xec));
        }
    }

    for (i = 0; i < 2; i++) {
        func_020692a4(SLOT(p, i, 0x150));
    }

    func_020692a4(SLOT(p, 0x56, 0));
    func_020692a4(SLOT(p, 0x57, 0));

    {
        void *a = *(void **)(p + 0xcc);
        void *b = *(void **)((uint8_t *)a + 0x50);
        func_0205f470(DEREF94(b));
    }
    func_020692a4(SLOT(p, 0x58, 0));
}
