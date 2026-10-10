#include "ffc/types.h"
extern uint8_t data_020b2220[];
extern uint8_t data_020b226c[];
extern void func_02052538(void *p);
extern void func_02056db0(void *p);
void *func_02071b9c(void **self)
{
    *self = data_020b2220;
    func_02052538(data_020b226c);
    func_02056db0(self);
    return self;
}
