#include "ffc/types.h"

extern void func_ov007_021ae9a4(void *p, uint32_t a, uint32_t b);

void func_ov007_021b7d20(void *p)
{
    func_ov007_021ae9a4(p, 0, *(uint32_t *)((uint8_t *)p + 0xe0));
}
