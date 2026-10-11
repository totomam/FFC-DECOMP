#include "ffc/types.h"

extern int func_ov000_0214ec88(void *p, uint32_t v);
extern uint32_t data_ov000_0216e084;

int func_ov000_0214ece8(uint32_t v)
{
    if (func_ov000_0214ec88(&data_ov000_0216e084, v)) {
        return 1;
    }
    return 0;
}
