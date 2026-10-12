#include "ffc/types.h"

extern void func_ov006_021a3df0(void);
extern uint32_t func_ov006_021b3e88(uint32_t zero, uint8_t id, uint32_t one);
extern void func_ov006_021b3d84(uint32_t handle, uint32_t neg, uint32_t one);
extern void func_ov006_021b3cec(uint32_t handle, uint32_t neg, uint32_t x, uint32_t y);
extern uint8_t data_ov006_021b80d4[];
extern uint32_t *data_ov006_021bc6f0;

void func_ov006_021a3cfc(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    int i;
    uint8_t *p;

    func_ov006_021a3df0();
    p = &data_ov006_021b80d4[a * 2];
    for (i = 0; i < 2; i++) {
        data_ov006_021bc6f0[i] = func_ov006_021b3e88(0, p[i], 1);
        func_ov006_021b3d84(data_ov006_021bc6f0[i], (uint32_t)-1, 1);
    }
    func_ov006_021b3cec(data_ov006_021bc6f0[0], (uint32_t)-1, b, d);
    func_ov006_021b3cec(data_ov006_021bc6f0[1], (uint32_t)-1, c, d);
}
