#include "ffc/types.h"

void func_020083dc(uint8_t *p, int idx)
{
    int off = idx << 4;
    int16_t v1 = *(int16_t *)(p + 0x10 + off);
    int16_t v2 = *(int16_t *)(p + 0x12 + off);
    *(int16_t *)(p + ((int)v1 << 4) + 0x12) = v2;
    int16_t v3 = *(int16_t *)(p + 0x12 + off);
    int16_t v4 = *(int16_t *)(p + 0x10 + off);
    *(int16_t *)(p + ((int)v3 << 4) + 0x10) = v4;
}
