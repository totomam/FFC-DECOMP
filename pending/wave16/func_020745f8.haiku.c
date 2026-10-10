#include "ffc/types.h"

extern void func_02056858(uint32_t);
extern void func_02056844(void *);
extern uint32_t data_020b23f0;

uint32_t *func_020745f8(uint32_t *self)
{
    self[0] = (uint32_t)&data_020b23f0;
    func_02056858(self[10]);
    self[10] = 0;
    func_02056844(self);
    return self;
}
