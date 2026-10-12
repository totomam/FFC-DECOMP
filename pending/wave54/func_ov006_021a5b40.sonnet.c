#include "ffc/types.h"

extern uint8_t data_ov006_021b84a0[];
extern uint8_t data_ov006_021b84a8[];
extern uint8_t data_ov006_021b8498[];
extern uint32_t *data_ov006_021bc700;
extern uint16_t data_ov006_021b8400[];
extern uint16_t data_ov006_021b83ca[];
extern uint16_t data_ov006_021b83d2[];
extern void func_ov006_021b4630(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4);
extern void func_ov006_021b3c04(uint32_t p0, int p1, int p2, int p3);
extern void func_ov006_021b3cec(uint32_t p0, int p1, uint32_t p2, uint32_t p3);

void func_ov006_021a5b40(int a, uint32_t b)
{
    uint8_t buf[15];
    int i, k, k0; uint8_t *p0 = buf, *p1 = buf + 5, *p2 = buf + 10;

    buf[10] = data_ov006_021b84a0[0];
    buf[11] = data_ov006_021b84a0[1];
    buf[12] = data_ov006_021b84a0[2];
    buf[13] = data_ov006_021b84a0[3];
    buf[14] = data_ov006_021b84a0[4];
    buf[5] = data_ov006_021b84a8[0];
    buf[6] = data_ov006_021b84a8[1];
    buf[7] = data_ov006_021b84a8[2];
    buf[8] = data_ov006_021b84a8[3];
    buf[9] = data_ov006_021b84a8[4];
    buf[0] = data_ov006_021b8498[0];
    buf[1] = data_ov006_021b8498[1];
    buf[2] = data_ov006_021b8498[2];
    buf[3] = data_ov006_021b8498[3];
    buf[4] = data_ov006_021b8498[4];

    k0 = a * 3;
    k = k0;
    for (i = 0; i < p2[a]; i++, k++) {
        uint32_t *reg = (uint32_t *)data_ov006_021bc700[k + 4];
        *reg &= 0xc1fffcffu;
        reg = (uint32_t *)data_ov006_021bc700[k + 4];
        *reg = (*reg & 0xfe00ff00u) | (b & 0xffu) | (((uint32_t)data_ov006_021b8400[2 * k] << 23) >> 7);
    }

    if (a < 4) {
        func_ov006_021b4630(data_ov006_021bc700[a], data_ov006_021b8400[2 * k0], b, data_ov006_021bc700[a + 18], 2);
    }

    for (i = 0; i < p1[a]; i++) {
        uint32_t *reg = (uint32_t *)data_ov006_021bc700[i + 14];
        *reg &= 0xc1fffcffu;
        reg = (uint32_t *)data_ov006_021bc700[i + 14];
        *reg = (*reg & 0xfe00ff00u) | (b & 0xffu) | (((uint32_t)data_ov006_021b83ca[2 * i] << 23) >> 7);
    }

    for (i = 0; i < p0[a]; i++) {
        func_ov006_021b3c04(data_ov006_021bc700[i + 16], -1, 0, 0);
        func_ov006_021b3cec(data_ov006_021bc700[i + 16], -1, data_ov006_021b83d2[2 * i], b);
    }
}
