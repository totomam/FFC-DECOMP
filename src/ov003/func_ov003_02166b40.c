#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201d02c(uint32_t, uint32_t, uint32_t);

void func_ov003_02166b40(uint32_t *p)
{
    func_0201d02c(data_020b93b8, p[6], p[7]);
    p[3] = (p[3] & ~0xffu) | 2;
}
