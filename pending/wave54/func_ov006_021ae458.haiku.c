#include "ffc/types.h"

extern int func_ov006_021b3fb8(int);
extern int func_ov006_021a3778(void);
extern void func_ov006_021a3df0(void);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b392c(uint32_t);
extern void func_ov006_021b4734(int, int);
extern void func_ov006_021a64d4(int, int);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021a64fc(int, int);
extern void func_ov006_021ac904(int);
extern uint8_t data_ov006_021bc7b4[];
extern void func_ov006_021ad878(void);
extern void func_ov006_021ad50c(void);
extern void func_ov006_021a8c00(void);
extern void func_ov006_021ad1f0(void);
extern void func_ov006_021ab254(void);

void func_ov006_021ae458(void)
{
    uint8_t *r4;
    int sel;
    int one = 1;
    int zero = 0;

    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(0)) {
        return;
    }
    if (func_ov006_021a3778() == 0) {
        return;
    }
    func_ov006_021a3df0();
    func_ov006_021a3b28();
    r4 = data_ov006_021bc7b4;
    func_ov006_021b392c(*(uint32_t *)(r4 + 4));
    func_ov006_021b4734(one, one);
    func_ov006_021b4734(zero, 0x14);
    if (r4[2] == 0) {
        func_ov006_021a64d4(2, zero);
        func_ov006_021a64c8(func_ov006_021ad878);
        return;
    }
    sel = (int8_t)r4[one];
    switch (sel) {
    case 0:
        func_ov006_021a64d4(2, one);
        func_ov006_021a64c8(func_ov006_021ad50c);
        break;
    case 1:
        func_ov006_021a64d4(2, one);
        func_ov006_021a64c8(func_ov006_021a8c00);
        break;
    case 2:
        func_ov006_021a64d4(2, one);
        func_ov006_021a64c8(func_ov006_021ad1f0);
        break;
    case 3:
        func_ov006_021a64d4(2, zero);
        func_ov006_021a64fc(zero, zero);
        func_ov006_021ac904(one);
        func_ov006_021a64c8(func_ov006_021ab254);
        break;
    default:
        break;
    }
}
