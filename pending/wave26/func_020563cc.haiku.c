#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t size);

void func_020563cc(uint8_t *dst, uint8_t *src)
{
    func_02084ca4(dst + 0xc, src, 4);
    func_02084ca4(dst + 0x10, src + 4, 2);
    func_02084ca4(dst + 0x12, src + 6, 0x18);
    func_02084ca4(dst + 0x2a, src + 0x1e, 6);
}
