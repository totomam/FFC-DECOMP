#include "ffc/types.h"

extern uint8_t *data_ov006_021bc848;
extern uint32_t func_ov006_021b3f0c(uint32_t v, uint32_t *p);

uint32_t func_ov006_021b51a8(uint32_t *p)
{
    uint8_t *base;
    uint32_t idx = 0;

    *p = (*p & 0xc1fffcffu) | 0x200u;
    base = data_ov006_021bc848;
    if ((uint8_t *)p >= base + 0x400) {
        idx = 1;
    }
    return func_ov006_021b3f0c(*(uint32_t *)(base + (idx << 2) + 0x800), p);
}
