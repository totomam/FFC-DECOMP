#include "ffc/types.h"

extern void func_02056844(void *p);

void *func_02061274(void *p)
{
    uint32_t *q = *(uint32_t **)((uint8_t *)p + 0x44);
    q[2]--;
    func_02056844(p);
    return p;
}
