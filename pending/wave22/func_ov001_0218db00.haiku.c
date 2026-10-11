#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern uint8_t data_ov001_0219495c[];

void *func_ov001_0218db00(void *p, uint32_t a, uint32_t b, uint32_t c, uint8_t d)
{
    uint8_t *s = (uint8_t *)p;
    func_02056c9c(p, 0);
    *(uint8_t **)s = data_ov001_0219495c;
    *(uint32_t *)(s + 0x80) = a;
    *(uint32_t *)(s + 0x84) = b;
    *(uint32_t *)(s + 0x88) = c;
    *(uint8_t *)(s + 0x8c) = d;
    return p;
}
