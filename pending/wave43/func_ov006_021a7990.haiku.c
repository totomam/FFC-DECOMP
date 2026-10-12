#include "ffc/types.h"

extern int func_ov006_021b4d94(void *p);
extern void func_ov006_021a3754(int x);
extern void func_ov006_021a3d68(uint16_t a, uint16_t b, uint16_t c, uint16_t d);
extern int func_ov006_021b4ca4(int x);
extern int func_ov006_021b4cd4(int x);
extern void func_ov006_021a7bb0(int x);
extern uint8_t data_ov006_021b8508[];
extern uint8_t data_ov006_021bc748;
extern uint8_t data_ov006_021b8524[];
extern uint8_t data_ov006_021b8522[];
extern uint8_t data_ov006_021b8526[];
extern uint8_t data_ov006_021b8520[];

#define HW(base, off) (*(uint16_t *)((base) + (off)))

void func_ov006_021a7990(void) {
    uint32_t i;
    for (i = 0; i < 3; i++) {
        if (func_ov006_021b4d94(data_ov006_021b8508 + i * 8)) {
            uint32_t idx;
            func_ov006_021a3754(1);
            data_ov006_021bc748 = i;
            idx = data_ov006_021bc748;
            func_ov006_021a3d68(HW(data_ov006_021b8520, idx * 8),
                                HW(data_ov006_021b8524, idx * 8),
                                HW(data_ov006_021b8522, idx * 8),
                                HW(data_ov006_021b8526, idx * 8));
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
        func_ov006_021a7bb0(1);
        return;
    }
    if (func_ov006_021b4cd4(0x80)) {
        func_ov006_021a7bb0(3);
    }
}
