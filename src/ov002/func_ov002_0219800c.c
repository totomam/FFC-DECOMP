#include "ffc/types.h"

extern void func_ov002_021c976c(void *p);
extern void func_02056844(void *p);

void *func_ov002_0219800c(void *p)
{
    uint32_t *q = (uint32_t *)p;
    q[0x43] = 0;
    q[0x44] = 0;
    q[0x45] = 0;
    func_ov002_021c976c(p);
    func_02056844(p);
    return p;
}
