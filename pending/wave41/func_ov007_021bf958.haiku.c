#include "ffc/types.h"

extern int func_ov000_02159000(void);
extern uint32_t func_ov000_02158f58();
extern void func_ov007_021bf91c();
extern uint8_t data_ov007_021c8840[];
extern uint32_t data_ov007_021c9bac[];
extern uint8_t data_ov007_021c8704[];
extern uint8_t data_ov007_021c8718[];
extern uint8_t data_ov007_021c8854[];

int func_ov007_021bf958(int *p)
{
    uint32_t r;

    if (func_ov000_02159000() != 0) {
        r = func_ov000_02158f58(0);
        func_ov007_021bf91c(0x568, data_ov007_021c8840, r);
        if (p != 0) {
            *p = 0x16;
        }
        return 1;
    }

    switch (data_ov007_021c9bac[2]) {
    case 0:
        func_ov007_021bf91c(0x57 << 4, data_ov007_021c8704);
        if (p != 0) {
            *p = 0x13;
        }
        return 1;
    case 2:
        func_ov007_021bf91c(0x575, data_ov007_021c8718);
        if (p != 0) {
            *p = 0x14;
        }
        return 1;
    case 3:
        func_ov007_021bf91c(0x57a, data_ov007_021c8854);
        if (p != 0) {
            *p = 0x17;
        }
        return 1;
    default:
        return 0;
    }
}
