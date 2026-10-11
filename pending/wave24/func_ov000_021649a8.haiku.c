#include "ffc/types.h"

extern uint32_t func_ov000_0215b6dc(void);
extern uint32_t func_ov000_0215b4b0(void);
extern uint64_t func_020882cc(void);
extern uint32_t *func_ov000_02164418(uint32_t idx);

void func_ov000_021649a8(void)
{
    uint32_t r = func_ov000_0215b6dc();
    if (r < 0x20) {
        if (r != func_ov000_0215b4b0()) {
            uint64_t v = func_020882cc();
            uint32_t *p = func_ov000_02164418(r);
            p[12] = (uint32_t)v;
            p[13] = (uint32_t)(v >> 32);
        }
    }
}
