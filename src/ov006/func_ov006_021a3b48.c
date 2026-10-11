#include "ffc/types.h"

extern uint8_t data_ov006_021bc6b0[];
extern uint8_t data_ov006_021b8094[];
extern void func_020928f0(void *d, void *s, uint32_t n);
extern uint32_t func_ov006_021a6524(void);

uint8_t *func_ov006_021a3b48(uint8_t *p)
{
    uint8_t v;
    uint32_t r;

    func_020928f0(data_ov006_021bc6b0, p, 0x3f);
    if (p[5] == 0x78) {
        return data_ov006_021bc6b0;
    }
    r = func_ov006_021a6524();
    if (p[5] == 0x79 && r != 0) {
        return data_ov006_021bc6b0;
    }
    v = data_ov006_021b8094[r];
    data_ov006_021bc6b0[5] = v;
    return data_ov006_021bc6b0;
}
