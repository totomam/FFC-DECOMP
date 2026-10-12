#include "ffc/types.h"

extern uint32_t func_0203bf90(uint32_t x);
extern uint32_t func_0203bf7c(uint32_t x);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void func_02042b18(void *a, uint32_t b);

void func_02041b68(uint8_t *obj) {
    uint32_t state = *(uint32_t *)(obj + 0x84);
    uint32_t r4, r6, r7;

    *(uint32_t *)(obj + 0x84) = *(volatile uint32_t *)(obj + 0x84) + 1;

    switch (state) {
    case 0:
        r7 = func_0203bf90(0x1e);
        r4 = func_0203bf7c(0x1e);
        r6 = func_0203b6fc();
        func_02056bc0((void *)r6, (void *)r4);
        func_02056bc0((void *)r6, (void *)r7);
        func_02056bc0((void *)(obj + 0x14), (void *)r6);
        break;
    case 1:
        func_02042b18(*(void **)(obj + 0x80), 0);
        *(uint32_t *)(obj + 0xc) = (*(uint32_t *)(obj + 0xc) & ~0xffu) | 2u;
        break;
    }
}
