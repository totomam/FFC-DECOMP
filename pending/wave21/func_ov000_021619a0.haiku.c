#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern uint64_t func_020882cc(void);

void func_ov000_021619a0(void)
{
    uint8_t *p = func_ov000_02163350();
    p[0x62e] = 0;
    uint64_t v = func_020882cc();
    uint32_t lo = (uint32_t)v;
    uint32_t hi = (uint32_t)(v >> 32);
    p = func_ov000_02163350();
    *(uint32_t *)(p + 0x670) = lo;
    *(uint32_t *)(p + 0x674) = hi;
}
