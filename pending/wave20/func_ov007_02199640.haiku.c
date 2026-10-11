#include "ffc/types.h"

extern void func_02069434(void *self, uint32_t zero);
extern void func_020695e4(void *self);
extern uint8_t data_ov007_021c26b4[];

void *func_ov007_02199640(void *self, uint32_t arg)
{
    func_02069434(self, 0);
    *(uint32_t *)self = (uint32_t)data_ov007_021c26b4;
    *(uint32_t *)((uint8_t *)self + 0xcc) = arg;
    *((uint8_t *)self + 0xd0) = 1;
    func_020695e4(self);
    return self;
}
