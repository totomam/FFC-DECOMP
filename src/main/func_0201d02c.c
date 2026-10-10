#include "ffc/types.h"

extern void func_02036cb4(uint8_t *p, uint32_t v);

void func_0201d02c(uint8_t *self, uint32_t idx, uint32_t val)
{
    uint8_t *base = *(uint8_t **)(self + 0x40);
    func_02036cb4(base + (idx << 4), val);
}
