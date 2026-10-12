#include "ffc/types.h"

extern const uint8_t data_ov006_021b8138[];
extern const uint8_t data_ov006_021b8140[];
extern const uint8_t data_ov006_021b8130[];
extern uint32_t *data_ov006_021bc6fc;
extern const uint16_t data_ov006_021b8148[];
extern const uint16_t data_ov006_021b8110[];
extern const uint16_t data_ov006_021b8108[];

extern void func_ov006_021b4630(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_02081334(uint32_t a, uint32_t b);
extern void func_ov006_021b3c04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov006_021b3cec(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_ov006_021a4b14(uint32_t s, int idx, uint32_t arg2)
{
    uint8_t t[15];
    uint8_t a2;
    uint32_t ret, h, *hw;
    int n, k, i, cnt1, cnt2, cnt3;

    t[10] = data_ov006_021b8138[0];
    t[11] = data_ov006_021b8138[1];
    t[12] = data_ov006_021b8138[2];
    t[13] = data_ov006_021b8138[3];
    t[14] = data_ov006_021b8138[4];
    t[5] = data_ov006_021b8140[0];
    t[6] = data_ov006_021b8140[1];
    t[7] = data_ov006_021b8140[2];
    t[8] = data_ov006_021b8140[3];
    t[9] = data_ov006_021b8140[4];
    t[0] = data_ov006_021b8130[0];
    t[1] = data_ov006_021b8130[1];
    t[2] = data_ov006_021b8130[2];
    t[3] = data_ov006_021b8130[3];
    t[4] = data_ov006_021b8130[4];

    n = 12 * idx;
    if (t[10 + idx] > 0) {
        a2 = (uint8_t)arg2;
        cnt1 = t[10 + idx];
        k = 0;
        do {
            hw = (uint32_t *)data_ov006_021bc6fc[n + 12];
            *hw = *hw & 0xc1fffcffu;
            hw = (uint32_t *)data_ov006_021bc6fc[n + 12];
            h = data_ov006_021b8148[2 * n];
            *hw = (*hw & 0xfe00ff00u) | a2 | (((uint32_t)h << 23) >> 7);
            k++;
            n++;
        } while (k < cnt1);
    }

    if (idx < 4) {
        func_ov006_021b4630(data_ov006_021bc6fc[4 * s + idx],
                            data_ov006_021b8148[24 * idx],
                            arg2,
                            data_ov006_021bc6fc[idx + 65],
                            2);
    }

    ret = func_02081334((uint32_t)(idx + 3), 4);

    h = data_ov006_021b8110[2 * ret];
    h = (h << 23) >> 7;
    a2 = (uint8_t)arg2;
    cnt2 = t[5 + idx];
    if (cnt2 > 0) {
        k = 0;
        do {
            hw = (uint32_t *)data_ov006_021bc6fc[ret + 59];
            *hw = *hw & 0xc1fffcffu;
            hw = (uint32_t *)data_ov006_021bc6fc[ret + 59];
            *hw = (*hw & 0xfe00ff00u) | a2 | h;
            k++;
        } while (k < cnt2);
    }

    cnt3 = t[idx];
    if (cnt3 > 0) {
        i = 0;
        do {
            func_ov006_021b3c04(data_ov006_021bc6fc[i + 63], ~0u, 0, 0);
            func_ov006_021b3cec(data_ov006_021bc6fc[i + 63], ~0u, data_ov006_021b8108[2 * i], arg2);
            i++;
        } while (i < cnt3);
    }
}
