#include "ffc/types.h"

extern uint32_t func_ov006_021b3bf8(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3e20(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3d84(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3cec(uint32_t a, uint32_t b, uint16_t c, uint16_t d);
extern uint8_t *data_ov006_021bc6fc;
extern uint16_t data_ov006_021b8204[];
extern uint16_t data_ov006_021b8206[];

void func_ov006_021a4da4(uint32_t u0, uint32_t u1, uint32_t a2)
{
    uint8_t *p = data_ov006_021bc6fc;
    int r5;
    int r6;
    uint32_t off;
    uint32_t ret;
    int idx;

    switch (*(int8_t *)(p + 0x121)) {
    case 0x2f: r5 = 0x42; break;
    case 0x30: r5 = 0x41; break;
    case 0x31: r5 = 0x43; break;
    case 0x32: r5 = 0x41; break;
    case 0x33: r5 = 0x45; break;
    case 0x34: r5 = 0x45; break;
    default:   r5 = 0x40; break;
    }

    r6 = 0;
    off = 0x45 << 2;
    ret = func_ov006_021b3bf8(*(uint32_t *)(p + off), 0, a2);
    func_ov006_021b3e20(0, r5, ret);
    r5 = r6 - 1;
    p = data_ov006_021bc6fc;
    func_ov006_021b3d84(*(uint32_t *)(p + off), r5, 2);
    idx = *(int8_t *)(p + off + 0xd);
    func_ov006_021b3cec(*(uint32_t *)(p + off), r5,
                        data_ov006_021b8204[idx * 2],
                        data_ov006_021b8206[idx * 2]);
}
