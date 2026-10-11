#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov011_021cb4b0[];

void *func_ov011_021c5bdc(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, const uint8_t *src)
{
    uint32_t n;
    func_02056c9c(p, 0);
    *(uint8_t **)p = data_ov011_021cb4b0;
    *(uint32_t *)(p + 0x80) = b;
    *(uint32_t *)(p + 0x84) = a;
    *(uint32_t *)(p + 0x88) = c;
    *(uint32_t *)(p + 0xa4) = d;
    n = 20;
    do {
        p[0xa8 + 20 - n] = *src++;
    } while (--n);
    return p;
}
