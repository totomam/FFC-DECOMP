#include "ffc/types.h"

extern uint32_t func_ov000_0214eaac(uint32_t x);

uint32_t func_ov000_0214d4ac(uint8_t *p)
{
    uint32_t a;
    uint32_t b;

    a = func_ov000_0214eaac(p[3] << 2);
    b = func_ov000_0214eaac(*(uint16_t *)p);
    return a + b;
}
