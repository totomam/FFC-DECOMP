#include "ffc/types.h"

extern void func_02056858(uint32_t);
extern void func_02056844(void *);
extern uint32_t data_020b23d8;

uint32_t *func_020744e4(uint32_t *self)
{
    self[0] = (uint32_t)&data_020b23d8;
    func_02056858(self[9]);
    self[9] = 0;
    func_02056844(self);
    return self;
}
