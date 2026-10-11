#include "ffc/types.h"

extern void func_0207ad94(uint32_t a);
extern int func_0207ae20(uint32_t a, uint32_t b);
extern void func_02005fb0(void *p, uint32_t b);

uint32_t func_02007a60(uint8_t *p, uint32_t x)
{
    uint32_t r;
    func_0207ad94(*(uint32_t *)(p + 4));
    r = (func_0207ae20(x, *(uint32_t *)(p + 4)) != 0);
    func_02005fb0(p + 0x48, x);
    func_0207ad94(*(uint32_t *)(p + 4));
    return r;
}
