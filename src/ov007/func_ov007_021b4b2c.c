#include "ffc/types.h"

extern uint32_t func_02056aec(void *self);
extern uint32_t func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void func_ov007_021b4bbc(void *self);

void func_ov007_021b4b2c(void *s, int32_t r1)
{
    uint8_t *self = (uint8_t *)s;
    uint8_t *r4;
    uint32_t r7;
    uint32_t t;
    int32_t i;

    if (r1 == *(int32_t *)(self + 0xd8)) {
        if (*(int32_t *)(self + 0xe8) == 0) {
            *(uint32_t *)(*(uint8_t **)(self + 0xe4) + 0x90) = *(uint8_t *)(self + 0xec);
        } else {
            *(uint32_t *)(*(uint8_t **)(self + 0xe4) + 0x94) = *(uint8_t *)(self + 0xec);
        }
        r7 = func_02056aec(self);
        t = func_0203b708(30);
        r4 = self + 0x14;
        func_02056bc0(r4, (void *)t);
        func_02056bc0(r4, (void *)r7);
    }

    for (i = 0; i < *(int32_t *)(self + 0xf0); i++) {
        if (r1 == *(int32_t *)(self + 0xb8 + i * 4)) {
            *(uint8_t *)(self + 0xec) = (uint8_t)(i + 1);
            func_ov007_021b4bbc(self);
        }
    }
}
