#include "ffc/types.h"

typedef struct { uint8_t b[5]; } A5;
typedef struct { A5 c0, c1, c2; } T;
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
    T t;
    uint8_t a2;
    uint32_t ret, h, *hw;
    uint8_t *p2, *p1;
    int m, n, k, i, cnt1, cnt2, cnt3;

    p2 = t.c2.b;
    p1 = t.c1.b;
    t.c2 = *(const A5 *)data_ov006_021b8138;
    t.c1 = *(const A5 *)data_ov006_021b8140;
    t.c0 = *(const A5 *)data_ov006_021b8130;
    m = 12 * idx;
    n = m;
    if (p2[idx] > 0) {
        a2 = (uint8_t)arg2;
        cnt1 = t.c2.b[idx];
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
                            data_ov006_021b8148[2 * m],
                            arg2,
                            data_ov006_021bc6fc[idx + 65],
                            2);
    }

    ret = func_02081334((uint32_t)(idx + 3), 4);

    h = data_ov006_021b8110[2 * ret];
    h = (h << 23) >> 7;
    a2 = (uint8_t)arg2;
    if (p1[idx] > 0) {
        cnt2 = t.c1.b[idx];
        k = 0;
        do {
            hw = (uint32_t *)data_ov006_021bc6fc[ret + 59];
            *hw = *hw & 0xc1fffcffu;
            hw = (uint32_t *)data_ov006_021bc6fc[ret + 59];
            *hw = (*hw & 0xfe00ff00u) | a2 | h;
            k++;
        } while (k < cnt2);
    }

    cnt3 = t.c0.b[idx];
    if (cnt3 > 0) {
        i = 0;
        do {
            func_ov006_021b3c04(data_ov006_021bc6fc[i + 63], ~0u, 0, 0);
            func_ov006_021b3cec(data_ov006_021bc6fc[i + 63], ~0u, data_ov006_021b8108[2 * i], arg2);
            i++;
        } while (i < cnt3);
    }
}
