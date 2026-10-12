#include "ffc/types.h"

extern void *func_02084ca4(void *dst, const void *src, uint32_t size);

void func_02012b8c(uint8_t *a, uint8_t *b)
{
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x14, b + 8, 4);
    func_02084ca4(a + 0x18, b + 0xc, 0xc);
    func_02084ca4(a + 0x24, b + 0x18, 4);
    func_02084ca4(a + 0x28, b + 0x1c, 1);
}
