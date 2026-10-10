#include "ffc/types.h"

extern uint32_t func_0203608c(void);

uint32_t func_ov007_021aee78(void)
{
    uint32_t r = func_0203608c();
    if (r < 1) {
        r = 1;
    }
    if (r > 0x14) {
        r = 0x14;
    }
    return r;
}
