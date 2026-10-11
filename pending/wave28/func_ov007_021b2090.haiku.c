#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern Pair data_ov007_021c5fac;
extern Pair data_ov007_021c5fb4;
extern Pair data_ov007_021c5fbc;

void func_ov007_021b2090(void *p)
{
    uint8_t *base = (uint8_t *)p;
    uint32_t s = *(uint32_t *)(base + 0xc0);

    if (s == 2) {
        goto case2;
    }
    if (s == 4) {
        goto case4;
    }
    *(Pair *)(base + 0xb0) = data_ov007_021c5fac;
    return;
case2:
    *(Pair *)(base + 0xb0) = data_ov007_021c5fb4;
    return;
case4:
    *(Pair *)(base + 0xb0) = data_ov007_021c5fbc;
}
