#include "ffc/types.h"

typedef struct { int32_t a, b; } Pair;
typedef struct { int32_t a, b, c, d; } Quad;

void func_0205e1c0(uint8_t *p, Pair v)
{
    volatile Quad t;
    int32_t na = -v.a;
    int32_t nb = -v.b;
    int32_t *q = *(int32_t **)(p + 0x20);
    q[7] = na;
    t.c = na;
    t.d = nb;
    t.a = na;
    t.b = nb;
    q[8] = nb;
}
