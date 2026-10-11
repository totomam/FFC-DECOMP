#include "ffc/types.h"

extern void func_02058564(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_ov004_02148ee8(uint8_t *p, uint32_t idx)
{
    uint32_t *w = (uint32_t *)p;
    func_02058564(w[0x79], *(uint32_t *)(p + idx * 4 + 0x1d0), w[0x77], w[0x78], 0);
}
