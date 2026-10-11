#include "ffc/types.h"

extern void func_ov012_021cbe40(void *a, void *b);
extern uint32_t data_ov012_021d3b28[];

void *func_ov012_021cdf74(void *p0, uint32_t *p1)
{
    uint8_t *s = (uint8_t *)p0;
    func_ov012_021cbe40(p0, s + 0x110);
    *(void **)s = data_ov012_021d3b28;
    *(uint32_t *)(s + 0x110) = 0;
    *(uint8_t *)(s + 0x114) = 0;
    *(uint32_t **)(s + 0x118) = p1;
    *(uint16_t *)(s + 0x10c) = (uint16_t)*p1;
    return s;
}
