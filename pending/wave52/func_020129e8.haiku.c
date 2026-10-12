#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_020129e8(uint8_t *dst, uint8_t *src)
{
    func_02084ca4(src, dst + 0xc, 4);
    *(uint32_t *)(dst + 0x10) = 0;
    func_02084ca4(src + 0x8, dst + 0x14, 4);
    func_02084ca4(src + 0xc, dst + 0x18, 4);
    func_02084ca4(src + 0x10, dst + 0x1c, 4);
    func_02084ca4(src + 0x14, dst + 0x20, 4);
    func_02084ca4(src + 0x18, dst + 0x24, 0x60);
    func_02084ca4(src + 0x78, dst + 0x84, 1);
    func_02084ca4(src + 0x79, dst + 0x88, 4);
}
