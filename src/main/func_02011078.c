#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_02011078(uint8_t *a0, uint8_t *a1)
{
    func_02084ca4(a1, a0 + 0xc, 4);
    *(uint32_t *)(a0 + 0x10) = 0;
    func_02084ca4(a1 + 8, a0 + 0x14, 4);
}
