#include "ffc/types.h"

extern uint8_t data_ov000_0217022c[];

uint8_t func_ov000_0216181c(void)
{
    uint8_t i = 0;
    do {
        if (data_ov000_0217022c[i * 12] == 0) {
            return (uint8_t)(i + 100);
        }
        i = (uint8_t)(i + 1);
    } while (i < 0x9a);
    return 0;
}
