#include "ffc/types.h"

extern void func_02021338(uint32_t arg);
extern uint32_t func_02056aec(void *self);
extern void func_02056bc0(void *object, void *node);

void func_ov007_0219e494(uint8_t *self, uint32_t v)
{
    if (v == *(uint32_t *)(self + 0xc8)) {
        func_02021338(0xcf);
        *(uint32_t *)(*(uint32_t *)(self + 0xb8)) = 2;
    }
    {
        uint32_t n = func_02056aec(self);
        func_02056bc0(self + 0x14, (void *)n);
    }
}
