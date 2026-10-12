#include "ffc/types.h"

extern uint32_t func_ov006_021b4d94(void *p);
extern void func_ov006_021a3754(int x);
extern void func_ov006_021addb4(void);
extern uint32_t func_ov006_021b4ca4(int x);
extern uint32_t func_ov006_021b4cd4(int x);
extern void func_ov006_021ade00(int x);
extern uint8_t data_ov006_021b8794[];
extern uint8_t data_ov006_021bc7ac;

void func_ov006_021adab4(void)
{
    uint32_t i;

    for (i = 0; i < 7; i++) {
        if (func_ov006_021b4d94(data_ov006_021b8794 + (i << 3))) {
            func_ov006_021a3754(1);
            data_ov006_021bc7ac = (uint8_t)i;
            func_ov006_021addb4();
            return;
        }
    }

    if (func_ov006_021b4ca4(1)) {
        func_ov006_021a3754(1);
        return;
    }
    if (func_ov006_021b4ca4(2)) {
        func_ov006_021a3754(0);
        return;
    }
    if (func_ov006_021b4cd4(0x40)) {
        func_ov006_021ade00(1);
        return;
    }
    if (func_ov006_021b4cd4(0x80)) {
        func_ov006_021ade00(3);
        return;
    }
    if (func_ov006_021b4cd4(0x20)) {
        func_ov006_021ade00(0);
        return;
    }
    if (func_ov006_021b4cd4(0x10)) {
        func_ov006_021ade00(2);
    }
}
