#include "ffc/types.h"

extern void func_02056844(void *p);

void *func_02060988(void *p)
{
    uint32_t *q = *(uint32_t **)((uint8_t *)p + 0x44);
    q[4]--;
    func_02056844(p);
    return p;
}
