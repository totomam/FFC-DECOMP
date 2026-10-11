#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

Pair *func_ov004_0215137c(Pair *p, uint32_t y)
{
    uint32_t nb = func_0209a76c(p->b, y);
    uint32_t na = func_0209a76c(p->a, y);
    p->a = na;
    p->b = nb;
    return p;
}
