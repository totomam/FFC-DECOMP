#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_020131d0(uint8_t *a, uint8_t *b)
{
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x14, b + 8, 4);
}
