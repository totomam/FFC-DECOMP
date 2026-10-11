#include "ffc/types.h"

extern uint32_t data_ov009_021afd1c;
extern void func_02061344(uint32_t x);
extern void *func_020059cc(void *object);
extern void func_02056db0(void *object);

void *func_ov009_0219aa80(void *param_1)
{
    uint8_t *p = (uint8_t *)param_1;
    *(uint32_t *)p = (uint32_t)&data_ov009_021afd1c;
    func_02061344(*(uint32_t *)(p + 0x98));
    func_020059cc(p + 0x88);
    func_02056db0(p);
    return p;
}
