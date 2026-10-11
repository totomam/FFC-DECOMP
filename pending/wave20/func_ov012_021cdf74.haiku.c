#include "ffc/types.h"

extern void func_ov012_021cbe40(void *a, void *b);
extern uint8_t data_ov012_021d3b28[];

void *func_ov012_021cdf74(void *p, void *q)
{
    uint8_t *s = (uint8_t *)p;

    func_ov012_021cbe40(s, s + 0x110);
    *(uint8_t **)s = data_ov012_021d3b28;
    *(uint32_t *)(s + 0x110) = 0;
    *(uint8_t *)(s + 0x114) = 0;
    *(void **)(s + 0x118) = q;
    *(uint16_t *)(s + 0x10c) = (uint16_t)*(uint32_t *)q;
    return s;
}
