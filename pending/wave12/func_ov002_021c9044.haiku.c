#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov002_021c9044(uint8_t *base, uint32_t idx, Pair *src)
{
    Pair *dst = (Pair *)(base + (idx << 3) + 0x10);
    *dst = *src;
}
