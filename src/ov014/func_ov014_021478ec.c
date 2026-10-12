#include "ffc/types.h"

extern void func_02081a48(uint32_t addr, uint32_t mask);
extern void func_ov014_02147080(void *p, uint32_t b, uint32_t c, uint8_t e, uint32_t f);
extern uint32_t func_ov014_0214732c(void *p, uint32_t d);
extern void func_ov014_0214772c(void *p, uint32_t c);

void func_ov014_021478ec(void *p, uint32_t b, uint32_t c, uint32_t d, uint8_t e, uint32_t f)
{
    func_02081a48(0x400006c, ~0xfU);
    func_ov014_02147080(p, b, c, e, f);
    do {
        func_02081a48(0x400006c, 0);
    } while (func_ov014_0214732c(p, d) != 0);
    func_ov014_0214772c(p, c);
}
