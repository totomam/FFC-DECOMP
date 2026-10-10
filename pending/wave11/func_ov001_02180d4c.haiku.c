#include "ffc/types.h"

extern int32_t func_ov001_02180868(uint16_t a, uint16_t b);

int32_t func_ov001_02180d4c(uint8_t *p, uint8_t *q)
{
    return func_ov001_02180868(*(uint16_t *)(p + 0xc), *(uint16_t *)(q + 0xc));
}
