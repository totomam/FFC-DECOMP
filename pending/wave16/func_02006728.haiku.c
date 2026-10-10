#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_02007a0c(uint8_t *p, uint32_t a, uint32_t b);

void func_02006728(uint8_t *p, uint32_t a1, uint32_t a2)
{
    uint32_t v = *(uint32_t *)(p + 0xc);
    uint32_t r = func_0209a76c(a1 * v, 0x7f);
    func_02007a0c(p + 0x31d8, r, a2);
}
