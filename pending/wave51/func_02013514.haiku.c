#include "ffc/types.h"

extern void *func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02013514(uint8_t *p, uint8_t *q)
{
    func_02084ca4(p + 0xc, q, 4);
    func_02084ca4(p + 0x10, q + 4, 4);
    func_02084ca4(p + 0x14, q + 8, 4);
    func_02084ca4(p + 0x18, q + 0xc, 0x18);
    func_02084ca4(p + 0x30, q + 0x24, 4);
    func_02084ca4(p + 0x34, q + 0x28, 4);
    func_02084ca4(p + 0x38, q + 0x2c, 1);
    func_02084ca4(p + 0x39, q + 0x2d, 1);
    func_02084ca4(p + 0x3c, q + 0x2e, 4);
}
