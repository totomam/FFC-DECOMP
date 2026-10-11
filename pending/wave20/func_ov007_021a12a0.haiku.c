#include "ffc/types.h"

extern void *func_020694ac(void *p, uint32_t a, uint32_t b);
extern void func_020695e4(void *p);
extern uint8_t data_ov007_021c3960[];

void *func_ov007_021a12a0(void *self, uint32_t arg)
{
    func_020694ac(self, 0, 0);
    *(void **)self = data_ov007_021c3960;
    *(uint32_t *)((uint8_t *)self + 0xd8) = arg;
    *((uint8_t *)self + 0xdc) = 1;
    func_020695e4(self);
    return self;
}
