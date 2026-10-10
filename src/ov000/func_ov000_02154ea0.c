#include "ffc/types.h"

extern uint32_t func_ov000_02154e3c(void);

int func_ov000_02154ea0(void)
{
    if ((func_ov000_02154e3c() & 8) == 8) {
        return 1;
    }
    return 0;
}
