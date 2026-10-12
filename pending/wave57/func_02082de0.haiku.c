#include "ffc/types.h"

extern uint16_t data_02141390[];
extern void func_02082d4c(uint32_t v);

#define REG8(a) (*(volatile uint8_t *)(a))

void func_02082de0(int32_t x) {
    uint16_t *p = data_02141390;
    uint16_t v = (uint16_t)((p[0] | p[1]) & ~x);
    p[0] = v;
    p[1] = (uint16_t)x;

    switch (x) {
    case 1:  REG8(0x04000240) = 0x81; break;
    case 2:  REG8(0x04000241) = 0x81; break;
    case 3:  REG8(0x04000241) = 0x89; REG8(0x04000240) = 0x81; break;
    case 4:  REG8(0x04000242) = 0x81; break;
    case 5:  REG8(0x04000240) = 0x81; REG8(0x04000243) = 0x89; break;
    case 6:  REG8(0x04000242) = 0x89; REG8(0x04000241) = 0x81; break;
    case 7:  REG8(0x04000242) = 0x91; REG8(0x04000241) = 0x89; REG8(0x04000240) = 0x81; break;
    case 8:  REG8(0x04000243) = 0x81; break;
    case 9:  REG8(0x04000240) = 0x81; REG8(0x04000243) = 0x89; break;
    case 10: REG8(0x04000241) = 0x81; REG8(0x04000243) = 0x89; break;
    case 11: REG8(0x04000240) = 0x81; REG8(0x04000241) = 0x89; REG8(0x04000243) = 0x91; break;
    case 12: REG8(0x04000243) = 0x89; REG8(0x04000242) = 0x81; break;
    case 13: REG8(0x04000243) = 0x91; REG8(0x04000240) = 0x81; REG8(0x04000242) = 0x89; break;
    case 14: REG8(0x04000243) = 0x91; REG8(0x04000242) = 0x89; REG8(0x04000241) = 0x81; break;
    case 15: REG8(0x04000242) = 0x89; REG8(0x04000241) = 0x81; break;
    case 16: REG8(0x04000244) = 0x81; break;
    case 0x20: REG8(0x04000245) = 0x81; break;
    case 0x30: REG8(0x04000245) = 0x91; REG8(0x04000244) = 0x81; break;
    case 0x40: REG8(0x04000246) = 0x81; break;
    case 0x50: REG8(0x04000246) = 0x91; REG8(0x04000244) = 0x81; break;
    case 0x60: REG8(0x04000246) = 0x89; REG8(0x04000245) = 0x81; break;
    case 0x70: REG8(0x04000246) = 0x99; REG8(0x04000245) = 0x91; REG8(0x04000244) = 0x81; break;
    default: break;
    }

    func_02082d4c(p[0]);
}
