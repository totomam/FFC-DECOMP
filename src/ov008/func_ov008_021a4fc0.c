#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov008_021a4fe4(void *p);

int func_ov008_021a4fc0(void *a0)
{
    uint32_t *p = (uint32_t *)a0;
    uint32_t x = p[0x46];
    uint64_t r = func_0209a76c(p[0x45] + x, x + 1);
    p[0x45] = (uint32_t)(r >> 32);
    func_ov008_021a4fe4(a0);
    return 1;
}
