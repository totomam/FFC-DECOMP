#include "ffc/types.h"

extern void func_ov001_0217ef6c(void *p, void *q);
extern uint8_t data_ov001_021900dc[];

uint32_t func_ov001_02175910(uint32_t *pp, uint32_t idx, uint32_t a, uint32_t b)
{
    uint8_t *base;

    if (pp == 0 || (base = (uint8_t *)*pp) == 0) {
        return 2;
    }
    if (idx >= 9) {
        func_ov001_0217ef6c(pp, data_ov001_021900dc);
        return 2;
    }
    *(uint32_t *)(base + idx * 8 + 0x1a8) = a;
    *(uint32_t *)(base + idx * 8 + 0x1ac) = b;
    return 0;
}
