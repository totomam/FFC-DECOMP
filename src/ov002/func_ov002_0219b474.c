#include "ffc/types.h"

extern uint32_t func_ov002_02198dec(uint32_t a, uint32_t b);
extern uint32_t func_ov002_0219f4c8(void);
extern void func_ov002_021bc240(uint32_t a, uint32_t b, uint32_t c);

void func_ov002_0219b474(uint8_t *self, uint32_t v)
{
    uint32_t *base = (uint32_t *)self;
    func_ov002_02198dec(base[0xa0 / 4], v);
    func_ov002_021bc240(func_ov002_0219f4c8(), v - base[0x80 / 4], base[0xa4 / 4]);
    base[0x80 / 4] = v;
}
