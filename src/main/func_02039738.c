#include "ffc/types.h"
extern uint8_t data_020ae9e0[];
extern uint8_t data_021395dc[];
extern void func_0203981c(void *p);
extern void func_02056db0(void *p);
void *func_02039738(void **self)
{
    *self = data_020ae9e0;
    func_0203981c(data_021395dc);
    func_02056db0(self);
    return self;
}
