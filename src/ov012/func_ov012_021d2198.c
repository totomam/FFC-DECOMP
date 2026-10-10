#include "ffc/types.h"

extern void func_ov012_021d213c(void *p);

void func_ov012_021d2198(void *p)
{
    uint32_t val = *(uint32_t *)((uint8_t *)p + 0x114);
    uint32_t *dst = *(uint32_t **)((uint8_t *)p + 0x108);
    *dst = val;
    func_ov012_021d213c(p);
}
