#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov010_021c8eac(void *p);

void func_ov010_021c8e68(void *p0)
{
    uint32_t *f = (uint32_t *)p0;
    uint32_t v = f[0x110 / 4];
    uint32_t w = f[0x10c / 4];
    uint64_t r = func_0209a76c(w + v, v + 1);
    f[0x10c / 4] = (uint32_t)(r >> 32);
    func_ov010_021c8eac(p0);
}
