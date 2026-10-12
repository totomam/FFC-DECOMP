#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern int func_02019e04(uint32_t v);
extern int func_020198e8(uint32_t a, int b);

int func_ov003_021540c4(int x, uint8_t *p) {
    switch (x) {
    case 2:
        if (func_020198e8(data_020b8e44, func_02019e04(data_020b8e44)) == 2) break;
        return 0;
    case 3:
        if (func_020198e8(data_020b8e44, func_02019e04(data_020b8e44)) == 3) break;
        return 0;
    case 4:
        if (func_020198e8(data_020b8e44, func_02019e04(data_020b8e44)) == 4) break;
        return 0;
    case 5:
        if (func_020198e8(data_020b8e44, func_02019e04(data_020b8e44)) == 5) break;
        return 0;
    case 6:
        if (func_020198e8(data_020b8e44, func_02019e04(data_020b8e44)) == 6) break;
        return 0;
    case 7:
        if (p[8] == 1) break;
        return 0;
    case 8:
        if (p[8] == 2) break;
        return 0;
    case 9:
        if (p[8] == 3) break;
        return 0;
    case 10:
        if (p[8] == 4) break;
        return 0;
    default:
        break;
    }
    return 1;
}
