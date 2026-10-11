#include "ffc/types.h"

extern uint8_t *data_ov000_0217096c;

int func_ov000_0216402c(uint32_t a, uint32_t b)
{
    if (data_ov000_0217096c == 0) {
        return 0;
    }
    *(uint32_t *)(data_ov000_0217096c + 0x704) = a;
    *(uint32_t *)(data_ov000_0217096c + 0x714) = b;
    return 1;
}
