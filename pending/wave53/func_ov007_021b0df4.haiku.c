#include "ffc/types.h"

extern int32_t func_02087460(void);
extern void func_020159c8(uint32_t a, uint32_t b);
extern uint32_t data_020b8e44;

void func_ov007_021b0df4(uint32_t a, uint32_t b)
{
    uint32_t r4 = 0x10f;

    switch (b) {
    case 0:
    case 1:
        break;
    case 2:
        r4 = 0x10f;
        break;
    case 3:
        if (func_02087460()) {
            r4 += 2;
        } else {
            r4 += 1;
        }
        break;
    case 4:
        if (func_02087460()) {
            r4 += 4;
        } else {
            r4 += 3;
        }
        break;
    case 5:
        if (func_02087460()) {
            r4 += 6;
        } else {
            r4 += 5;
        }
        break;
    case 6:
        if (func_02087460()) {
            r4 += 8;
        } else {
            r4 += 7;
        }
        break;
    case 7:
        r4 += 9;
        break;
    case 8:
        r4 += 10;
        break;
    case 9:
        r4 += 11;
        break;
    default:
        break;
    }

    func_020159c8(data_020b8e44, r4);
}
