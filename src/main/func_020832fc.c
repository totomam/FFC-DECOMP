#include "ffc/types.h"

extern uint16_t data_02141390[];
extern void func_02082d4c(uint16_t v);

void func_020832fc(int32_t x)
{
    data_02141390[0] = (uint16_t)((data_02141390[0] | data_02141390[3]) & ~x);
    data_02141390[3] = (uint16_t)x;
    switch (x) {
    case 12:
        *(uint8_t *)0x04000243 = 0x8a;
        *(uint8_t *)0x04000242 = 0x82;
        break;
    case 4:
        *(uint8_t *)0x04000242 = 0x82;
        break;
    case 8:
        *(uint8_t *)0x04000243 = 0x82;
        break;
    case 0:
        break;
    default:
        break;
    }
    func_02082d4c(data_02141390[0]);
}
