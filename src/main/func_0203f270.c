#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201f918(uint32_t a, uint32_t b, void *c);
extern uint32_t func_020424e0(uint32_t a);
extern void func_ov003_021488d4(uint32_t a, uint32_t b);

void func_0203f270(void *self) {
    uint8_t *p = (uint8_t *)self;
    uint32_t v;

    if (p[0xc4] == 0) {
        func_0201f918(data_020b93b8, *(uint32_t *)(p + 0x8c), p + 0x90);
        func_ov003_021488d4(func_020424e0(*(uint32_t *)(p + 0x88)), *(uint32_t *)(p + 0x8c));
    }
    v = *(uint32_t *)(p + 0xc);
    v &= ~0xffu;
    v |= 2;
    *(uint32_t *)(p + 0xc) = v;
}
