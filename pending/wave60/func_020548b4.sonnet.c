#include "ffc/types.h"
extern uint32_t data_020aadd0, data_020b0660, data_020b0674;
extern void func_02054680(void *p);
void *func_020548b4(uint32_t *p)
{
    p[0] = (uint32_t)&data_020aadd0;
    p[3] &= ~0xff;
    func_02054680(p + 5);
    p[0] = (uint32_t)&data_020b0660;
    p[5] = (uint32_t)&data_020b0674;
    return p;
}
