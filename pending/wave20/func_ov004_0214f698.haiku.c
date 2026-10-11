#include "ffc/types.h"

extern uint32_t func_ov004_02153514(uint32_t v);
extern uint32_t func_ov004_0214f740(void *p, uint32_t v);
extern void func_ov004_0214f6c0(void *a, void *b, uint32_t c, uint32_t d);

void func_ov004_0214f698(void *a, void *b, uint32_t c)
{
    uint32_t v = *(uint32_t *)((uint8_t *)b + 0x88);
    uint32_t t = func_ov004_02153514(v);
    uint32_t r = func_ov004_0214f740(b, t);
    func_ov004_0214f6c0(a, b, r, c);
}
