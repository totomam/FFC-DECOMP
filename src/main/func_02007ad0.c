#include "ffc/types.h"

extern void func_0207accc(uint32_t v);
extern void func_02005f78(void *dst, const void *src, uint32_t n);

void func_02007ad0(uint8_t *p, uint32_t v)
{
    *(uint32_t *)(p + 4) = v;
    func_0207accc(v);
    func_02005f78(p + 0x48, p + 8, 0x10);
    p[0] = 1;
}
