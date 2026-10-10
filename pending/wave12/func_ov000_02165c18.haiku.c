#include "ffc/types.h"

extern uint32_t func_ov000_02165be0(uint32_t x);
extern uint32_t data_ov000_0216b428;

uint32_t func_ov000_02165c18(void)
{
    data_ov000_0216b428 = func_ov000_02165be0(data_ov000_0216b428);
    return data_ov000_0216b428;
}
