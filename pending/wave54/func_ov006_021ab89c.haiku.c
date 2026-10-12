#include "ffc/types.h"

typedef void (*FnPtr)(void);

typedef struct State {
    uint8_t _p0[0x38];
    uint32_t f38;
    uint8_t _p1[0x41 - 0x3c];
    uint8_t f41;
    uint8_t _p2[0x45 - 0x42];
    uint8_t f45;
    uint8_t f46;
} State;

typedef struct Global {
    uint8_t _p0[4];
    uint16_t f4;
    uint8_t _p1[2];
    State *f8;
} Global;

extern Global data_ov006_021bc78c;
extern uint32_t func_ov006_021af65c(void);
extern void func_ov006_021a3df0(void);
extern uint32_t func_ov006_021af650(void);
extern uint32_t func_0209a76c(uint32_t, uint32_t);
extern void func_ov006_021abc4c(void);
extern void func_ov006_021b0600(uint32_t);
extern int func_02081334(uint32_t, uint32_t);
extern void func_ov006_021ac56c(void);
extern uint32_t func_ov006_021b570c(uint32_t, FnPtr, uint32_t, uint32_t);
extern void func_ov006_021ac3b8(void);
extern void func_ov006_021ac430(void);

void func_ov006_021ab89c(void)
{
    Global *g = &data_ov006_021bc78c;
    State *s = g->f8;
    uint32_t st;
    int d;

    if (s->f38 != 0) {
        return;
    }
    if (s->f41 != 0) {
        s->f41--;
    }
    st = func_ov006_021af65c();
    switch (st) {
    case 1:
        g->f8->f45 = 1;
        return;
    case 2:
        if (g->f8->f41 != 0) {
            return;
        }
        func_ov006_021a3df0();
        g->f4 = (uint16_t)func_0209a76c(func_ov006_021af650() * 0x91, 0x37);
        func_ov006_021abc4c();
        g->f8->f41 = 4;
        return;
    case 3:
        g->f8->f45 = 0;
        g->f4 = (uint16_t)func_0209a76c(func_ov006_021af650() * 0x91, 0x37);
        func_ov006_021b0600(0x13);
        func_ov006_021abc4c();
        d = func_02081334(g->f4, 0x1d);
        if (d == 0) {
            func_ov006_021ac56c();
            return;
        }
        if (d < 0x10) {
            g->f8->f38 = func_ov006_021b570c(0, func_ov006_021ac3b8, 0, 0x78);
            return;
        }
        g->f8->f38 = func_ov006_021b570c(0, func_ov006_021ac430, 0, 0x78);
        return;
    case 4:
        if (g->f4 == 0) {
            if (g->f8->f46 != 0) {
                return;
            }
            func_ov006_021b0600(9);
            g->f8->f46 = 1;
            return;
        }
        func_ov006_021b0600(0x13);
        g->f8->f38 = func_ov006_021b570c(0, func_ov006_021ac3b8, 0, 0x78);
        return;
    case 6:
        if (g->f4 == 0x91) {
            if (g->f8->f46 != 0) {
                return;
            }
            func_ov006_021b0600(9);
            g->f8->f46 = 1;
            return;
        }
        func_ov006_021b0600(0x13);
        g->f8->f38 = func_ov006_021b570c(0, func_ov006_021ac430, 0, 0x78);
        return;
    case 5:
    case 7:
        g->f8->f46 = 0;
        break;
    default:
        break;
    }
}
