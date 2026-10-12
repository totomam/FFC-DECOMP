#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t v);
extern uint32_t data_ov003_0217a3c4;

uint32_t func_ov003_02160ab0(uint32_t a, volatile uint32_t b, volatile uint32_t c, uint32_t d, volatile uint32_t e, volatile uint16_t f)
{
    uint8_t *p = (uint8_t *)func_0205681c(0x9c);
    if (p != 0) {
        func_02056c9c(p, 0);
        uint32_t tb = b;
        *(uint32_t *)(p + 0x00) = (uint32_t)&data_ov003_0217a3c4;
        *(uint32_t *)(p + 0x84) = a;
        *(uint32_t *)(p + 0x88) = tb;
        *(uint32_t *)(p + 0x8c) = c;
        *(uint32_t *)(p + 0x90) = d;
        *(uint32_t *)(p + 0x94) = e;
        *(uint16_t *)(p + 0x98) = f;
    }
    return (uint32_t)p;
}
