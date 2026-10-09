#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_02071eac(uint8_t *a, uint8_t *b)
{
    func_02084ca4(b, a + 8, 64);
}
