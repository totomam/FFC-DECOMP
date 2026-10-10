#include "ffc/types.h"

extern uint32_t data_0213ec90;

uint32_t func_0207a7cc(uint32_t v)
{
    uint32_t old = data_0213ec90;
    data_0213ec90 = v;
    return old;
}
