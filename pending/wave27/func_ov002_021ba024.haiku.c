#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t x, int32_t y);

void func_ov002_021ba024(uint8_t *p, int32_t a, int32_t b)
{
    *(int32_t *)(p + 0x90) = a;
    *(int32_t *)(p + 0x94) = b;
    *(int32_t *)(p + 0xa0) = 3;
    if (a == 0) {
        *(int32_t *)(p + 0x9c) = 0;
    } else {
        *(int32_t *)(p + 0x9c) = func_0209a76c(a * 31, b) + 1;
    }
    if (a > 0 && *(int32_t *)(p + 0x9c) == 0) {
        *(int32_t *)(p + 0x9c) = 1;
    }
}
