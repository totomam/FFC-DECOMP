#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x, uint32_t y, uint8_t z);
extern uint8_t data_ov003_0217bc80[];

void *func_ov003_0217765c(uint8_t *p, uint32_t a, uint32_t b, uint8_t c)
{
    func_02056c9c(p, 0, b, c);
    *(uint8_t **)p = data_ov003_0217bc80;
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
    *(uint32_t *)(p + 0x88) = 0;
    p[0x8c] = c;
    return p;
}
