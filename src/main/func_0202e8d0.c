#include "ffc/types.h"

extern void func_020532cc(void *a, uint32_t b, void *c, uint32_t d);

void func_0202e8d0(void *a0, uint8_t *a1, uint32_t a2, uint32_t a3)
{
    uint32_t off6 = *(uint32_t *)(a1 + 8);
    uint32_t off12 = *(uint32_t *)(a1 + 0xc);
    uint32_t v = *(uint32_t *)((a1 + off6) + a3 * 4);
    func_020532cc(a0, a2, a1 + off12, v);
}
