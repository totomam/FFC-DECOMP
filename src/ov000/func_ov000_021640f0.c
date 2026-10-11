#include "ffc/types.h"

extern uint8_t *data_ov000_0217096c;

uint32_t func_ov000_021640f0(void)
{
    uint8_t *p = data_ov000_0217096c;
    if (p != 0) {
        return *(uint32_t *)(p + 0x724);
    }
    return 0;
}
