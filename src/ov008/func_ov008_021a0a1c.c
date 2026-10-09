#include "ffc/types.h"

extern void func_02056c9c(void *p, int32_t x);
extern uint8_t data_ov008_021a85a8[];

void *func_ov008_021a0a1c(void *p)
{
    func_02056c9c(p, 0);
    *(uint8_t **)p = data_ov008_021a85a8;
    return p;
}
