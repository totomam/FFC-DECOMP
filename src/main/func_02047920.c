#include "ffc/types.h"

extern void *func_02056c9c(void *p, uint32_t x);
extern uint8_t data_020af8dc[];

void *func_02047920(void *a, uint32_t b, uint16_t c, uint8_t d)
{
    uint8_t *p = (uint8_t *)a;
    func_02056c9c(a, 0);
    *(uint8_t **)p = data_020af8dc;
    *(uint32_t *)(p + 0x80) = b;
    *(uint16_t *)(p + 0x84) = c;
    *(uint8_t *)(p + 0x86) = d;
    *(uint8_t *)(p + 0x87) = 0;
    return a;
}
