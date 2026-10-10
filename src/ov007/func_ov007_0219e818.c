#include "ffc/types.h"

extern uint32_t data_ov007_021c9710;
extern void func_02056db0(uint32_t a);

uint32_t func_ov007_0219e818(uint32_t a)
{
    data_ov007_021c9710 = 0;
    func_02056db0(a);
    return a;
}
