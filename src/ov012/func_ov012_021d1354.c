#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void func_ov012_021d13f4(void *p);
extern void func_02056db0(void *p);
extern uint8_t data_ov012_021d3d70[];

void *func_ov012_021d1354(void *p)
{
    uint8_t *self = (uint8_t *)p;
    *(void **)self = data_ov012_021d3d70;
    func_02056c4c(self + 0x14);
    func_ov012_021d13f4(self + 0x84);
    func_02056db0(self);
    return self;
}
