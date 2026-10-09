#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_02011b04(uint8_t *self, void *p)
{
    func_02084ca4(p, self + 0xc, 4);
    *(uint32_t *)(self + 0x10) = 0;
}
