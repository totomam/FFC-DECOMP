#include "ffc/types.h"

extern uint8_t data_ov000_0216ff6c[];

uint32_t func_ov000_02157338(void)
{
    uint8_t *p = *(uint8_t **)(data_ov000_0216ff6c + 4);
    return *(uint32_t *)(p + 0x1004);
}
