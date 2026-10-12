#include "ffc/types.h"

extern void func_0208b228(uint32_t v);
extern void func_021da900(uint32_t v);
extern uint32_t data_02143540[];

void func_0208b2c4(int unused, uint32_t x, int flag) {
    uint16_t a = (x & 0x7f00) >> 8;
    uint16_t b = x & 0xff;
    int call = 1;

    if (flag != 0) {
        func_0208b228((a == 0x61 || a == 0x62) ? 1 : 2);
        return;
    }

    switch (a) {
    case 0x61:
        if (data_02143540[15] != 0) {
            *(uint16_t *)data_02143540[15] = b;
        }
        /* fall */
    case 0x60:
        b = 0;
        break;
    case 0x62:
        break;
    case 0x63:
        data_02143540[2] = 1;
        break;
    case 0x70:
        switch (b) {
        case 0:
            func_021da900(1);
            *(uint32_t *)0x02fff684 = 1;
            break;
        case 4:
            if (*(void (**)(uint32_t))0x021dbcd0 != 0) {
                (*(void (**)(uint32_t))0x021dbcd0)(((uint32_t *)0x021dbcd0)[1]);
            }
            break;
        case 5:
            func_021da900(2);
            *(uint32_t *)0x02fff684 = 1;
            break;
        case 1:
        case 2:
        case 3:
        default:
            break;
        }
        call = 0;
        break;
    }

    if (call) {
        func_0208b228(b);
    }
}
