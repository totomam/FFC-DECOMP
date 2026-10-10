#include "ffc/types.h"

extern void func_ov007_021b3edc(void *p);

void func_ov007_021b3868(void *p)
{
    uint32_t *q = *(uint32_t **)((uint8_t *)p + 0xbc);
    *q = 0;
    func_ov007_021b3edc(p);
}
