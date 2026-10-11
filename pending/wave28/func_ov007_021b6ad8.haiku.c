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
        uint32_t x = data_ov007_021c6d5c.a;
        uint32_t y = data_ov007_021c6d5c.b;
        *(uint32_t *)(r0 + 0xb0) = x;
        *(uint32_t *)(r0 + 0xb4) = y;
    } else {
        **(uint32_t **)(r0 + 0xb8) = 0;
        *(uint32_t *)(r0 + 0xc) = (*(uint32_t *)(r0 + 0xc) & ~0xffu) | 2;
    }
    uint32_t x2 = data_ov007_021c6d64.a;
    uint32_t y2 = data_ov007_021c6d64.b;
    *(uint32_t *)(r0 + 0xb0) = x2;
    *(uint32_t *)(r0 + 0xb4) = y2;
}
