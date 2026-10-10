#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov003_0217a7c4[];

void *func_ov003_02165254(void *p, uint32_t r1, uint16_t r2, uint32_t r3, uint32_t a5, uint32_t a6, uint16_t a7, uint32_t a8)
{
    func_02056c9c(p, 0);
    *(uint8_t **)p = data_ov003_0217a7c4;
    *(uint32_t *)((uint8_t *)p + 0x80) = r1;
    *(uint16_t *)((uint8_t *)p + 0x84) = r2;
    *(uint16_t *)((uint8_t *)p + 0x86) = a7;
    *(uint32_t *)((uint8_t *)p + 0x88) = a8;
    *(uint32_t *)((uint8_t *)p + 0x8c) = r3;
    *(uint32_t *)((uint8_t *)p + 0x90) = a5;
    *(uint32_t *)((uint8_t *)p + 0x94) = a6;
    return p;
}
