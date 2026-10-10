#include "ffc/types.h"

extern uint32_t func_ov000_02154e3c(void);

int func_ov000_02154eb8(void)
{
    if ((func_ov000_02154e3c() & 32) == 32) {
        return 1;
    }
    return 0;
}
