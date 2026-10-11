#include "ffc/types.h"

extern uint32_t func_ov004_02153514(uint32_t x);
extern uint32_t func_ov004_0214f740(void *p, uint32_t x);
extern void func_ov004_0214f6c0(void *a, void *b, uint32_t c, uint32_t d);

void func_ov004_0214f698(void *a, void *b, uint32_t c)
{
    uint32_t v = func_ov004_02153514(*(uint32_t *)((uint8_t *)b + 0x88));
    uint32_t w = func_ov004_0214f740(b, v);
    func_ov004_0214f6c0(a, b, w, c);
}
