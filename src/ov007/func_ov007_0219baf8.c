#include "ffc/types.h"

extern void func_02056c9c(void *p, int32_t x);
extern uint8_t data_ov007_021c2954[];

void *func_ov007_0219baf8(void *p)
{
    func_02056c9c(p, 0);
    *(uint8_t **)p = data_ov007_021c2954;
    return p;
}
