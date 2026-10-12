#include "ffc/types.h"

typedef struct Inner {
    uint32_t a00;
    uint32_t a04;
    uint32_t a08;
    uint32_t a0c[2];
    uint32_t a14;
    uint32_t a18[8];
    uint32_t a38;
    uint32_t a3c;
    uint8_t a40;
} Inner;

extern int func_ov006_021b3fb8(int);
extern void func_ov006_021b578c(int, uint32_t);
extern void func_ov006_021b51a8(uint32_t);
extern void func_ov006_021af628(void);
extern void func_ov006_021b4488(int);
extern void func_ov006_021a3df0(void);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021af484(void);
extern void func_ov006_021b392c(uint32_t);
extern void func_ov006_021a3b88(void *, void (*)(void));
extern void func_ov006_021b4734(int, int);
extern void func_ov006_021a64fc(int, int);
extern void func_ov006_021a64d4(int, int);
extern uint8_t *func_ov006_021afd28(void);
extern uint8_t func_ov000_02158790(uint8_t *);
extern void func_02084b2c(uint8_t *, uint32_t, uint32_t);
extern void func_ov006_021b002c(uint8_t);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021b49fc(uint32_t *);
extern uint32_t data_ov006_021bc78c[];
#define PP ((Inner *)data_ov006_021bc78c[2])
extern uint32_t data_ov006_021b9644[];
extern uint32_t data_ov006_021bc794[];
extern void func_0208243c(void);
extern void func_ov006_021a9f00(void);
extern void func_ov006_021aa62c(void);
extern void func_ov006_021ae610(void);
extern void func_ov006_021ac910(void);
extern void func_ov006_021ad878(void);
extern void func_ov006_021ae0c4(void);

void func_ov006_021aba50(void)
{
    uint8_t st;
    int i;

    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }

    func_ov006_021b578c(0, PP->a00);
    func_ov006_021b578c(1, PP->a3c);
    for (i = 0; i < 7; i++) {
        func_ov006_021b51a8(PP->a18[i]);
    }
    if (PP->a18[7] != 0) {
        func_ov006_021b51a8(PP->a18[7]);
    }
    func_ov006_021af628();
    func_ov006_021b4488(0);
    func_ov006_021a3df0();
    if (PP->a40 != 0xc) {
        func_ov006_021a3b28();
    }
    func_ov006_021af484();
    func_ov006_021b392c(PP->a08);
    for (i = 0; i < 2; i++) {
        func_ov006_021b392c(PP->a0c[i]);
    }
    func_ov006_021a3b88(data_ov006_021b9644, func_0208243c);
    func_ov006_021b4734(1, 1);
    func_ov006_021b4734(0, 0x1d);
    *(volatile uint32_t *)0x4000010 = 0;
    *(volatile uint32_t *)0x4000018 = 0;
    {
        volatile uint16_t *r = (volatile uint16_t *)0x400000C;
        *r = (uint16_t)((*r & 0x43) | 0xE10);
    }

    st = PP->a40;
    switch (st) {
    case 0:
    case 1:
        func_ov006_021a64fc(st, 0);
        func_ov006_021a64d4(2, 0);
        func_ov006_021a64c8(func_ov006_021a9f00);
        break;
    case 4:
    case 5:
    case 6:
    case 9:
    case 10:
        {
            int r4 = st - 4;
            if (st >= 9) {
                r4 -= 2;
            }
            func_ov006_021a64d4(2, 0);
            func_ov006_021a64fc(r4, 0);
            func_ov006_021a64c8(func_ov006_021aa62c);
        }
        break;
    case 11:
        {
            uint8_t *s = func_ov006_021afd28();
            s[0xd0] = func_ov000_02158790(s + 0xf0);
            if (s[0xf5] != 0) {
                func_02084b2c(s + 0xc0, 0, 4);
                func_02084b2c(s + 0xc4, 0, 4);
                func_02084b2c(s + 0xf0, 0, 4);
                s[0xd0] = 0;
            }
            if (s[0xf6] != 0) {
                func_02084b2c(s + 0xc8, 0, 8);
            }
            func_ov006_021a64d4(2, 0);
            func_ov006_021a64fc(0, 0);
            func_ov006_021a64c8(func_ov006_021ae610);
        }
        break;
    case 12:
        func_ov006_021a64d4(0, 0);
        func_ov006_021a64c8(func_ov006_021ac910);
        break;
    case 13:
        if (((uint8_t *)data_ov006_021bc78c)[1] == 0) {
            func_ov006_021a64d4(2, 1);
            func_ov006_021a64c8(func_ov006_021ad878);
        } else {
            uint8_t *s = func_ov006_021afd28();
            func_ov006_021b002c(s[0xf4]);
            func_ov006_021a64d4(0, 1);
            func_ov006_021a64c8(func_ov006_021ae0c4);
        }
        break;
    default:
        break;
    }

    func_ov006_021b49fc(data_ov006_021bc794);
}
