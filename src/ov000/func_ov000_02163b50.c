#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern uint32_t data_ov000_0217020c[];

void func_ov000_02163b50(void)
{
    uint64_t v = func_020882cc();
    data_ov000_0217020c[6] = (uint32_t)v;
    data_ov000_0217020c[7] = (uint32_t)(v >> 32);
}
