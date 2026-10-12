#include "ffc/types.h"

extern uint32_t func_ov006_021b4d94(void *p);
extern void func_ov006_021a3754(uint32_t x);
extern void func_ov006_021a3d68(uint16_t a, uint16_t b, uint16_t c, uint16_t d);
extern uint32_t func_ov006_021b4ca4(uint32_t x);
extern uint32_t func_ov006_021b4cd4(uint32_t x);
extern void func_ov006_021a6f98(uint32_t x);
extern uint8_t data_ov006_021b84c8[];
extern uint8_t data_ov006_021bc73c;
extern uint8_t data_ov006_021b84dc[];
extern uint8_t data_ov006_021b84da[];
extern uint8_t data_ov006_021b84de[];
extern uint8_t data_ov006_021b84d8[];

void func_ov006_021a6dd8(void)
{
    uint32_t i;
    uint32_t idx;

    for (i = 0; i < 2; i++) {
        if (func_ov006_021b4d94(data_ov006_021b84c8 + i * 8)) {
            func_ov006_021a3754(1);
            data_ov006_021bc73c = (uint8_t)i;
            idx = data_ov006_021bc73c;
            func_ov006_021a3d68(*(uint16_t *)(data_ov006_021b84d8 + idx * 8),
                                *(uint16_t *)(data_ov006_021b84dc + idx * 8),
                                *(uint16_t *)(data_ov006_021b84da + idx * 8),
                                *(uint16_t *)(data_ov006_021b84de + idx * 8));
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
        func_ov006_021a6f98(1);
        return;
    }
    if (func_ov006_021b4cd4(0x80)) {
        func_ov006_021a6f98(3);
        return;
    }
    if (func_ov006_021b4cd4(0x20)) {
        func_ov006_021a6f98(0);
        return;
    }
    if (func_ov006_021b4cd4(0x10)) {
        func_ov006_021a6f98(2);
    }
}
