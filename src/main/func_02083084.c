#include "ffc/types.h"

extern uint16_t data_02141390[];
extern void func_02082d4c(uint16_t v);

void func_02083084(uint16_t x)
{
    data_02141390[0] = (uint16_t)((data_02141390[0] | data_02141390[8]) & ~x);
    data_02141390[8] = x;

    switch (x) {
    case 0x20:
        *(uint32_t *)0x04000000 |= 0x04000000 << 5;
        *(uint8_t *)0x04000245 = 0x85;
        break;
    case 0x40:
        *(uint32_t *)0x04000000 |= 0x04000000 << 5;
        *(uint8_t *)0x04000246 = 0x85;
        break;
    case 0:
        *(uint32_t *)0x04000000 &= 0x7fffffff;
        break;
    }

    func_02082d4c(data_02141390[0]);
}
