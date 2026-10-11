#include "ffc/types.h"

extern void func_02056c4c(void *p);

void func_ov002_0219f464(uint8_t *p)
{
    uint32_t *o;

    o = *(uint32_t **)(p + 0xe4);
    if (o != 0) {
        o[3] = (o[3] & ~0xffu) | 2;
        *(uint32_t **)(p + 0xe4) = 0;
        func_02056c4c(*(void **)(p + 0xc8));
    }

    o = *(uint32_t **)(p + 0xe8);
    if (o != 0) {
        o[3] = (o[3] & ~0xffu) | 2;
        *(uint32_t **)(p + 0xe8) = 0;
        func_02056c4c(*(void **)(p + 0xc4));
    }
}
