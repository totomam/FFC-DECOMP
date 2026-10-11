#include "ffc/types.h"

extern void func_020695d0(void *p);
extern void func_02056844(void *p);

void *func_ov007_021ba040(void *a)
{
    uint8_t v = *((uint8_t *)a + 0x144);
    uint32_t *q = *(uint32_t **)((uint8_t *)a + 0x130);
    *q = v;
    func_020695d0(a);
    func_02056844(a);
    return a;
}
