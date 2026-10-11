#include "ffc/types.h"

extern uint32_t func_ov000_0214ed98(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t *p);
extern void func_ov000_02165408(uint32_t a, uint32_t b);

void func_ov000_021654f8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t *p5, uint32_t *p6)
{
    *p5 = (uint8_t)*p6;
    uint32_t r = func_ov000_0214ed98(a, b, c, d, p5);
    *p6 = *p5;
    func_ov000_02165408(r, 0xFFFFFFFFu);
}
