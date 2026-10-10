#include "ffc/types.h"

extern uint32_t data_ov000_02170af8;

uint32_t func_ov000_02165408(int32_t a, uint32_t b)
{
    if (a < 0) {
        ((int32_t *)&data_ov000_02170af8)[1] = a;
        return b;
    }
    return a;
}
