#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov011_021cb75c[];

void *func_ov011_021c6600(void *p, uint8_t a, uint32_t c)
{
    func_02056c9c(p, 0);
    *(void **)p = data_ov011_021cb75c;
    *(uint32_t *)((uint8_t *)p + 0x80) = 0;
    *(uint8_t *)((uint8_t *)p + 0x84) = a;
    *(uint32_t *)((uint8_t *)p + 0x88) = 0;
    *(uint32_t *)((uint8_t *)p + 0x8c) = c;
    return p;
}
