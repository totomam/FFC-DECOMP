#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov012_021d3928[];

void *func_ov012_021cddd4(uint8_t *p, uint32_t a, uint8_t b)
{
    func_02056c9c(p, 0);
    *(uint8_t **)p = data_ov012_021d3928;
    *(uint32_t *)(p + 0x80) = 0;
    *(uint8_t *)(p + 0x84) = 0;
    *(uint32_t *)(p + 0x88) = a;
    *(uint8_t *)(p + 0x84) = b;
    return p;
}
