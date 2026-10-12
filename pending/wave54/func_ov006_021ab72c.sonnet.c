#include "ffc/types.h"

extern uint32_t func_ov006_021abea4(void);
extern void func_ov006_021b0600(uint32_t);
extern void func_ov006_021ab828(uint32_t);
extern void func_ov006_021ab874(uint32_t);
extern void func_ov006_021ac784(void);
extern uint32_t func_ov006_021ac840(void);
extern void func_ov006_021b11fc(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_ov006_021a64c8(void (*)(void));
extern uint32_t func_ov006_021ac374(uint32_t);
extern void func_ov006_021abf08(uint32_t, uint32_t, uint32_t);
extern void func_ov006_021ac0d0(void);
extern void func_ov006_021af680(void);
extern void func_ov006_021ac8bc(void);
extern void func_ov006_021aba04(void);
extern uint32_t data_ov006_021bc78c[];
extern uint8_t data_ov006_021b86a0[];

void func_ov006_021ab72c(uint32_t r4)
{
    if (func_ov006_021abea4() == 0) {
        func_ov006_021b0600(9);
        return;
    }

    switch (r4) {
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
        goto generic;
    case 2:
    case 3:
        func_ov006_021b0600(6);
        {
            func_ov006_021ab828(((r4 - 2) ^ 1) ? 1 : 0);
        }
        return;
    case 7:
    case 8:
        func_ov006_021b0600(6);
        {
            func_ov006_021ab874(((r4 - 7) ^ 1) ? 1 : 0);
        }
        return;
    default:
        goto generic;
    }

generic:
    {
        uint8_t *p = (uint8_t *)data_ov006_021bc78c[2];
        p[0x40] = (uint8_t)r4;
    }

    if (r4 - 11u <= 1u) {
        func_ov006_021ac784();
        if (func_ov006_021ac840() == 0) {
            func_ov006_021b0600(9);
            func_ov006_021b11fc(6, 1, 1, (uint32_t)-1, 0);
            func_ov006_021a64c8(func_ov006_021ac8bc);
            return;
        }
        if (r4 == 11) {
            func_ov006_021b0600(6);
        } else {
            func_ov006_021b0600(14);
        }
    } else if (r4 == 13) {
        func_ov006_021ac784();
        func_ov006_021b0600(7);
    } else {
        uint32_t r2;
        func_ov006_021b0600(6);
        r2 = func_ov006_021ac374(data_ov006_021b86a0[r4]);
        func_ov006_021abf08(0, 1, r2);
        func_ov006_021ac0d0();
    }

    func_ov006_021af680();
    func_ov006_021a64c8(func_ov006_021aba04);
}
