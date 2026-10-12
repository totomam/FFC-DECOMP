#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02013298(uint8_t *a, uint8_t *b)
{
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x10, b + 4, 4);
    func_02084ca4(a + 0x14, b + 8, 0x20);
    func_02084ca4(a + 0x34, b + 0x28, 4);
    func_02084ca4(a + 0x38, b + 0x2c, 4);
    func_02084ca4(a + 0x3c, b + 0x30, 1);
}
