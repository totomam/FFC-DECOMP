#include "ffc/types.h"

extern volatile uint16_t data_02141390[];
extern void func_02082d4c(uint16_t v);

void func_020831ec(int32_t x)
{
    data_02141390[0] = (data_02141390[0] | data_02141390[5]) & ~x;
    data_02141390[5] = x;

    switch (x) {
    case 0x60:
        *(volatile uint8_t *)0x4000246 = 0x8b;
    case 0x20:
        *(volatile uint8_t *)0x4000245 = 0x83;
        break;
    case 0x40:
        *(volatile uint8_t *)0x4000246 = 0x83;
        break;
    case 0x70:
        *(volatile uint8_t *)0x4000246 = 0x9b;
    case 0x30:
        *(volatile uint8_t *)0x4000245 = 0x93;
    case 0x10:
        *(volatile uint8_t *)0x4000244 = 0x83;
        break;
    case 0:
        break;
    }
    func_02082d4c(data_02141390[0]);
}
