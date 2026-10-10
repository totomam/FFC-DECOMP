#include "ffc/types.h"

extern uint32_t func_ov000_0214eef4(uint32_t a);
extern void func_ov000_02165408(uint32_t a, int32_t b);

void func_ov000_0216556c(uint32_t a, uint8_t *p, uint32_t *q)
{
    uint32_t r;
    *p = (uint8_t)*q;
    r = func_ov000_0214eef4(a);
    *q = *p;
    func_ov000_02165408(r, -1);
}
