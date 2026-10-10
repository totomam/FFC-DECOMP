#include "ffc/types.h"

extern uint8_t data_ov000_0216e26c[];

uint8_t func_ov000_02152b68(void)
{
    uint8_t *p = *(uint8_t **)(data_ov000_0216e26c + 0xc);
    return p ? p[9] : 0;
}
