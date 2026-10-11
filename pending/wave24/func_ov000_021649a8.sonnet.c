#include "ffc/types.h"

extern uint32_t func_ov000_0215b6dc(void);
extern uint32_t func_ov000_0215b4b0(void);
extern uint64_t func_020882cc(void);
extern uint32_t *func_ov000_02164418(uint32_t idx);

void func_ov000_021649a8(void)
{
    uint32_t r = func_ov000_0215b6dc();
    if (r >= 0x20) return;
    if (r == func_ov000_0215b4b0()) return;
    {
        uint64_t v = func_020882cc();
        uint32_t *p = func_ov000_02164418(r);
        *(uint64_t *)(p + 12) = v;
    }
}
