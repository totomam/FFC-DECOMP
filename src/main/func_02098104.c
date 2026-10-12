#include "ffc/types.h"

extern uint32_t func_02098284(uint8_t *p, uint8_t b);

uint32_t func_02098104(uint8_t *p)
{
    uint32_t r;

    if (p[0x27]) {
        return *(uint16_t *)(p + 0x24);
    }
    r = func_02098284(p, p[0x26]);
    if (p[0x26] && r != 0xffff) {
        p[0x27] = 1;
        *(uint16_t *)(p + 0x24) = (uint16_t)r;
        p[0x28] = p[0x27];
    }
    return r;
}
