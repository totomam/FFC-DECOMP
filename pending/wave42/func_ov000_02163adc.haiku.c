#include "ffc/types.h"

extern uint8_t data_ov000_0216b140[];
extern uint8_t data_ov000_0216b160[];
extern uint8_t data_ov000_0216b180[];
extern uint8_t data_ov000_0216b1a4[];
extern uint8_t data_ov000_0216b1c4[];
extern uint8_t data_ov000_0216b1f8[];
extern uint8_t data_ov000_0216b23c[];
extern uint8_t data_ov000_0216b268[];
extern uint8_t data_ov000_0216b29c[];
extern uint8_t data_ov000_0216b2b8[];

void *func_ov000_02163adc(uint32_t x)
{
    switch (x - 16) {
    case 0:
        return data_ov000_0216b140;
    case 1:
        return data_ov000_0216b160;
    case 2:
        return data_ov000_0216b180;
    case 3:
        return data_ov000_0216b1a4;
    case 4:
        return data_ov000_0216b1c4;
    case 5:
        return data_ov000_0216b1f8;
    case 6:
        return data_ov000_0216b23c;
    case 7:
        return data_ov000_0216b268;
    case 8:
        return data_ov000_0216b29c;
    default:
        return data_ov000_0216b2b8;
    }
}
