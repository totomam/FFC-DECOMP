#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
extern uint8_t *data_020b8e44;
extern Pair data_ov007_021c6dc8;

void func_ov007_021b6e58(uint8_t *p)
{
    if (p[0x304]) {
        uint32_t v = *(uint32_t *)(p + 0xc8);
        *(uint32_t *)(data_020b8e44 + 8) = v;
        **(uint32_t **)(p + 0xb8) = 1;
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    } else {
        uint32_t a = data_ov007_021c6dc8.a;
        uint32_t b = data_ov007_021c6dc8.b;
        *(uint32_t *)(p + 0xb0) = a;
        *(uint32_t *)(p + 0xb4) = b;
    }
}
