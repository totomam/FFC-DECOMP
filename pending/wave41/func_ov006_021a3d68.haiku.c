#include "ffc/types.h"

extern void func_ov006_021a3df0(void);
extern uint32_t func_ov006_021b3e88(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3d84(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3cec(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t *data_ov006_021bc6f0;

void func_ov006_021a3d68(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    int i;
    uint32_t k;

    k = 6;
    func_ov006_021a3df0();
    for (i = 0; i < 4; i++) {
        data_ov006_021bc6f0[i] = func_ov006_021b3e88(0, k, 1);
        func_ov006_021b3d84(data_ov006_021bc6f0[i], 0xFFFFFFFF, 1);
        k++;
    }
    func_ov006_021b3cec(data_ov006_021bc6f0[0], 0xFFFFFFFF, a0, a2);
    func_ov006_021b3cec(data_ov006_021bc6f0[1], 0xFFFFFFFF, a1, a2);
    func_ov006_021b3cec(data_ov006_021bc6f0[2], 0xFFFFFFFF, a0, a3);
    func_ov006_021b3cec(data_ov006_021bc6f0[3], 0xFFFFFFFF, a1, a3);
}
