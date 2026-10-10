#include "ffc/types.h"

extern uint32_t data_0213e1fc;
extern void func_02056db0(uint32_t a);

uint32_t func_02076214(uint32_t a)
{
    data_0213e1fc = 0;
    func_02056db0(a);
    return a;
}
