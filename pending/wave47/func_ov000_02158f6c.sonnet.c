#include "ffc/types.h"

extern uint32_t data_ov000_0217001c[];

uint32_t func_ov000_02158f6c(uint32_t *p0, uint32_t *p1) {
    uint32_t v;
    if (p0 != 0) {
        *p0 = data_ov000_0217001c[1];
    }
    if (p1 != 0) {
        switch (data_ov000_0217001c[0]) {
        case 2: case 3: case 4: case 5: case 8: v = 6; break;
        case 6: v = 3; break;
        case 7: v = 4; break;
        case 10: case 11: case 12: case 21: v = 1; break;
        case 1: case 9: v = 7; break;
        case 13: v = 5; break;
        case 14: case 16: case 18: v = 6; break;
        case 22: v = 2; break;
        case 15: case 17: case 19: case 20: v = 2; break;
        default: v = 0; break;
        }
        *p1 = v;
    }
    return data_ov000_0217001c[0];
}
