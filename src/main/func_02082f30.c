#include "ffc/types.h"

extern uint16_t data_02141390[];
extern void func_02082d4c(uint16_t v);

void func_02082f30(int32_t x) {
    uint16_t a = data_02141390[0];
    uint16_t b = data_02141390[2];
    data_02141390[0] = (uint16_t)((a | b) & ~x);
    data_02141390[2] = (uint16_t)x;
    switch (x) {
    case 3:
        *(volatile uint8_t *)0x04000241 = 0x8a;
        /* fallthrough */
    case 1:
        *(volatile uint8_t *)0x04000240 = 0x82;
        break;
    case 2:
        *(volatile uint8_t *)0x04000241 = 0x82;
        break;
    case 0x70:
        *(volatile uint8_t *)0x04000246 = 0x9a;
        /* fallthrough */
    case 0x30:
        *(volatile uint8_t *)0x04000245 = 0x92;
        /* fallthrough */
    case 0x10:
        *(volatile uint8_t *)0x04000244 = 0x82;
        break;
    case 0x50:
        *(volatile uint8_t *)0x04000246 = 0x92;
        *(volatile uint8_t *)0x04000244 = 0x82;
        break;
    case 0x60:
        *(volatile uint8_t *)0x04000246 = 0x8a;
        /* fallthrough */
    case 0x20:
        *(volatile uint8_t *)0x04000245 = 0x82;
        break;
    case 0x40:
        *(volatile uint8_t *)0x04000246 = 0x82;
        break;
    case 0:
        break;
    }
    func_02082d4c(data_02141390[0]);
}
