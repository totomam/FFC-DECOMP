#include "ffc/types.h"

extern uint32_t func_ov006_021b3bf8(void *obj, int idx);
extern void func_ov006_021b3e20(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3d84(void *obj, uint32_t neg, int idx);
extern void func_ov006_021b3cec(void *obj, uint32_t neg, uint16_t a, uint16_t b);
extern void func_ov006_021b3c84(void *obj, uint32_t neg, int idx, uint8_t v);
extern void func_ov006_021b0cdc(uint32_t x);
extern uint8_t data_ov006_021b8964[];
extern uint8_t data_ov006_021b8973[];
extern void *data_ov006_021bc7ec[];
extern uint16_t data_ov006_021b8982[];

void func_ov006_021b09cc(uint32_t x)
{
    uint8_t *p1 = data_ov006_021b8964 + 5 * x;
    uint8_t *p2 = data_ov006_021b8973 + 5 * x;
    int i = 0;
    int j;
    j = i;

    do {
        uint32_t r = func_ov006_021b3bf8(((void **)data_ov006_021bc7ec[1])[i], j);
        func_ov006_021b3e20(1, p1[i], r);
        func_ov006_021b3d84(((void **)data_ov006_021bc7ec[1])[i], -1, j);
        func_ov006_021b3cec(((void **)data_ov006_021bc7ec[1])[i], -1, data_ov006_021b8982[2 * i], data_ov006_021b8982[2 * i + 1]);
        func_ov006_021b3c84(((void **)data_ov006_021bc7ec[1])[i], -1, j, p2[i]);
        i += 2;
    } while (i < 5);
    func_ov006_021b0cdc(x);
}
