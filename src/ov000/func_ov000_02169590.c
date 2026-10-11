#include "ffc/types.h"

extern int8_t data_ov000_021697a0[];

void func_ov000_02169590(uint8_t *src, int8_t *dst)
{
    uint32_t i;
    for (i = 0; i < 16; i++) {
        dst[i * 2] = data_ov000_021697a0[(uint32_t)src[i] >> 4];
        dst[i * 2 + 1] = data_ov000_021697a0[(int)src[i] % 16];
    }
    dst[32] = 0;
}
