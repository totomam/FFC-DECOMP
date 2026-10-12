#include "ffc/types.h"

extern uint16_t data_02141390[];
extern void func_02082d4c(uint16_t v);

#define VRAMCNT(n) (((volatile uint8_t *)0x4000240)[n])

void func_020830f0(uint32_t a) {
    volatile uint16_t *dispcnt = (volatile uint16_t *)0x4000060;
    uint16_t v;

    v = (uint16_t)((data_02141390[0] | data_02141390[4]) & ~a);
    data_02141390[0] = v;
    data_02141390[4] = (uint16_t)a;

    if (a == 0) {
        *dispcnt = *dispcnt & 0xcffe;
    } else {
        *dispcnt = (uint16_t)((*dispcnt & ~0x3000) | 1);
        {
            switch (a) {
            case 5:
                VRAMCNT(0) = 0x83;
                VRAMCNT(2) = 0x8b;
                break;
            case 9:
                VRAMCNT(0) = 0x83;
                VRAMCNT(3) = 0x8b;
                break;
            case 10:
                VRAMCNT(1) = 0x83;
                VRAMCNT(3) = 0x8b;
                break;
            case 11:
                VRAMCNT(0) = 0x83;
                VRAMCNT(1) = 0x8b;
                VRAMCNT(3) = 0x93;
                break;
            case 13:
                VRAMCNT(0) = 0x83;
                VRAMCNT(2) = 0x8b;
                VRAMCNT(3) = 0x93;
                break;
            case 8:
                VRAMCNT(3) = 0x83;
                break;
            case 12:
                VRAMCNT(3) = 0x8b;
            case 4:
                VRAMCNT(2) = 0x83;
                break;
            case 14:
                VRAMCNT(3) = 0x93;
            case 6:
                VRAMCNT(2) = 0x8b;
            case 2:
                VRAMCNT(1) = 0x83;
                break;
            case 15:
                VRAMCNT(3) = 0x9b;
            case 7:
                VRAMCNT(2) = 0x93;
            case 3:
                VRAMCNT(1) = 0x8b;
            case 1:
                VRAMCNT(0) = 0x83;
                break;
            default:
                break;
            }
        }
    }
    func_02082d4c(data_02141390[0]);
}
