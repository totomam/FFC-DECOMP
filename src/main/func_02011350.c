#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_02011350(uint8_t *a, uint8_t *b)
{
    func_02084ca4(a + 0x0c, b + 0x00, 4);
    func_02084ca4(a + 0x14, b + 0x08, 4);
    func_02084ca4(a + 0x18, b + 0x0c, 4);
    func_02084ca4(a + 0x1c, b + 0x10, 4);
    func_02084ca4(a + 0x20, b + 0x14, 4);
    func_02084ca4(a + 0x24, b + 0x18, 4);
    a += 0x28;
    b += 0x1c;
    func_02084ca4(a, b, 4);
}
