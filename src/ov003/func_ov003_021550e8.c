#include "ffc/types.h"

extern void func_ov003_02155508(void *p);
extern void func_0200b65c(void *p, uint32_t v);

void func_ov003_021550e8(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    func_ov003_02155508(p);
    func_0200b65c(p, a);
    func_0200b65c((uint8_t *)p + 0xc, b);
    *(uint16_t *)((uint8_t *)p + 0x2a) = (uint16_t)c;
    *(uint16_t *)((uint8_t *)p + 0x2c) = (uint16_t)d;
}
