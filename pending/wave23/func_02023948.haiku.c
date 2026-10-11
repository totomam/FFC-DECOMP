#include "ffc/types.h"

extern uint8_t data_020ad80c[];
extern void func_02023e0c(void *self);
extern void func_02024108(void *self);
extern void func_02024c80(void *self);
extern void func_020258a0(void *sub);
extern void func_02056844(void *self);

void *func_02023948(void *self)
{
    *(void **)self = (void *)data_020ad80c;
    func_02023e0c(self);
    func_02024108(self);
    func_02024c80(self);
    func_020258a0((uint8_t *)self + 0x194);
    func_02056844(self);
    return self;
}
