#include "ffc/types.h"

extern uint8_t data_020afac0[];
extern void func_02056c4c(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_02046f78(void *p)
{
    uint32_t *self = (uint32_t *)p;
    *self = (uint32_t)data_020afac0;
    func_02056c4c((uint8_t *)self + 0x14);
    func_02056db0(self);
    func_02056844(self);
    return self;
}
