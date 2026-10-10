#include "ffc/types.h"

extern uint32_t func_ov000_0215b490(uint8_t v);

uint8_t func_02073844(uint8_t *p)
{
    uint8_t v = p[0x21];
    if (v != 0) {
        return (uint8_t)func_ov000_0215b490(v);
    }
    return 0;
}
