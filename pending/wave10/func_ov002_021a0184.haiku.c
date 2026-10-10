#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov002_021d5178[];

void *func_ov002_021a0184(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    func_02056c9c(p, 0);
    *(const void **)p = data_ov002_021d5178;
    *(uint32_t *)((uint8_t *)p + 0x80) = a;
    *(uint32_t *)((uint8_t *)p + 0x84) = b;
    *(uint32_t *)((uint8_t *)p + 0x88) = c;
    *(uint32_t *)((uint8_t *)p + 0x8c) = d;
    *(uint32_t *)((uint8_t *)p + 0x90) = e;
    *(uint32_t *)((uint8_t *)p + 0x94) = f;
    return p;
}
