#include "ffc/types.h"

extern uint32_t func_ov003_021481c0(uint32_t);
extern uint32_t func_020424e0(uint32_t);
extern uint32_t func_ov003_021464f4(uint32_t, uint32_t);
extern void func_ov003_0215889c(uint32_t);

void func_ov003_02165d58(uint32_t *p)
{
    uint32_t r;

    r = func_ov003_021481c0(p[6]);
    p[6] = r;
    if (r != 0) {
        uint32_t v = func_020424e0(p[5]);
        v = func_ov003_021464f4(v, r);
        if (v != 0) {
            func_ov003_0215889c(v);
        }
    }
}
