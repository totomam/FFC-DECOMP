#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t size);

void func_02055e44(uint8_t *a, uint8_t *b)
{
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x10, b + 4, 4);
}
