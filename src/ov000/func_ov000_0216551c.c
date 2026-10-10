#include "ffc/types.h"

extern uint32_t func_ov000_0214edf0(void);
extern uint32_t func_ov000_02165408(uint32_t a, int32_t b);

uint32_t func_ov000_0216551c(void)
{
    return func_ov000_02165408(func_ov000_0214edf0(), -1);
}
