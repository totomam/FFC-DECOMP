#include "ffc/types.h"

extern uint32_t func_02072458(uint32_t *p);
extern uint32_t data_020b26d0[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_020753f4(uint32_t *a)
{
    uint8_t *base = (uint8_t *)a;
    uint32_t *inner = *(uint32_t **)(base + 0x88);
    uint32_t r = func_02072458(*(uint32_t **)((uint8_t *)inner + 0x28));

    if (r != 0) {
        Pair p = *(Pair *)data_020b26d0;
        *(Pair *)(base + 0x80) = p;
        return;
    }
    *(uint32_t *)(base + 0xc) = (*(uint32_t *)(base + 0xc) & ~0xffu) | 2u;
}
