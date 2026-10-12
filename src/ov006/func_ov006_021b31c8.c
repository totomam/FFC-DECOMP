#include "ffc/types.h"

extern uint32_t func_ov006_021b1f6c(void);
extern void func_ov006_021b19c4(uint8_t *p, uint16_t v);
extern uint32_t func_ov006_021b1f78(uint32_t x);
extern uint32_t func_ov006_021b1c6c(void);
extern void func_ov006_021b1cac(void);
extern void func_ov006_021b1d3c(void);
extern uint32_t func_ov006_021b26a8(void);
extern void func_ov006_021b2c3c(void);
extern uint8_t *data_ov006_021bc808;

#define ST (data_ov006_021bc808[0xa90])

void func_ov006_021b31c8(void)
{
    switch (func_ov006_021b1f6c()) {
    case 1:
        func_ov006_021b19c4(data_ov006_021bc808 + 0xab4, *(uint16_t *)(data_ov006_021bc808 + 0x64a));
        return;
    case 2:
        if (func_ov006_021b1f78(2)) {
            ST = 5;
            return;
        }
        if (func_ov006_021b1f78(3) || func_ov006_021b1f78(4)) {
            ST = 6;
            return;
        }
        if (ST != 5) return;
        if (func_ov006_021b1f78(2)) return;
        ST = 0xd;
        return;
    case 3:
        if (func_ov006_021b1c6c()) {
            func_ov006_021b1cac();
            return;
        }
        if ((uint8_t)(ST + 0xfa) > 1) return;
        if (func_ov006_021b1f78(3)) return;
        ST = 0x12;
        return;
    case 5:
        ST = 7;
        return;
    case 7:
        func_ov006_021b1d3c();
        ST = 1;
        return;
    case 0: {
        uint32_t r = func_ov006_021b26a8();
        switch (r) {
        case 1: func_ov006_021b2c3c(); return;
        case 0: ST = 0x1f; return;
        case 3: return;
        default: ST = 0x1f; return;
        }
    }
    default:
        return;
    }
}
