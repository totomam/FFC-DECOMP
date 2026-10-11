#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02011410(uint8_t *a, uint8_t *b)
{
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x14, b + 8, 0x18);
    func_02084ca4(a + 0x2c, b + 0x20, 1);
}
