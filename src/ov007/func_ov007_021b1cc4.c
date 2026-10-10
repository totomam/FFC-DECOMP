#include "ffc/types.h"

extern void func_ov007_021b1330(void *p);

void func_ov007_021b1cc4(void *p)
{
    uint32_t *q = *(uint32_t **)((uint8_t *)p + 0xbc);
    *q = 5;
    func_ov007_021b1330(p);
}
