#include "ffc/types.h"

extern void func_02056c9c(uint8_t *p, uint32_t x);
extern uint8_t data_ov003_0217b64c[];

uint8_t *func_ov003_02171bdc(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    func_02056c9c(p, 0);
    *(uint8_t **)p = data_ov003_0217b64c;
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x88) = b;
    *(uint32_t *)(p + 0x8c) = 0;
    *(uint32_t *)(p + 0x90) = c;
    *(uint32_t *)(p + 0x94) = 0;
    return p;
}
