#include "ffc/types.h"

extern uint32_t func_02098284(void *p, uint32_t v);

uint32_t func_0209814c(uint8_t *p)
{
    uint32_t r;
    if (p[0x27]) {
        p[0x27] = 0;
        return *(uint16_t *)(p + 0x24);
    }
    r = func_02098284(p, 1);
    if (p[0x26] && r != 0xffff) {
        *(uint16_t *)(p + 0x24) = (uint16_t)r;
        p[0x28] = 1;
    }
    return r;
}
