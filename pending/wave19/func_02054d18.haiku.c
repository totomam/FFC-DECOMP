#include "ffc/types.h"

extern uint32_t data_02141510[];
extern uint32_t data_0213e098[];
extern uint32_t func_0205681c(uint32_t);
extern uint32_t func_02054d44(uint32_t, uint32_t);

uint32_t func_02054d18(void)
{
    uint32_t r;
    data_0213e098[1] = data_02141510[1];
    r = func_0205681c(0x61 << 2);
    if (r != 0) {
        r = func_02054d44(r, 1);
    }
    data_0213e098[0] = r;
    return r;
}
