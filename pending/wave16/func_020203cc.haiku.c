#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_020203cc(uint8_t *self, Pair v) {
    volatile Pair loc[2];
    *(Pair *)(self + 0x68) = v;
    uint32_t na = -v.a;
    uint32_t nb = -v.b;
    volatile uint32_t *q = *(uint32_t **)(self + 0x20);
    loc[1].a = na;
    q[7] = na;
    loc[1].b = nb;
    loc[0].a = na;
    loc[0].b = nb;
    q[8] = nb;
}
