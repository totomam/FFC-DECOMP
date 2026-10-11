#include "ffc/types.h"

extern void func_020870a0(void *object);
extern uint32_t data_021407c0[];
extern void *data_02140cc0[];

void func_0207ceb0(int32_t a, int32_t b, int32_t c)
{
    if (a == 0xb && c != 0) {
        data_021407c0[1] &= ~0x20u;
        func_020870a0(*(void **)((uint8_t *)data_02140cc0 + 0x1c));
    }
}
