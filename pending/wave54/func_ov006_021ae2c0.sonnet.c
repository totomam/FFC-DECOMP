#include "ffc/types.h"

extern uint32_t func_ov006_021a6540(uint32_t x);
extern uint32_t func_ov006_021b4d94(void *p);
extern void func_ov006_021a3754(uint32_t x);
extern void func_ov006_021a3d68(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov006_021b4ca4(uint32_t x);
extern uint32_t func_ov006_021b4cd4(uint32_t x);
extern void func_ov006_021ae530(uint32_t x);
extern uint8_t data_ov006_021b8868[];
extern uint8_t data_ov006_021bc7b4[];
extern uint8_t data_ov006_021b88a8[];
extern uint8_t data_ov006_021b88ac[];
extern uint8_t data_ov006_021b88aa[];
extern uint8_t data_ov006_021b88ae[];

void func_ov006_021ae2c0(void)
{
    uint32_t i;
    uint32_t k = 1;
    for (i = 0; i < 4; i++) {
        if (func_ov006_021b4d94(data_ov006_021b8868 + (func_ov006_021a6540(k) << 5) + (i << 3))) {
            uint32_t x, y, z, w;
            func_ov006_021a3754(k);
            data_ov006_021bc7b4[1] = (uint8_t)i;
            x = func_ov006_021a6540(k);
            y = func_ov006_021a6540(k);
            z = func_ov006_021a6540(k);
            w = func_ov006_021a6540(k);
            func_ov006_021a3d68(
                *(uint16_t *)(data_ov006_021b88a8 + (x << 5) + ((int8_t)data_ov006_021bc7b4[1] << 3)),
                *(uint16_t *)(data_ov006_021b88ac + (y << 5) + ((int8_t)data_ov006_021bc7b4[1] << 3)),
                *(uint16_t *)(data_ov006_021b88aa + (z << 5) + ((int8_t)data_ov006_021bc7b4[1] << 3)),
                *(uint16_t *)(data_ov006_021b88ae + (w << 5) + ((int8_t)data_ov006_021bc7b4[1] << 3)));
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
        func_ov006_021ae530(1);
        return;
    }
    if (func_ov006_021b4cd4(0x80)) {
        func_ov006_021ae530(3);
        return;
    }
    if (func_ov006_021b4cd4(0x20)) {
        func_ov006_021ae530(0);
        return;
    }
    if (func_ov006_021b4cd4(0x10)) {
        func_ov006_021ae530(2);
    }
}
