#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02010528(uint8_t *a, uint8_t *b)
{
    func_02084ca4(b, a + 0xc, 4);
    func_02084ca4(b + 4, a + 0x10, 0x18);
    func_02084ca4(b + 0x1c, a + 0x28, 1);
    func_02084ca4(b + 0x1d, a + 0x29, 1);
    func_02084ca4(b + 0x1e, a + 0x2c, 4);
}
