#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint16_t h4;
    uint16_t h6;
    uint16_t h8;
    uint16_t h10;
    uint32_t w12;
} S;

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov003_0217a80c[];

void *func_ov003_02164834(void *this, uint32_t a1, uint16_t a2, uint16_t a3, S s)
{
    uint8_t *p = (uint8_t *)this;
    func_02056c9c(this, 0);
    *(uint8_t **)p = data_ov003_0217a80c;
    *(uint32_t *)(p + 0x80) = a1;
    *(uint16_t *)(p + 0x84) = a2;
    *(uint16_t *)(p + 0x86) = a3;
    *(uint16_t *)(p + 0x88) = s.h4;
    *(uint16_t *)(p + 0x8a) = s.h8;
    *(uint32_t *)(p + 0x8c) = s.a;
    *(uint32_t *)(p + 0x90) = s.w12;
    return this;
}
