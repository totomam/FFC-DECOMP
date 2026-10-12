#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02010208(uint8_t *a, uint8_t *b)
{
    func_02084ca4(b + 0x00, a + 0x0c, 4);
    func_02084ca4(b + 0x04, a + 0x10, 4);
    func_02084ca4(b + 0x08, a + 0x14, 4);
    func_02084ca4(b + 0x0c, a + 0x18, 4);
    func_02084ca4(b + 0x10, a + 0x1c, 4);
    func_02084ca4(b + 0x14, a + 0x20, 0x40);
    func_02084ca4(b + 0x54, a + 0x60, 4);
}
