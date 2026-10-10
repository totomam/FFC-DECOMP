#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t size);

void func_0205616c(uint8_t *p, uint8_t *src)
{
    func_02084ca4(p + 0xc, src, 4);
    func_02084ca4(p + 0x10, src + 4, 2);
    func_02084ca4(p + 0x12, src + 6, 0x16);
}
