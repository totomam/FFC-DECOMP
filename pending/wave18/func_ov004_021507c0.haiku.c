#include "ffc/types.h"

typedef struct {
    uint32_t *reg;
    uint32_t val;
} S;

void func_ov004_021507c0(S *p, int32_t set)
{
    if (set) {
        *p->reg |= p->val;
    } else {
        *p->reg &= ~p->val;
    }
}
