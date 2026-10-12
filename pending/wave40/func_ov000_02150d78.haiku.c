#include "ffc/types.h"

extern void func_ov000_0214fbe4(int a);
extern void func_ov000_0214fb84(int a, int b, int c, int d);
extern void func_ov000_02150958(void);

void func_ov000_02150d78(void *p) {
    uint16_t v = ((uint16_t *)p)[1];
    switch (v) {
    case 0:
        func_ov000_0214fbe4(3);
        func_ov000_0214fb84(0, 0, 0, 0x3c5);
        return;
    case 1:
        func_ov000_02150958();
        return;
    case 2:
    case 3:
    case 4:
    default:
        func_ov000_0214fbe4(0xb);
        func_ov000_0214fb84(7, 0, 0, 0x3d5);
        return;
    }
}
