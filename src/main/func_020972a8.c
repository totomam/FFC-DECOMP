#include "ffc/types.h"

extern uint32_t data_02144c24[];
extern uint8_t data_02144c27[];

uint8_t *func_020972a8(void)
{
    if (!(data_02144c24[8] & 1)) {
        data_02144c24[8] |= 1;
    }
    return data_02144c27;
}
