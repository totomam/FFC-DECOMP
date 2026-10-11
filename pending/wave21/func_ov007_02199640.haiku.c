#include "ffc/types.h"

extern void func_02069434(void *obj, int arg);
extern void func_020695e4(void *obj);
extern uint32_t data_ov007_021c26b4[];

void *func_ov007_02199640(void *param_a, uint32_t param_b)
{
    uint8_t *self;
    self = (uint8_t *)param_a;
    func_02069434(param_a, 0);
    *(uint32_t **)self = data_ov007_021c26b4;
    *(uint32_t *)(self + 0xcc) = param_b;
    *(uint8_t *)(self + 0xd0) = 1;
    func_020695e4(param_a);
    return param_a;
}
