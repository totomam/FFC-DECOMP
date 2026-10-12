#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(uint8_t *p);
extern void func_ov000_0214fbe4(int a);
extern void func_ov000_02150958(void);
extern int func_0208dc18(void (*f)(void), int a);
extern void func_ov000_0214fb84(int t, uint8_t *p, int c, int d);
extern void func_ov000_02150f48(void);

void func_ov000_02151088(uint8_t *p)
{
    uint16_t type;
    uint8_t *base;
    int zero;
    int r0;

    base = func_ov000_0214fa54(p);
    type = *(uint16_t *)(p + 2);
    switch (type) {
    case 0:
        if (base[0x12de] == 0xc) {
            func_ov000_0214fbe4(0xa);
            func_ov000_02150958();
            return;
        }
        zero = 0;
        r0 = func_0208dc18(func_ov000_02150f48, 0);
        if (r0 == 2) {
            return;
        }
        if (r0 == 3) {
            goto L_a;
        }
        if (r0 != 8) {
            goto L_b;
        }
        func_ov000_0214fbe4(0xc);
        func_ov000_0214fb84(1, base + 0x12e0, zero, 0x4fa);
        return;
L_a:
        func_ov000_0214fbe4(0xa);
        func_ov000_02150958();
        return;
L_b:
        func_ov000_0214fbe4(0xb);
        func_ov000_0214fb84(7, base + 0x12e0, zero, 0x506);
        return;
    case 1:
    case 3:
        func_ov000_0214fbe4(0xa);
        func_ov000_02150958();
        return;
    case 2:
    case 4:
    default:
        func_ov000_0214fbe4(0xb);
        func_ov000_0214fb84(7, base + 0x12e0, 0, 0x519);
        return;
    }
}
