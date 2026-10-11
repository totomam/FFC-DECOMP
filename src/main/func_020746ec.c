#include "ffc/types.h"

extern uint32_t func_ov000_02153050(void *p);
extern uint32_t func_ov000_021531fc(uint32_t v);

typedef struct {
    uint32_t pad[3];
    uint32_t flags;
} S;

void func_020746ec(S *p)
{
    uint32_t v;

    v = func_ov000_02153050(p);
    if (v == 7) {
        goto set;
    }
    if (v != 8) {
        goto check;
    }
set:
    v = (p->flags & ~0xffu) | 2;
    p->flags = v;
check:
    if (func_ov000_021531fc(v) != 0) {
        p->flags = (p->flags & ~0xffu) | 2;
    }
}
