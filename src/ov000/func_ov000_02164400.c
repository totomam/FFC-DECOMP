#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern uint32_t *func_ov000_02164418(void *p);

void func_ov000_02164400(void *p)
{
    uint64_t v = func_020882cc();
    uint32_t *q = func_ov000_02164418(p);
    q[0x30 / 4] = (uint32_t)v;
    q[0x34 / 4] = (uint32_t)(v >> 32);
}
