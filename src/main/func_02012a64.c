#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02012a64(uint8_t *a, uint8_t *b)
{
    func_02084ca4(a + 0xc, b + 0x0, 4);
    func_02084ca4(a + 0x14, b + 0x8, 4);
    func_02084ca4(a + 0x18, b + 0xc, 4);
    func_02084ca4(a + 0x1c, b + 0x10, 4);
    func_02084ca4(a + 0x20, b + 0x14, 4);
    func_02084ca4(a + 0x24, b + 0x18, 0x60);
    func_02084ca4(a + 0x84, b + 0x78, 1);
    func_02084ca4(a + 0x88, b + 0x79, 4);
}
