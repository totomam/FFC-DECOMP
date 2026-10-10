#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(int x);

uint8_t func_ov000_0215286c(void)
{
    return *(func_ov000_02152ae4(1) + 0x23);
}
