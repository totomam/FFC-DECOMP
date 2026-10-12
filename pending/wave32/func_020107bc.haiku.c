#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_020107bc(uint8_t *a, uint8_t *b)
{
    func_02084ca4(b, a + 0xc, 4);
    func_02084ca4(b + 4, a + 0x10, 4);
    func_02084ca4(b + 8, a + 0x14, 0x98);
    func_02084ca4(b + 0xa0, a + 0xac, 0x58);
    func_02084ca4(b + 0xf8, a + 0xac + 0x58, 0x1e0);
}
