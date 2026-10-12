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
    int v;
    int z = 0;
    uint32_t ret;
    int idx;

    switch (*(int8_t *)(data_ov006_021bc6fc + 0x121)) {
    case 0x2f: v = 0x42; break;
    case 0x30: v = 0x41; break;
    case 0x31: v = 0x43; break;
    case 0x32: v = 0x41; break;
    case 0x33:
    case 0x34: v = 0x45; break;
    default:   v = 0x40; break;
    }

    ret = func_ov006_021b3bf8(*(uint32_t *)(data_ov006_021bc6fc + 0x114), z, a2);
    func_ov006_021b3e20(0, v, ret);
    v = z - 1;
    func_ov006_021b3d84(*(uint32_t *)(data_ov006_021bc6fc + 0x114), v, 2);
    idx = *(int8_t *)(data_ov006_021bc6fc + 0x114 + 0xd);
    func_ov006_021b3cec(*(uint32_t *)(data_ov006_021bc6fc + 0x114), v,
                        data_ov006_021b8204[idx * 2],
                        data_ov006_021b8206[idx * 2]);
}
