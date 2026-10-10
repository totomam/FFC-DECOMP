#include "ffc/types.h"

extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint32_t data_0213e1fc;

void *func_0207622c(void *p)
{
    data_0213e1fc = 0;
    func_02056db0(p);
    func_02056844(p);
    return p;
}
