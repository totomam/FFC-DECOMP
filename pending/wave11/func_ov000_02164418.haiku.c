#include "ffc/types.h"

extern uint8_t *data_ov000_0217096c;

uint8_t *func_ov000_02164418(int32_t idx)
{
    return data_ov000_0217096c + idx * 0x38;
}
