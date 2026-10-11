#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_020afadc[];

void *func_02046d20(void *p, uint32_t a, uint32_t b, uint8_t c, uint8_t d)
{
    uint8_t *s = (uint8_t *)p;
    func_02056c9c(p, 0);
    *(uint8_t **)(s + 0) = data_020afadc;
    *(uint32_t *)(s + 0x80) = a;
    *(uint32_t *)(s + 0x84) = b;
    *(uint32_t *)(s + 0x88) = 0;
    *(uint8_t *)(s + 0x8c) = c;
    *(uint8_t *)(s + 0x8d) = d;
    *(uint32_t *)(s + 0x90) = 0;
    return p;
}
