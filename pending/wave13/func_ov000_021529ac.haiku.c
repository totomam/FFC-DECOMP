#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(uint32_t x);

void func_ov000_021529ac(void)
{
    uint8_t *p = func_ov000_02152ae4(0x10);
    uint32_t v = p[0x14bc];
    v &= ~0x80;
    p[0x14bc] = v;
}
