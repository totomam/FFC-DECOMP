#include "ffc/types.h"

extern uint32_t func_ov000_0214ee64(void);
extern uint32_t func_ov000_02165408(uint32_t a, int32_t b);

uint32_t func_ov000_02165474(void)
{
    return func_ov000_02165408(func_ov000_0214ee64(), -1);
}
