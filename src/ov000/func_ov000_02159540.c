#include "ffc/types.h"

extern uint8_t data_ov000_0217004c[];

int func_ov000_02159540(void)
{
    uint8_t *p = *(uint8_t **)(data_ov000_0217004c + 0xc);
    if (p != 0) {
        if ((uint8_t)(p[0x1e] + 0xff) <= 1) {
            return 0;
        }
    }
    return 1;
}
