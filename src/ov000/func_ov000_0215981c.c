#include "ffc/types.h"

extern uint8_t data_ov000_0217004c[];

uint32_t func_ov000_0215981c(void)
{
    uint32_t r = 0;
    uint32_t *p = *(uint32_t **)(data_ov000_0217004c + 0xc);
    if (p != 0 && *p == 1) {
        r = 1;
    }
    return r;
}
