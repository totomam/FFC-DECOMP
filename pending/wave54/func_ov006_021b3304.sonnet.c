#include "ffc/types.h"

extern uint32_t func_ov006_021b26a8(void);
extern void func_ov006_021b2a04(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b34d4(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b35cc(void);
extern uint32_t func_ov006_021b3688(void);

typedef struct {
    uint8_t p0[0x200];
    uint16_t v200;
    uint8_t p1[2];
    uint32_t v204;
    uint8_t p2[0x648 - 0x208];
    uint16_t v648;
    uint16_t v64a;
    uint8_t p3[0xa90 - 0x64c];
    uint8_t state;
    uint8_t p4[0xaa4 - 0xa91];
    uint8_t *tbl;
} S;
extern S *data_ov006_021bc808;

void func_ov006_021b3304(void)
{
    switch (func_ov006_021b26a8()) {
    case 1:
        func_ov006_021b2a04(4, (uint16_t)(data_ov006_021bc808->v648 + 1), data_ov006_021bc808->v64a);
        return;
    case 4:
    case 5:
    case 6: {
        int v = data_ov006_021bc808->v200;
        func_ov006_021b34d4(0, v, (uint32_t)data_ov006_021bc808->tbl + (v % 16) * 64);
        func_ov006_021b35cc();
        if (data_ov006_021bc808->state == 0x1b) return;
        if (data_ov006_021bc808->v204 > 0x1e0) {
            data_ov006_021bc808->state = 0x1b;
            return;
        }
        if (func_ov006_021b3688() == 0x10 || func_ov006_021b3688() == 0x20) {
            func_ov006_021b3688();
            data_ov006_021bc808->state = 10;
        } else if (func_ov006_021b3688() == 0x40) {
            data_ov006_021bc808->state = 0xb;
        } else if (func_ov006_021b3688() == 0xff) {
            data_ov006_021bc808->state = 0x1b;
        } else if (func_ov006_021b3688() == 0x50) {
            data_ov006_021bc808->state = 0x15;
        } else if (func_ov006_021b3688() == 0x60) {
            data_ov006_021bc808->state = 0x18;
        } else if (func_ov006_021b3688() == 0x70) {
            data_ov006_021bc808->state = 0x1b;
        } else if (func_ov006_021b3688() == 0) {
            data_ov006_021bc808->state = 8;
        } else if (func_ov006_021b3688() == 0xbd) {
            data_ov006_021bc808->state = 9;
        } else {
            data_ov006_021bc808->state = 0x1f;
        }
        return;
    }
    default:
        return;
    }
}
