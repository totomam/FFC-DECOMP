#include "ffc/types.h"

extern void func_02056c9c(void *p, int v);
extern uint8_t data_ov007_021c57d0[];

void *func_ov007_021afa50(void *p)
{
    func_02056c9c(p, 0);
    *(void **)p = data_ov007_021c57d0;
    *(uint32_t *)((uint8_t *)p + 0x80) = 0;
    return p;
}
