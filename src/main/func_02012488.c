#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02012488(uint8_t *a, uint8_t *b)
{
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x14, b + 8, 0x5c);
    func_02084ca4(a + 0x70, b + 0x64, 4);
    func_02084ca4(a + 0x74, b + 0x68, 0xc);
}
