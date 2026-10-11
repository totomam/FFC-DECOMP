#include "ffc/types.h"

extern void func_ov003_0215e54c(uint8_t *p);
extern void func_ov003_0215e200(uint8_t *p, uint32_t a, uint32_t b, uint32_t c);

void func_ov003_0215e48c(uint8_t *p, int unused, uint32_t a, uint32_t b)
{
    func_ov003_0215e54c(p);
    func_ov003_0215e200(p, 0, 0, 0);
    p[0xdd] = 1;
    p[0xe5] = 1;
    *(uint32_t *)(p + 0x164) = a;
    *(uint32_t *)(p + 0x168) = b;
    *(uint32_t *)(p + 0x16c) = 0;
}
