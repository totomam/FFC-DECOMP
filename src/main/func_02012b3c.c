#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_02012b3c(uint8_t *a, uint8_t *b)
{
    func_02084ca4(b, a + 0xc, 4);
    *(uint32_t *)(a + 0x10) = 0;
    func_02084ca4(b + 0x8, a + 0x14, 4);
    func_02084ca4(b + 0xc, a + 0x18, 0xc);
    func_02084ca4(b + 0x18, a + 0x24, 4);
    func_02084ca4(b + 0x1c, a + 0x28, 1);
}
