#include "ffc/types.h"

extern void func_0208359c(void);
extern void func_02056844(void *p);
extern uint8_t data_ov014_02155a5c[];

void *func_ov014_02147064(void *self)
{
    *(void **)self = data_ov014_02155a5c;
    func_0208359c();
    func_02056844(self);
    return self;
}
