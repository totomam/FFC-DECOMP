#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint8_t *data_020b8e44;
extern Pair data_ov007_021c6d5c;
extern Pair data_ov007_021c6d64;

void func_ov007_021b6ad8(uint8_t *r0)
{
    uint32_t st = *(uint32_t *)(r0 + 0x308);
    if (st >= 1 && st <= 3) {
        data_020b8e44[0xc] = (uint8_t)st;
        *(Pair *)(r0 + 0xb0) = data_ov007_021c6d5c;
    } else {
        **(uint32_t **)(r0 + 0xb8) = 0;
        *(uint32_t *)(r0 + 0xc) = (*(uint32_t *)(r0 + 0xc) & ~0xffu) | 2;
    }
    *(Pair *)(r0 + 0xb0) = data_ov007_021c6d64;
}
