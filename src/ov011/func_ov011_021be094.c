#include "ffc/types.h"

typedef struct { uint32_t b; uint32_t c; } Pair;
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int x);
extern char data_ov011_021cab50[];

void *func_ov011_021be094(uint32_t a, Pair bc, uint8_t d, ...)
{
    uint8_t *p = (uint8_t *)func_0205681c(0x94);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(void **)p = (void *)data_ov011_021cab50;
        *(uint32_t *)(p + 0x84) = a;
        *(Pair *)(p + 0x88) = bc;
        *(uint8_t *)(p + 0x90) = d;
    }
    return p;
}
