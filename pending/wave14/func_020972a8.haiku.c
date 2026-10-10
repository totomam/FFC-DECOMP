#include "ffc/types.h"

extern uint8_t data_02144c24[];
extern uint8_t data_02144c27[];

uint8_t *func_020972a8(void)
{
    uint32_t v = *(uint32_t *)(data_02144c24 + 0x20);
    if (!(v & 1)) {
        *(uint32_t *)(data_02144c24 + 0x20) = v | 1;
    }
    return data_02144c27;
}
