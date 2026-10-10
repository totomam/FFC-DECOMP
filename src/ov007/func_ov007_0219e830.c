#include "ffc/types.h"

extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint32_t data_ov007_021c9710;

void *func_ov007_0219e830(void *p)
{
    data_ov007_021c9710 = 0;
    func_02056db0(p);
    func_02056844(p);
    return p;
}
