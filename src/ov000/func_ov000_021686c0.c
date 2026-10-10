#include "ffc/types.h"

extern uint32_t func_ov000_021653e4(uint32_t a, uint32_t b);

typedef struct {
    uint32_t pad0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
} FuncState;

void func_ov000_021686c0(FuncState *p)
{
    uint32_t sum = p->f4 + p->fc;
    p->f4 = sum;
    p->f14 = func_ov000_021653e4(p->f14, sum * p->f8);
}
