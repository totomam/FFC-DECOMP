#include "ffc/types.h"

extern int func_ov002_02198d70(uint32_t a, uint8_t *b);

int func_ov002_021c6260(uint8_t *p, uint32_t v)
{
    *(uint32_t *)(p + 0x20) = v;
    return func_ov002_02198d70(v, p);
}
