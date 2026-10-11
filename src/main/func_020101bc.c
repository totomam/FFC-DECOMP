#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_020101bc(uint8_t *p0, uint8_t *p1)
{
    uint32_t n = 4;
    func_02084ca4(p1, p0 + 0xc, n);
    func_02084ca4(p1 + 4, p0 + 0x10, n << 8);
}
