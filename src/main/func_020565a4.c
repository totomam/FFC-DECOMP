#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_020565a4(uint8_t *p, uint8_t *q)
{
    func_02084ca4(p + 0xc, q, 4);
    func_02084ca4(p + 0x10, q + 4, 4);
    func_02084ca4(p + 0x14, q + 8, 0x70);
    func_02084ca4(p + 0x84, q + 0x78, 6);
}
