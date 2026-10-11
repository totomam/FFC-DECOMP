#include "ffc/types.h"

extern void func_0206e8a0(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t data_020b1ca4[];
extern uint32_t data_020b1f98[];

void *func_0206eac8(void *a, uint32_t b, uint32_t c)
{
    func_0206e8a0(a, b, data_020b1ca4[6], c, 0);
    *(uint32_t **)a = data_020b1f98;
    return a;
}
