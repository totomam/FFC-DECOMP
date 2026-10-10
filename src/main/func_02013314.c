#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_02013314(uint8_t *a, uint8_t *b)
{
    func_02084ca4(b, a + 0xc, 4);
    *(uint32_t *)(a + 0x10) = 0;
    func_02084ca4(b + 0x8, a + 0x14, 4);
    func_02084ca4(b + 0xc, a + 0x18, 4);
    func_02084ca4(b + 0x10, a + 0x1c, 4);
    func_02084ca4(b + 0x14, a + 0x20, 0x60);
}
