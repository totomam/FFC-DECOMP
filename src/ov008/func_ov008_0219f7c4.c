#include "ffc/types.h"

extern void func_02056c9c(void *p, int32_t x);
extern uint8_t data_ov008_021a82fc[];

void *func_ov008_0219f7c4(void *p)
{
    func_02056c9c(p, 0);
    *(uint8_t **)p = data_ov008_021a82fc;
    return p;
}
