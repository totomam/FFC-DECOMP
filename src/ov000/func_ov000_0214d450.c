#include "ffc/types.h"

extern uint32_t func_ov000_0214eaac(uint32_t x);
extern uint32_t func_ov000_0214d4ac(void *p);

uint32_t func_ov000_0214d450(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint32_t r = 0xbc;

    if (*(uint16_t *)(p + 2) != 0) {
        r = r + (r + 0x58) ;
        r += func_ov000_0214eaac(*(uint16_t *)(p + 2));
        r += func_ov000_0214eaac(*(uint16_t *)(p + 8));
        r += func_ov000_0214d4ac(p + 0x10);
    }
    if (*(uint16_t *)(p + 6) != 0) {
        r += 0x110;
        r += func_ov000_0214eaac(*(uint16_t *)(p + 6));
        r += func_ov000_0214eaac(*(uint16_t *)(p + 0xa));
        r += func_ov000_0214eaac(*(uint16_t *)(p + 0xc));
        r += func_ov000_0214d4ac(p + 0x14);
    }
    return r;
}
