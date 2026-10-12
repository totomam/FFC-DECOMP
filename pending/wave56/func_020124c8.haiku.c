#include "ffc/types.h"

extern void func_02084ca4(void *a, void *b, uint32_t n);

void func_020124c8(uint8_t *dst, uint8_t *src)
{
    func_02084ca4(src, dst + 0xc, 4);
    *(uint32_t *)(dst + 0x10) = 0;
    func_02084ca4(src + 0x8, dst + 0x14, 4);
    func_02084ca4(src + 0xc, dst + 0x18, 4);
    func_02084ca4(src + 0x10, dst + 0x1c, 4);
    func_02084ca4(src + 0x14, dst + 0x20, 4);
    func_02084ca4(src + 0x18, dst + 0x24, 4);
    func_02084ca4(src + 0x1c, dst + 0x28, 4);
    func_02084ca4(src + 0x20, dst + 0x2c, 4);
    func_02084ca4(src + 0x24, dst + 0x30, 4);
    func_02084ca4(src + 0x28, dst + 0x34, 1);
    func_02084ca4(src + 0x29, dst + 0x35, 1);
    func_02084ca4(src + 0x2a, dst + 0x38, 4);
    func_02084ca4(src + 0x2e, dst + 0x3c, 4);
    func_02084ca4(src + 0x32, dst + 0x40, 1);
}
