#include "ffc/types.h"

extern void func_ov003_02155508(void *p);
extern void func_0200b65c(void *p, uint32_t v);

void func_ov003_021550e8(uint8_t *a, uint32_t b, uint32_t c, uint16_t d, uint32_t e)
{
    func_ov003_02155508(a);
    func_0200b65c(a, b);
    func_0200b65c(a + 0xc, c);
    *(uint16_t *)(a + 0x2a) = d;
    *(uint16_t *)(a + 0x2c) = e;
}
