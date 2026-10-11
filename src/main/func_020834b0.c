#include "ffc/types.h"

extern void func_02082d4c(uint32_t x);
extern uint16_t data_02141390;

uint16_t func_020834b0(uint16_t *p)
{
    uint16_t v = *p;
    *p = 0;
    data_02141390 |= v;
    func_02082d4c(v);
    return v;
}
