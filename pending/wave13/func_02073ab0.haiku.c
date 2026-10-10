#include "ffc/types.h"

extern uint32_t data_0213e188[];
extern void func_02056844(uint32_t a);

uint32_t func_02073ab0(uint32_t a)
{
    data_0213e188[6] = 0;
    func_02056844(a);
    return a;
}
