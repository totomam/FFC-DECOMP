#include "ffc/types.h"

extern void func_020757a4(uint32_t v);
extern uint32_t func_0205681c(uint32_t v);
extern void func_02056f0c(uint32_t v, uint32_t flag);

void func_020762f0(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0x88);
    if (v != 0) {
        func_020757a4(v);
        return;
    }
    uint32_t r = func_0205681c(0x18);
    if (r != 0) {
        func_02056f0c(r, 1);
    }
}
