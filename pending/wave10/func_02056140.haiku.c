#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02056140(uint8_t *a, uint8_t *b)
{
    func_02084ca4(b, a + 0xc, 4);
    func_02084ca4(b + 4, a + 0x10, 2);
    func_02084ca4(b + 6, a + 0x12, 0x16);
}
