#include "ffc/types.h"

extern uint32_t func_02056aec(void *object);
extern uint32_t func_020655b8(uint32_t value);
extern void func_02056bc0(void *object, void *node);

void func_ov013_021bf800(uint8_t *self, uint8_t *node)
{
    int32_t idx;
    uint32_t tmp;

    if (node == *(uint8_t **)(self + 0xc4)) {
        idx = 0;
    } else if (node == *(uint8_t **)(self + 0xc8)) {
        idx = 1;
    } else if (node == *(uint8_t **)(self + 0xcc)) {
        idx = 2;
    } else if (node == *(uint8_t **)(self + 0xd0)) {
        idx = 3;
    } else {
        idx = 4;
    }
    **(int32_t **)(self + 0xbc) = idx;

    tmp = func_02056aec(self);
    {
        uint32_t r6 = tmp;
        uint32_t r0 = func_020655b8(*(uint32_t *)(node + 0x94));
        func_02056bc0(self + 0x14, (void *)r0);
        func_02056bc0(self + 0x14, (void *)r6);
    }
}
