#include "ffc/types.h"

extern void func_ov001_0218c550(void *p);

void func_ov001_0218d79c(void *p)
{
    uint32_t v;
    func_ov001_0218c550(p);
    v = *(uint32_t *)((uint8_t *)p + 0xc);
    v &= ~0xffU;
    v |= 2;
    *(uint32_t *)((uint8_t *)p + 0xc) = v;
}
