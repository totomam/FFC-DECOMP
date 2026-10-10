#include "ffc/types.h"

extern void func_ov015_021d6304(int a, int b);
extern uint32_t data_ov015_021d79e0;
extern void (*data_ov015_021d79e4[])(int, int);

void func_ov015_021d786c(int a, int b)
{
    uint32_t i;
    uint32_t h;
    const uint32_t *p = (const uint32_t *)func_ov015_021d6304;

    i = 28;
    h = 0;
    for (; i != 0; i--) {
        uint32_t x = *p;
        h ^= (x >> i) | (x << (32 - i));
        p++;
    }

    if (h == 0x786385f) {
        func_ov015_021d6304(a, b);
        return;
    }
    data_ov015_021d79e4[data_ov015_021d79e0 ^ 1](a, b);
}
